// Copyright (C) 2002-2005 Nikolaus Gebhardt/Alten Thomas
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in irrlicht.h

#include "CTRTextureLightMap2_M1.h"

// compile flag for this file

#undef IPOL_Z
#undef CMP_Z
#undef WRITE_Z

#undef SUBTEXEL

#undef IPOL_W
#undef IPOL_C
#undef IPOL_T0
#undef IPOL_T1

// define render case

#define IPOL_Z
#define CMP_Z
#define WRITE_Z

#define SUBTEXEL

#define IPOL_W
//#define IPOL_C
#define IPOL_T0
#define IPOL_T1

// apply global override

#ifndef SOFTWARE_DRIVER_2_VERTEX_COLOR
	#undef IPOL_C
#endif

#ifndef SOFTWARE_DRIVER_2_PERSPECTIVE_CORRECT
	#undef IPOL_W
#endif

#ifndef SOFTWARE_DRIVER_2_SUBTEXEL
	#undef SUBTEXEL
#endif




namespace irr
{

namespace video
{

//! constructor
CTRTextureLightMap2_M1::CTRTextureLightMap2_M1(IZBuffer2* zbuffer)
: RenderTarget(0),	SurfaceHeight(0), SurfaceWidth(0),
	 ZBuffer(zbuffer)
{
	IT[0].Texture = 0;
	IT[1].Texture = 0;

	#ifdef _DEBUG
	setDebugName("CTRTextureLightMap2_M1");
	#endif

	if (ZBuffer)
		zbuffer->grab();
}



//! destructor
CTRTextureLightMap2_M1::~CTRTextureLightMap2_M1()
{
	if (RenderTarget)
		RenderTarget->drop();

	if (ZBuffer)
		ZBuffer->drop();

	if ( IT[0].Texture )
		IT[0].Texture->drop();

	if ( IT[1].Texture )
		IT[1].Texture->drop();

}



//! sets the Texture
void CTRTextureLightMap2_M1::setTexture(u32 stage, video::IImage* texture)
{
	sInternalTexture *it = &IT[stage];

	if ( it->Texture)
		it->Texture->drop();

	it->Texture = texture;

	if ( it->Texture)
	{
		it->Texture->grab();
		it->lockedTextureWidth = it->Texture->getDimension().Width;

		it->textureXMask = it->lockedTextureWidth-1;
		it->textureYMask = it->Texture->getDimension().Height-1;

	}
}



//! sets a render target
void CTRTextureLightMap2_M1::setRenderTarget(video::IImage* surface, const core::rect<s32>& viewPort)
{
	if (RenderTarget)
		RenderTarget->drop();

	RenderTarget = surface;

	if (RenderTarget)
	{
		SurfaceWidth = RenderTarget->getDimension().Width;
		SurfaceHeight = RenderTarget->getDimension().Height;
		RenderTarget->grab();
		ViewPortRect = viewPort;
	}		
}





/*!
*/
inline void CTRTextureLightMap2_M1::scanline_bilinear ( sScanLineData * data ) const
{
	u16 *dst;

#ifdef IPOL_Z
	TZBufferType2 *z;
#endif

	s32 xStart;
	s32 xEnd;
	s32 dx;

	f32 invDeltaX;

#ifdef SUBTEXEL
	f32 subPixel;
#endif

#ifdef IPOL_Z
	f32 slopeZ;
#endif
#ifdef IPOL_W
	f32 slopeW;
#endif
#ifdef IPOL_C
	sVec4 slopeC;
#endif
#ifdef IPOL_T0
	core::vector2d<f32> slopeT0;
#endif
#ifdef IPOL_T1
	core::vector2d<f32> slopeT1;
#endif

	// apply top-left fill-convention, left
	xStart = ceil32( data->x[0] );
	xEnd = ceil32( data->x[1] ) - 1;

	dx = xEnd - xStart;

	if ( dx < 0 )
		return;

	// slopes
	invDeltaX = data->x[1] - data->x[0];
	invDeltaX = inverse32 ( invDeltaX );

#ifdef IPOL_Z
	slopeZ = (data->z[1] - data->z[0]) * invDeltaX;
#endif
#ifdef IPOL_W
	slopeW = (data->w[1] - data->w[0]) * invDeltaX;
#endif
#ifdef IPOL_C
	slopeC = (data->c[1] - data->c[0]) * invDeltaX;
#endif
#ifdef IPOL_T0
	slopeT0 = (data->t0[1] - data->t0[0]) * invDeltaX;
#endif
#ifdef IPOL_T1
	slopeT1 = (data->t1[1] - data->t1[0]) * invDeltaX;
#endif

#ifdef SUBTEXEL
	subPixel = ( (f32) xStart ) - data->x[0];
#ifdef IPOL_Z
	data->z[0] += slopeZ * subPixel;
#endif
#ifdef IPOL_W
	data->w[0] += slopeW * subPixel;
#endif
#ifdef IPOL_C
	data->c[0] += slopeC * subPixel;
#endif
#ifdef IPOL_T0
	data->t0[0] += slopeT0 * subPixel;
#endif
#ifdef IPOL_T1
	data->t1[0] += slopeT1 * subPixel;
#endif
#endif

	dst = lockedSurface + ( data->y * SurfaceWidth ) + xStart;

#ifdef IPOL_Z
	z = lockedZBuffer + ( data->y * SurfaceWidth ) + xStart;
#endif


#ifdef IPOL_W
	f32 inversew;
#endif

	tFixPoint tx0, tx1;
	tFixPoint ty0, ty1;

	tFixPoint r0, g0, b0;
	tFixPoint r1, g1, b1;
	tFixPoint r2, g2, b2;

	for ( s32 i = 0; i <= dx; ++i )
	{
#ifdef CMP_Z
		if ( data->z[0] < z[i] )
#endif
		{
#ifdef IPOL_W
			inversew = inverse32 ( data->w[0] );

			tx0 = f32_to_fixPoint ( data->t0[0].X * inversew * IT[0].textureXMask );
			ty0 = f32_to_fixPoint ( data->t0[0].Y * inversew * IT[0].textureYMask );
			tx1 = f32_to_fixPoint ( data->t1[0].X * inversew * IT[1].textureXMask );
			ty1 = f32_to_fixPoint ( data->t1[0].Y * inversew * IT[1].textureYMask );
#else
			tx0 = f32_to_fixPoint ( data->t0[0].X * IT[0].textureXMask );
			ty0 = f32_to_fixPoint ( data->t0[0].Y * IT[0].textureYMask );
			tx1 = f32_to_fixPoint ( data->t1[0].X * IT[1].textureXMask );
			ty1 = f32_to_fixPoint ( data->t1[0].Y * IT[1].textureYMask );

#endif
			getSample_texture ( r0, g0, b0, &IT[0], imodFix ( tx0, IT[0].textureXMask ), imodFix ( ty0, IT[0].textureYMask ) );
			getSample_texture ( r1, g1, b1, &IT[1], imodFix ( tx1, IT[1].textureXMask ), imodFix ( ty1, IT[1].textureYMask ) );

			r2 = clampFix31 ( imulFix ( r0, r1 ) );
			g2 = clampFix31 ( imulFix ( g0, g1 ) );
			b2 = clampFix31 ( imulFix ( b0, b1 ) );

			dst[i] = getA1R5G5B5 ( r2, g2, b2 );

#ifdef WRITE_Z
			z[i] = data->z[0];
#endif
		}

#ifdef IPOL_Z
		data->z[0] += slopeZ;
#endif
#ifdef IPOL_W
		data->w[0] += slopeW;
#endif
#ifdef IPOL_C
		data->c[0] += slopeC;
#endif
#ifdef IPOL_T0
		data->t0[0] += slopeT0;
#endif
#ifdef IPOL_T1
		data->t1[0] += slopeT1;
#endif
	}

}

void CTRTextureLightMap2_M1::drawTriangle ( const s4DVertex *a,const s4DVertex *b,const s4DVertex *c )
{
	sScanConvertData scan;
	sScanLineData line;


	// sort on height, y
	if ( a->Pos.y > b->Pos.y ) swapVertices(&a, &b);
	if ( a->Pos.y > c->Pos.y ) swapVertices(&a, &c);
	if ( b->Pos.y > c->Pos.y ) swapVertices(&b, &c);


	// calculate delta y of the edges
	scan.invDeltaY[0] = c->Pos.y - a->Pos.y;
	scan.invDeltaY[1] = b->Pos.y - a->Pos.y;
	scan.invDeltaY[2] = c->Pos.y - b->Pos.y;

	scan.invDeltaY[0] = inverse32 ( scan.invDeltaY[0] );
	scan.invDeltaY[1] = inverse32 ( scan.invDeltaY[1] );
	scan.invDeltaY[2] = inverse32 ( scan.invDeltaY[2] );

	if ( (f32) 0.0 == scan.invDeltaY[0] )
		return;

	// find if the major edge is left or right aligned
	f32 temp[4];

	temp[0] = a->Pos.x - c->Pos.x;
	temp[1] = a->Pos.y - c->Pos.y;
	temp[2] = b->Pos.x - a->Pos.x;
	temp[3] = b->Pos.y - a->Pos.y;

	scan.left = ( temp[0] * temp[3] - temp[1] * temp[2] ) > (f32) 0.0 ? 0 : 1;
	scan.right = 1 - scan.left;

	// calculate slopes for the major edge
	scan.slopeX[0] = (c->Pos.x - a->Pos.x) * scan.invDeltaY[0];
	scan.x[0] = a->Pos.x;

#ifdef IPOL_Z
	scan.slopeZ[0] = (c->Pos.z - a->Pos.z) * scan.invDeltaY[0];
	scan.z[0] = a->Pos.z;
#endif

#ifdef IPOL_W
	scan.slopeW[0] = (c->Pos.w - a->Pos.w) * scan.invDeltaY[0];
	scan.w[0] = a->Pos.w;
#endif

#ifdef IPOL_C
	scan.slopeC[0] = (c->Color - a->Color) * scan.invDeltaY[0];
	scan.c[0] = a->Color;
#endif

#ifdef IPOL_T0
	scan.slopeT0[0] = (c->TCoords0 - a->TCoords0) * scan.invDeltaY[0];
	scan.t0[0] = a->TCoords0;
#endif

#ifdef IPOL_T1
	scan.slopeT1[0] = (c->TCoords1 - a->TCoords1) * scan.invDeltaY[0];
	scan.t1[0] = a->TCoords1;
#endif

	// top left fill convention y run
	s32 yStart;
	s32 yEnd;
	s32 y;

#ifdef SUBTEXEL
	f32 subPixel;
#endif

	lockedSurface = (u16*)RenderTarget->lock();

#ifdef IPOL_Z
	lockedZBuffer = ZBuffer->lock();
#endif

#ifdef IPOL_T0
	IT[0].lockedTexture = (u16*)IT[0].Texture->lock();
#endif

#ifdef IPOL_T1
	IT[1].lockedTexture = (u16*)IT[1].Texture->lock();
#endif

	// rasterize upper sub-triangle
	if ( (f32) 0.0 != scan.invDeltaY[1]  )
	{
		// calculate slopes for top edge
		scan.slopeX[1] = (b->Pos.x - a->Pos.x) * scan.invDeltaY[1];
		scan.x[1] = a->Pos.x;

#ifdef IPOL_Z
		scan.slopeZ[1] = (b->Pos.z - a->Pos.z) * scan.invDeltaY[1];
		scan.z[1] = a->Pos.z;
#endif

#ifdef IPOL_W
		scan.slopeW[1] = (b->Pos.w - a->Pos.w) * scan.invDeltaY[1];
		scan.w[1] = a->Pos.w;
#endif

#ifdef IPOL_C
		scan.slopeC[1] = (b->Color - a->Color) * scan.invDeltaY[1];
		scan.c[1] = a->Color;
#endif

#ifdef IPOL_T0
		scan.slopeT0[1] = (b->TCoords0 - a->TCoords0) * scan.invDeltaY[1];
		scan.t0[1] = a->TCoords0;
#endif

#ifdef IPOL_T1
		scan.slopeT1[1] = (b->TCoords1 - a->TCoords1) * scan.invDeltaY[1];
		scan.t1[1] = a->TCoords1;
#endif

		// apply top-left fill convention, top part
		yStart = ceil32( a->Pos.y );
		yEnd = ceil32( b->Pos.y ) - 1;

#ifdef SUBTEXEL
		subPixel = ( (f32) yStart ) - a->Pos.y;

		// correct to pixel center
		scan.x[0] += scan.slopeX[0] * subPixel;
		scan.x[1] += scan.slopeX[1] * subPixel;		

#ifdef IPOL_Z
		scan.z[0] += scan.slopeZ[0] * subPixel;
		scan.z[1] += scan.slopeZ[1] * subPixel;		
#endif

#ifdef IPOL_W
		scan.w[0] += scan.slopeW[0] * subPixel;
		scan.w[1] += scan.slopeW[1] * subPixel;		
#endif

#ifdef IPOL_C
		scan.c[0] += scan.slopeC[0] * subPixel;
		scan.c[1] += scan.slopeC[1] * subPixel;		
#endif

#ifdef IPOL_T0
		scan.t0[0] += scan.slopeT0[0] * subPixel;
		scan.t0[1] += scan.slopeT0[1] * subPixel;		
#endif

#ifdef IPOL_T1
		scan.t1[0] += scan.slopeT1[0] * subPixel;
		scan.t1[1] += scan.slopeT1[1] * subPixel;		
#endif

#endif

		// rasterize the edge scanlines
		for( y = yStart; y <= yEnd; ++y)
		{
			line.y = y;

			line.x[scan.left] = scan.x[0];
			line.x[scan.right] = scan.x[1];

#ifdef IPOL_Z
			line.z[scan.left] = scan.z[0];
			line.z[scan.right] = scan.z[1];
#endif

#ifdef IPOL_W
			line.w[scan.left] = scan.w[0];
			line.w[scan.right] = scan.w[1];
#endif

#ifdef IPOL_C
			line.c[scan.left] = scan.c[0];
			line.c[scan.right] = scan.c[1];
#endif

#ifdef IPOL_T0
			line.t0[scan.left] = scan.t0[0];
			line.t0[scan.right] = scan.t0[1];
#endif

#ifdef IPOL_T1
			line.t1[scan.left] = scan.t1[0];
			line.t1[scan.right] = scan.t1[1];
#endif

			// render a scanline
			scanline_bilinear ( &line );

			scan.x[0] += scan.slopeX[0];
			scan.x[1] += scan.slopeX[1];

#ifdef IPOL_Z
			scan.z[0] += scan.slopeZ[0];
			scan.z[1] += scan.slopeZ[1];
#endif

#ifdef IPOL_W
			scan.w[0] += scan.slopeW[0];
			scan.w[1] += scan.slopeW[1];
#endif

#ifdef IPOL_C
			scan.c[0] += scan.slopeC[0];
			scan.c[1] += scan.slopeC[1];
#endif

#ifdef IPOL_T0
			scan.t0[0] += scan.slopeT0[0];
			scan.t0[1] += scan.slopeT0[1];
#endif

#ifdef IPOL_T1
			scan.t1[0] += scan.slopeT1[0];
			scan.t1[1] += scan.slopeT1[1];
#endif

		}
	}

	// rasterize lower sub-triangle
	if ( (f32) 0.0 != scan.invDeltaY[2] )
	{
		// advance to middle point
		if( (f32) 0.0 != scan.invDeltaY[1] )
		{
			temp[0] = b->Pos.y - a->Pos.y;	// dy

			scan.x[0] = a->Pos.x + scan.slopeX[0] * temp[0];
#ifdef IPOL_Z
			scan.z[0] = a->Pos.z + scan.slopeZ[0] * temp[0];
#endif
#ifdef IPOL_W
			scan.w[0] = a->Pos.w + scan.slopeW[0] * temp[0];
#endif
#ifdef IPOL_C
			scan.c[0] = a->Color + scan.slopeC[0] * temp[0];
#endif
#ifdef IPOL_T0
			scan.t0[0] = a->TCoords0 + scan.slopeT0[0] * temp[0];
#endif
#ifdef IPOL_T1
			scan.t1[0] = a->TCoords1 + scan.slopeT1[0] * temp[0];
#endif

		}

		// calculate slopes for bottom edge
		scan.slopeX[1] = (c->Pos.x - b->Pos.x) * scan.invDeltaY[2];
		scan.x[1] = b->Pos.x;

#ifdef IPOL_Z
		scan.slopeZ[1] = (c->Pos.z - b->Pos.z) * scan.invDeltaY[2];
		scan.z[1] = b->Pos.z;
#endif

#ifdef IPOL_W
		scan.slopeW[1] = (c->Pos.w - b->Pos.w) * scan.invDeltaY[2];
		scan.w[1] = b->Pos.w;
#endif

#ifdef IPOL_C
		scan.slopeC[1] = (c->Color - b->Color) * scan.invDeltaY[2];
		scan.c[1] = b->Color;
#endif

#ifdef IPOL_T0
		scan.slopeT0[1] = (c->TCoords0 - b->TCoords0) * scan.invDeltaY[2];
		scan.t0[1] = b->TCoords0;
#endif

#ifdef IPOL_T1
		scan.slopeT1[1] = (c->TCoords1 - b->TCoords1) * scan.invDeltaY[2];
		scan.t1[1] = b->TCoords1;
#endif

		// apply top-left fill convention, top part
		yStart = ceil32( b->Pos.y );
		yEnd = ceil32( c->Pos.y ) - 1;

#ifdef SUBTEXEL

		subPixel = ( (f32) yStart ) - b->Pos.y;

		// correct to pixel center
		scan.x[0] += scan.slopeX[0] * subPixel;
		scan.x[1] += scan.slopeX[1] * subPixel;		

#ifdef IPOL_Z
		scan.z[0] += scan.slopeZ[0] * subPixel;
		scan.z[1] += scan.slopeZ[1] * subPixel;		
#endif

#ifdef IPOL_W
		scan.w[0] += scan.slopeW[0] * subPixel;
		scan.w[1] += scan.slopeW[1] * subPixel;		
#endif

#ifdef IPOL_C
		scan.c[0] += scan.slopeC[0] * subPixel;
		scan.c[1] += scan.slopeC[1] * subPixel;		
#endif

#ifdef IPOL_T0
		scan.t0[0] += scan.slopeT0[0] * subPixel;
		scan.t0[1] += scan.slopeT0[1] * subPixel;		
#endif

#ifdef IPOL_T1
		scan.t1[0] += scan.slopeT1[0] * subPixel;
		scan.t1[1] += scan.slopeT1[1] * subPixel;		
#endif

#endif

		// rasterize the edge scanlines
		for( y = yStart; y <= yEnd; ++y)
		{
			line.y = y;
			line.x[scan.left] = scan.x[0];
			line.x[scan.right] = scan.x[1];

#ifdef IPOL_Z
			line.z[scan.left] = scan.z[0];
			line.z[scan.right] = scan.z[1];
#endif

#ifdef IPOL_W
			line.w[scan.left] = scan.w[0];
			line.w[scan.right] = scan.w[1];
#endif

#ifdef IPOL_C
			line.c[scan.left] = scan.c[0];
			line.c[scan.right] = scan.c[1];
#endif

#ifdef IPOL_T0
			line.t0[scan.left] = scan.t0[0];
			line.t0[scan.right] = scan.t0[1];
#endif

#ifdef IPOL_T1
			line.t1[scan.left] = scan.t1[0];
			line.t1[scan.right] = scan.t1[1];
#endif

			// render a scanline
			scanline_bilinear ( &line );

			scan.x[0] += scan.slopeX[0];
			scan.x[1] += scan.slopeX[1];

#ifdef IPOL_Z
			scan.z[0] += scan.slopeZ[0];
			scan.z[1] += scan.slopeZ[1];
#endif

#ifdef IPOL_W
			scan.w[0] += scan.slopeW[0];
			scan.w[1] += scan.slopeW[1];
#endif

#ifdef IPOL_C
			scan.c[0] += scan.slopeC[0];
			scan.c[1] += scan.slopeC[1];
#endif

#ifdef IPOL_T0
			scan.t0[0] += scan.slopeT0[0];
			scan.t0[1] += scan.slopeT0[1];
#endif

#ifdef IPOL_T1
			scan.t1[0] += scan.slopeT1[0];
			scan.t1[1] += scan.slopeT1[1];
#endif

		}
	}

	RenderTarget->unlock();

#ifdef IPOL_Z
	ZBuffer->unlock();
#endif

#ifdef IPOL_T0
	IT[0].Texture->unlock();
#endif

#ifdef IPOL_T1
	IT[1].Texture->unlock();
#endif

}





//! creates a flat triangle renderer
ITriangleRenderer2* createTriangleRendererTextureLightMap2_M1(IZBuffer2* zbuffer)
{
	return new CTRTextureLightMap2_M1(zbuffer);
}


} // end namespace video
} // end namespace irr


