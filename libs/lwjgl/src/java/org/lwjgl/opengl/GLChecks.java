/*
 * Copyright (c) 2002-2004 LWJGL Project
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 *
 * * Neither the name of 'LWJGL' nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
package org.lwjgl.opengl;

import java.nio.Buffer;

import org.lwjgl.BufferUtils;

/**
 * $Id: GLChecks.java,v 1.2 2005/05/04 20:59:37 cix_foo Exp $ A class to check buffer boundaries in GL methods. Many GL
 * methods read data from the GL into a native Buffer at its current position. If there is unsufficient space in the buffer when
 * the call is made then a buffer overflow would otherwise occur and cause unexpected behaviour, a crash, or worse, a security
 * risk. Therefore in those methods where GL reads data back into a buffer, we will call a bounds check method from this class
 * to ensure that there is sufficient space in the buffer.
 * <p/>
 * Thrown by the debug build library of the LWJGL if any OpenGL operation causes an error.
 *
 * @author cix_foo <cix_foo@users.sourceforge.net>
 * @version $Revision: 1.2 $
 */
class GLChecks {

	/** Static methods only! */
	private GLChecks() {
	}

	static References getReferences() {
		return StateTracker.getReferencesStack().getReferences();
	}

	/** Helper method to ensure that array buffer objects are disabled. If they are enabled, we'll throw an OpenGLException */
	static void ensureArrayVBOdisabled() {
		if (StateTracker.getVBOArrayStack().getState() != 0)
			throw new OpenGLException("Cannot use Buffers when Array Buffer Object is enabled");
	}

	/** Helper method to ensure that array buffer objects are enabled. If they are disabled, we'll throw an OpenGLException */
	static void ensureArrayVBOenabled() {
		if (StateTracker.getVBOArrayStack().getState() == 0)
			throw new OpenGLException("Cannot use offsets when Array Buffer Object is disabled");
	}

	/** Helper method to ensure that element array buffer objects are disabled. If they are enabled, we'll throw an OpenGLException */
	static void ensureElementVBOdisabled() {
		if (StateTracker.getVBOElementStack().getState() != 0)
			throw new OpenGLException("Cannot use Buffers when Element Array Buffer Object is enabled");
	}

	/** Helper method to ensure that element array buffer objects are enabled. If they are disabled, we'll throw an OpenGLException */
	static void ensureElementVBOenabled() {
		if (StateTracker.getVBOElementStack().getState() == 0)
			throw new OpenGLException("Cannot use offsets when Element Array Buffer Object is disabled");
	}

	/** Helper method to ensure that pixel pack buffer objects are disabled. If they are enabled, we'll throw an OpenGLException */
	static void ensurePackPBOdisabled() {
		if (StateTracker.getPBOPackStack().getState() != 0)
			throw new OpenGLException("Cannot use Buffers when Pixel Pack Buffer Object is enabled");
	}

	/** Helper method to ensure that pixel pack buffer objects are enabled. If they are disabled, we'll throw an OpenGLException */
	static void ensurePackPBOenabled() {
		if (StateTracker.getPBOPackStack().getState() == 0)
			throw new OpenGLException("Cannot use offsets when Pixel Pack Buffer Object is disabled");
	}

	/** Helper method to ensure that pixel unpack buffer objects are disabled. If they are enabled, we'll throw an OpenGLException */
	static void ensureUnpackPBOdisabled() {
		if (StateTracker.getPBOUnpackStack().getState() != 0)
			throw new OpenGLException("Cannot use Buffers when Pixel Unpack Buffer Object is enabled");
	}

	/** Helper method to ensure that pixel unpack buffer objects are enabled. If they are disabled, we'll throw an OpenGLException */
	static void ensureUnpackPBOenabled() {
		if (StateTracker.getPBOUnpackStack().getState() == 0)
			throw new OpenGLException("Cannot use offsets when Pixel Unpack Buffer Object is disabled");
	}

	/**
	 * Calculate the storage required for an image in elements
	 *
	 * @param format The format of the image (example: GL_RGBA)
	 * @param type   The type of the image elements (example: GL_UNSIGNED_BYTE)
	 * @param width  The width of the image
	 * @param height The height of the image (1 for 1D images)
	 * @param depth  The depth of the image (1 for 2D images)
	 *
	 * @return the size, in elements, of the image
	 */
	static int calculateImageStorage(Buffer buffer, int format, int type, int width, int height, int depth) {
		return calculateImageStorage(format, type, width, height, depth) >> BufferUtils.getElementSizeExponent(buffer);
	}

	static int calculateTexImage1DStorage(Buffer buffer, int format, int type, int width, int border) {
		return calculateTexImage1DStorage(format, type, width, border) >> BufferUtils.getElementSizeExponent(buffer);
	}

	static int calculateTexImage2DStorage(Buffer buffer, int format, int type, int width, int height, int border) {
		return calculateTexImage2DStorage(format, type, width, height, border) >> BufferUtils.getElementSizeExponent(buffer);
	}

	static int calculateTexImage3DStorage(Buffer buffer, int format, int type, int width, int height, int depth, int border) {
		return calculateTexImage3DStorage(format, type, width, height, depth, border) >> BufferUtils.getElementSizeExponent(buffer);
	}

	/**
	 * Calculate the storage required for an image in bytes.
	 *
	 * @param format The format of the image (example: GL_RGBA)
	 * @param type   The type of the image elements (example: GL_UNSIGNED_BYTE)
	 * @param width  The width of the image
	 * @param height The height of the image (1 for 1D images)
	 * @param depth  The depth of the image (1 for 2D images)
	 *
	 * @return the size, in bytes, of the image
	 */
	private static int calculateImageStorage(int format, int type, int width, int height, int depth) {
		return calculateBytesPerPixel(format, type) * width * height * depth;
	}

	private static int calculateTexImage1DStorage(int format, int type, int width, int border) {
		return calculateBytesPerPixel(format, type) * (width + (border << 1));
	}

	private static int calculateTexImage2DStorage(int format, int type, int width, int height, int border) {
		return calculateTexImage1DStorage(format, type, width, border) * (height + (border << 1));
	}

	private static int calculateTexImage3DStorage(int format, int type, int width, int height, int depth, int border) {
		return calculateTexImage2DStorage(format, type, width, height, border) * (depth + (border << 1));
	}

	private static int calculateBytesPerPixel(int format, int type) {
		int bpe;
		switch ( type ) {
			case GL11.GL_UNSIGNED_BYTE:
			case GL11.GL_BYTE:
				bpe = 1;
				break;
			case GL11.GL_UNSIGNED_SHORT:
			case GL11.GL_SHORT:
				bpe = 2;
				break;
			case GL11.GL_UNSIGNED_INT:
			case GL11.GL_INT:
			case GL11.GL_FLOAT:
				bpe = 4;
				break;
			default :
				// TODO: Add more types (like the GL12 types GL_UNSIGNED_INT_8_8_8_8
				return 0;
				//		throw new IllegalArgumentException("Unknown type " + type);
		}
		int epp;
		switch ( format ) {
			case GL11.GL_LUMINANCE:
			case GL11.GL_ALPHA:
				epp = 1;
				break;

			case GL11.GL_LUMINANCE_ALPHA:
				epp = 2;
				break;
			case GL11.GL_RGB:
			case EXTBgra.GL_BGR_EXT:
				epp = 3;
				break;
			case GL11.GL_RGBA:
			case EXTAbgr.GL_ABGR_EXT:
			case EXTBgra.GL_BGRA_EXT:
				epp = 4;
				break;
			default :
				// TODO: Add more formats. Assuming 4 is too wasteful on buffer sizes where e.g. 1 is enough (like GL_DEPTH_COMPONENT)
				return 0;
/*				// Assume 4 elements per pixel
				epp = 4;*/
		}

		return bpe * epp;
	}
}
