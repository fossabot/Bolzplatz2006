/* MACHINE GENERATED FILE, DO NOT EDIT */

#include <jni.h>
#include "extgl.h"

typedef void (APIENTRY *glViewportPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY *glStencilMaskPROC) (GLuint mask);
typedef void (APIENTRY *glStencilOpPROC) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (APIENTRY *glTexCoord4fPROC) (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (APIENTRY *glTexCoord3fPROC) (GLfloat s, GLfloat t, GLfloat r);
typedef void (APIENTRY *glTexCoord2fPROC) (GLfloat s, GLfloat t);
typedef void (APIENTRY *glTexCoord1fPROC) (GLfloat s);
typedef void (APIENTRY *glTexCoordPointerPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
typedef void (APIENTRY *glTexEnvivPROC) (GLenum target, GLenum pname, const GLint * params);
typedef void (APIENTRY *glTexEnvfvPROC) (GLenum target, GLenum pname, const GLfloat * params);
typedef void (APIENTRY *glTexEnviPROC) (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY *glTexEnvfPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY *glTexGenivPROC) (GLenum coord, GLenum pname, const GLint * params);
typedef void (APIENTRY *glTexGeniPROC) (GLenum coord, GLenum pname, GLint param);
typedef void (APIENTRY *glTexGenfvPROC) (GLenum coord, GLenum pname, const GLfloat * params);
typedef void (APIENTRY *glTexGenfPROC) (GLenum coord, GLenum pname, GLfloat param);
typedef void (APIENTRY *glTexParameterivPROC) (GLenum target, GLenum pname, const GLint * param);
typedef void (APIENTRY *glTexParameterfvPROC) (GLenum target, GLenum pname, const GLfloat * param);
typedef void (APIENTRY *glTexParameteriPROC) (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY *glTexParameterfPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY *glTexSubImage2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
typedef void (APIENTRY *glTexSubImage1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels);
typedef void (APIENTRY *glTexImage2DPROC) (GLenum target, GLint level, GLint internalformat, GLint width, GLint height, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
typedef void (APIENTRY *glTexImage1DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels);
typedef void (APIENTRY *glTranslatefPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY *glVertex4iPROC) (GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY *glVertex4fPROC) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY *glVertex3iPROC) (GLint x, GLint y, GLint z);
typedef void (APIENTRY *glVertex3fPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY *glVertex2iPROC) (GLint x, GLint y);
typedef void (APIENTRY *glVertex2fPROC) (GLfloat x, GLfloat y);
typedef void (APIENTRY *glVertexPointerPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
typedef void (APIENTRY *glStencilFuncPROC) (GLenum func, GLint ref, GLuint mask);
typedef void (APIENTRY *glPopAttribPROC) ();
typedef void (APIENTRY *glPushAttribPROC) (GLbitfield mask);
typedef void (APIENTRY *glPopClientAttribPROC) ();
typedef void (APIENTRY *glPushClientAttribPROC) (GLbitfield mask);
typedef void (APIENTRY *glPopMatrixPROC) ();
typedef void (APIENTRY *glPushMatrixPROC) ();
typedef void (APIENTRY *glPopNamePROC) ();
typedef void (APIENTRY *glPushNamePROC) (GLuint name);
typedef void (APIENTRY *glRasterPos4iPROC) (GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY *glRasterPos4fPROC) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY *glRasterPos3iPROC) (GLint x, GLint y, GLint z);
typedef void (APIENTRY *glRasterPos3fPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY *glRasterPos2iPROC) (GLint x, GLint y);
typedef void (APIENTRY *glRasterPos2fPROC) (GLfloat x, GLfloat y);
typedef void (APIENTRY *glReadBufferPROC) (GLenum mode);
typedef void (APIENTRY *glReadPixelsPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels);
typedef void (APIENTRY *glRectiPROC) (GLint x1, GLint y1, GLint x2, GLint y2);
typedef void (APIENTRY *glRectfPROC) (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
typedef GLint (APIENTRY *glRenderModePROC) (GLenum mode);
typedef void (APIENTRY *glRotatefPROC) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY *glScalefPROC) (GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY *glScissorPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY *glSelectBufferPROC) (GLsizei size, GLuint * buffer);
typedef void (APIENTRY *glShadeModelPROC) (GLenum mode);
typedef void (APIENTRY *glMultMatrixfPROC) (const GLfloat * m);
typedef void (APIENTRY *glEndListPROC) ();
typedef void (APIENTRY *glNewListPROC) (GLuint list, GLenum mode);
typedef void (APIENTRY *glNormal3iPROC) (GLint nx, GLint ny, GLint nz);
typedef void (APIENTRY *glNormal3fPROC) (GLfloat nx, GLfloat ny, GLfloat nz);
typedef void (APIENTRY *glNormal3bPROC) (GLbyte nx, GLbyte ny, GLbyte nz);
typedef void (APIENTRY *glNormalPointerPROC) (GLenum type, GLsizei stride, const GLvoid * pointer);
typedef void (APIENTRY *glOrthoPROC) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (APIENTRY *glPassThroughPROC) (GLfloat token);
typedef void (APIENTRY *glPixelMapusvPROC) (GLenum map, GLsizei mapsize, const GLushort * values);
typedef void (APIENTRY *glPixelMapuivPROC) (GLenum map, GLsizei mapsize, const GLuint * values);
typedef void (APIENTRY *glPixelMapfvPROC) (GLenum map, GLsizei mapsize, const GLfloat * values);
typedef void (APIENTRY *glPixelStoreiPROC) (GLenum pname, GLint param);
typedef void (APIENTRY *glPixelStorefPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRY *glPixelTransferiPROC) (GLenum pname, GLint param);
typedef void (APIENTRY *glPixelTransferfPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRY *glPixelZoomPROC) (GLfloat xfactor, GLfloat yfactor);
typedef void (APIENTRY *glPointSizePROC) (GLfloat size);
typedef void (APIENTRY *glPolygonModePROC) (GLenum face, GLenum mode);
typedef void (APIENTRY *glPolygonOffsetPROC) (GLfloat factor, GLfloat units);
typedef void (APIENTRY *glPolygonStipplePROC) (const GLubyte * mask);
typedef void (APIENTRY *glMatrixModePROC) (GLenum mode);
typedef GLboolean (APIENTRY *glIsTexturePROC) (GLuint texture);
typedef void (APIENTRY *glLightivPROC) (GLenum light, GLenum pname, const GLint * params);
typedef void (APIENTRY *glLightfvPROC) (GLenum light, GLenum pname, const GLfloat * params);
typedef void (APIENTRY *glLightiPROC) (GLenum light, GLenum pname, GLint param);
typedef void (APIENTRY *glLightfPROC) (GLenum light, GLenum pname, GLfloat param);
typedef void (APIENTRY *glLightModelivPROC) (GLenum pname, const GLint * params);
typedef void (APIENTRY *glLightModelfvPROC) (GLenum pname, const GLfloat * params);
typedef void (APIENTRY *glLightModeliPROC) (GLenum pname, GLint param);
typedef void (APIENTRY *glLightModelfPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRY *glLineStipplePROC) (GLint factor, GLushort pattern);
typedef void (APIENTRY *glLineWidthPROC) (GLfloat width);
typedef void (APIENTRY *glListBasePROC) (GLuint base);
typedef void (APIENTRY *glLoadIdentityPROC) ();
typedef void (APIENTRY *glLoadMatrixfPROC) (const GLfloat * m);
typedef void (APIENTRY *glLoadNamePROC) (GLuint name);
typedef void (APIENTRY *glLogicOpPROC) (GLenum opcode);
typedef void (APIENTRY *glMap1fPROC) (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points);
typedef void (APIENTRY *glMap2fPROC) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points);
typedef void (APIENTRY *glMapGrid2fPROC) (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
typedef void (APIENTRY *glMapGrid1fPROC) (GLint un, GLfloat u1, GLfloat u2);
typedef void (APIENTRY *glMaterialivPROC) (GLenum face, GLenum pname, const GLint * params);
typedef void (APIENTRY *glMaterialfvPROC) (GLenum face, GLenum pname, const GLfloat * params);
typedef void (APIENTRY *glMaterialiPROC) (GLenum face, GLenum pname, GLint param);
typedef void (APIENTRY *glMaterialfPROC) (GLenum face, GLenum pname, GLfloat param);
typedef GLboolean (APIENTRY *glIsListPROC) (GLuint list);
typedef void (APIENTRY *glGetPolygonStipplePROC) (GLubyte * mask);
typedef const GLubyte * (APIENTRY *glGetStringPROC) (GLint name);
typedef void (APIENTRY *glGetTexEnvfvPROC) (GLenum coord, GLenum pname, GLfloat * params);
typedef void (APIENTRY *glGetTexEnvivPROC) (GLenum coord, GLenum pname, GLint * params);
typedef void (APIENTRY *glGetTexGenfvPROC) (GLenum coord, GLenum pname, GLfloat * params);
typedef void (APIENTRY *glGetTexGenivPROC) (GLenum coord, GLenum pname, GLint * params);
typedef void (APIENTRY *glGetTexImagePROC) (GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels);
typedef void (APIENTRY *glGetTexLevelParameterivPROC) (GLenum target, GLint level, GLenum pname, GLint * params);
typedef void (APIENTRY *glGetTexLevelParameterfvPROC) (GLenum target, GLint level, GLenum pname, GLfloat * params);
typedef void (APIENTRY *glGetTexParameterivPROC) (GLenum target, GLenum pname, GLint * params);
typedef void (APIENTRY *glGetTexParameterfvPROC) (GLenum target, GLenum pname, GLfloat * params);
typedef void (APIENTRY *glHintPROC) (GLenum target, GLenum mode);
typedef void (APIENTRY *glInitNamesPROC) ();
typedef void (APIENTRY *glInterleavedArraysPROC) (GLenum format, GLsizei stride, const GLvoid * pointer);
typedef GLboolean (APIENTRY *glIsEnabledPROC) (GLenum cap);
typedef void (APIENTRY *glGetPointervPROC) (GLenum pname, GLvoid ** result);
typedef void (APIENTRY *glFinishPROC) ();
typedef void (APIENTRY *glFlushPROC) ();
typedef void (APIENTRY *glFogivPROC) (GLenum pname, const GLint * params);
typedef void (APIENTRY *glFogfvPROC) (GLenum pname, const GLfloat * params);
typedef void (APIENTRY *glFogiPROC) (GLenum pname, GLint param);
typedef void (APIENTRY *glFogfPROC) (GLenum pname, GLfloat param);
typedef void (APIENTRY *glFrontFacePROC) (GLenum mode);
typedef void (APIENTRY *glFrustumPROC) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef GLuint (APIENTRY *glGenListsPROC) (GLsizei range);
typedef void (APIENTRY *glGenTexturesPROC) (GLsizei n, GLuint * textures);
typedef void (APIENTRY *glGetIntegervPROC) (GLenum pname, GLint * params);
typedef void (APIENTRY *glGetFloatvPROC) (GLenum pname, GLfloat * params);
typedef void (APIENTRY *glGetDoublevPROC) (GLenum pname, GLdouble * params);
typedef void (APIENTRY *glGetBooleanvPROC) (GLenum pname, GLboolean * params);
typedef void (APIENTRY *glGetClipPlanePROC) (GLenum plane, GLdouble * equation);
typedef GLint (APIENTRY *glGetErrorPROC) ();
typedef void (APIENTRY *glGetLightivPROC) (GLenum light, GLenum pname, GLint * params);
typedef void (APIENTRY *glGetLightfvPROC) (GLenum light, GLenum pname, GLfloat * params);
typedef void (APIENTRY *glGetMapivPROC) (GLenum target, GLenum query, GLint * v);
typedef void (APIENTRY *glGetMapfvPROC) (GLenum target, GLenum query, GLfloat * v);
typedef void (APIENTRY *glGetMaterialivPROC) (GLenum face, GLenum pname, GLint * params);
typedef void (APIENTRY *glGetMaterialfvPROC) (GLenum face, GLenum pname, GLfloat * params);
typedef void (APIENTRY *glGetPixelMapusvPROC) (GLenum map, GLushort * values);
typedef void (APIENTRY *glGetPixelMapuivPROC) (GLenum map, GLuint * values);
typedef void (APIENTRY *glGetPixelMapfvPROC) (GLenum map, GLfloat * values);
typedef void (APIENTRY *glFeedbackBufferPROC) (GLsizei size, GLenum type, GLfloat * buffer);
typedef void (APIENTRY *glDepthFuncPROC) (GLenum func);
typedef void (APIENTRY *glDepthMaskPROC) (GLboolean flag);
typedef void (APIENTRY *glDepthRangePROC) (GLclampd zNear, GLclampd zFar);
typedef void (APIENTRY *glDrawArraysPROC) (GLenum mode, GLint first, GLsizei count);
typedef void (APIENTRY *glDrawBufferPROC) (GLenum mode);
typedef void (APIENTRY *glDrawElementsPROC) (GLenum mode, GLsizei count, GLenum type, const GLvoid * indices);
typedef void (APIENTRY *glDrawPixelsPROC) (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
typedef void (APIENTRY *glEdgeFlagPROC) (GLboolean flag);
typedef void (APIENTRY *glEdgeFlagPointerPROC) (GLint stride, const GLvoid * pointer);
typedef void (APIENTRY *glDisablePROC) (GLenum cap);
typedef void (APIENTRY *glEnablePROC) (GLenum cap);
typedef void (APIENTRY *glDisableClientStatePROC) (GLenum cap);
typedef void (APIENTRY *glEnableClientStatePROC) (GLenum cap);
typedef void (APIENTRY *glEvalCoord2fPROC) (GLfloat u, GLfloat v);
typedef void (APIENTRY *glEvalCoord1fPROC) (GLfloat u);
typedef void (APIENTRY *glEvalMesh2PROC) (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
typedef void (APIENTRY *glEvalMesh1PROC) (GLenum mode, GLint i1, GLint i2);
typedef void (APIENTRY *glEvalPoint2PROC) (GLint i, GLint j);
typedef void (APIENTRY *glEvalPoint1PROC) (GLint i);
typedef void (APIENTRY *glClearIndexPROC) (GLfloat c);
typedef void (APIENTRY *glClearStencilPROC) (GLint s);
typedef void (APIENTRY *glClipPlanePROC) (GLenum plane, const GLdouble * equation);
typedef void (APIENTRY *glColor4ubPROC) (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef void (APIENTRY *glColor4fPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRY *glColor4bPROC) (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
typedef void (APIENTRY *glColor3ubPROC) (GLubyte red, GLubyte green, GLubyte blue);
typedef void (APIENTRY *glColor3fPROC) (GLfloat red, GLfloat green, GLfloat blue);
typedef void (APIENTRY *glColor3bPROC) (GLbyte red, GLbyte green, GLbyte blue);
typedef void (APIENTRY *glColorMaskPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (APIENTRY *glColorMaterialPROC) (GLenum face, GLenum mode);
typedef void (APIENTRY *glColorPointerPROC) (GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
typedef void (APIENTRY *glCopyPixelsPROC) (GLint x, GLint y, GLint width, GLint height, GLint type);
typedef void (APIENTRY *glCopyTexImage1DPROC) (GLenum target, GLint level, GLint internalFormat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRY *glCopyTexImage2DPROC) (GLenum target, GLint level, GLint internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRY *glCopyTexSubImage1DPROC) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY *glCopyTexSubImage2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY *glCullFacePROC) (GLenum mode);
typedef void (APIENTRY *glDeleteTexturesPROC) (GLsizei n, const GLuint * textures);
typedef void (APIENTRY *glDeleteListsPROC) (GLuint list, GLsizei range);
typedef void (APIENTRY *glClearDepthPROC) (GLclampd depth);
typedef void (APIENTRY *glArrayElementPROC) (GLint i);
typedef void (APIENTRY *glEndPROC) ();
typedef void (APIENTRY *glBeginPROC) (GLenum mode);
typedef void (APIENTRY *glBindTexturePROC) (GLenum target, GLuint texture);
typedef void (APIENTRY *glBitmapPROC) (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap);
typedef void (APIENTRY *glBlendFuncPROC) (GLenum sfactor, GLenum dfactor);
typedef void (APIENTRY *glCallListPROC) (GLuint list);
typedef void (APIENTRY *glCallListsPROC) (GLsizei n, GLenum type, const GLvoid * lists);
typedef void (APIENTRY *glClearPROC) (GLbitfield mask);
typedef void (APIENTRY *glClearAccumPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRY *glClearColorPROC) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (APIENTRY *glAlphaFuncPROC) (GLenum func, GLclampf ref);
typedef void (APIENTRY *glAccumPROC) (GLenum op, GLfloat value);

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglViewport(JNIEnv *env, jclass clazz, jint x, jint y, jint width, jint height, jlong function_pointer) {
	glViewportPROC glViewport = (glViewportPROC)((intptr_t)function_pointer);
	glViewport(x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglStencilMask(JNIEnv *env, jclass clazz, jint mask, jlong function_pointer) {
	glStencilMaskPROC glStencilMask = (glStencilMaskPROC)((intptr_t)function_pointer);
	glStencilMask(mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglStencilOp(JNIEnv *env, jclass clazz, jint fail, jint zfail, jint zpass, jlong function_pointer) {
	glStencilOpPROC glStencilOp = (glStencilOpPROC)((intptr_t)function_pointer);
	glStencilOp(fail, zfail, zpass);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexCoord4f(JNIEnv *env, jclass clazz, jfloat s, jfloat t, jfloat r, jfloat q, jlong function_pointer) {
	glTexCoord4fPROC glTexCoord4f = (glTexCoord4fPROC)((intptr_t)function_pointer);
	glTexCoord4f(s, t, r, q);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexCoord3f(JNIEnv *env, jclass clazz, jfloat s, jfloat t, jfloat r, jlong function_pointer) {
	glTexCoord3fPROC glTexCoord3f = (glTexCoord3fPROC)((intptr_t)function_pointer);
	glTexCoord3f(s, t, r);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexCoord2f(JNIEnv *env, jclass clazz, jfloat s, jfloat t, jlong function_pointer) {
	glTexCoord2fPROC glTexCoord2f = (glTexCoord2fPROC)((intptr_t)function_pointer);
	glTexCoord2f(s, t);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexCoord1f(JNIEnv *env, jclass clazz, jfloat s, jlong function_pointer) {
	glTexCoord1fPROC glTexCoord1f = (glTexCoord1fPROC)((intptr_t)function_pointer);
	glTexCoord1f(s);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexCoordPointer(JNIEnv *env, jclass clazz, jint size, jint type, jint stride, jobject pointer, jint pointer_position, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pointer)) + pointer_position));
	glTexCoordPointerPROC glTexCoordPointer = (glTexCoordPointerPROC)((intptr_t)function_pointer);
	glTexCoordPointer(size, type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexCoordPointerBO(JNIEnv *env, jclass clazz, jint size, jint type, jint stride, jint pointer_buffer_offset, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)offsetToPointer(pointer_buffer_offset));
	glTexCoordPointerPROC glTexCoordPointer = (glTexCoordPointerPROC)((intptr_t)function_pointer);
	glTexCoordPointer(size, type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexEnviv(JNIEnv *env, jclass clazz, jint target, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLint *params_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glTexEnvivPROC glTexEnviv = (glTexEnvivPROC)((intptr_t)function_pointer);
	glTexEnviv(target, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexEnvfv(JNIEnv *env, jclass clazz, jint target, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLfloat *params_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glTexEnvfvPROC glTexEnvfv = (glTexEnvfvPROC)((intptr_t)function_pointer);
	glTexEnvfv(target, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexEnvi(JNIEnv *env, jclass clazz, jint target, jint pname, jint param, jlong function_pointer) {
	glTexEnviPROC glTexEnvi = (glTexEnviPROC)((intptr_t)function_pointer);
	glTexEnvi(target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexEnvf(JNIEnv *env, jclass clazz, jint target, jint pname, jfloat param, jlong function_pointer) {
	glTexEnvfPROC glTexEnvf = (glTexEnvfPROC)((intptr_t)function_pointer);
	glTexEnvf(target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexGeniv(JNIEnv *env, jclass clazz, jint coord, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLint *params_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glTexGenivPROC glTexGeniv = (glTexGenivPROC)((intptr_t)function_pointer);
	glTexGeniv(coord, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexGeni(JNIEnv *env, jclass clazz, jint coord, jint pname, jint param, jlong function_pointer) {
	glTexGeniPROC glTexGeni = (glTexGeniPROC)((intptr_t)function_pointer);
	glTexGeni(coord, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexGenfv(JNIEnv *env, jclass clazz, jint coord, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLfloat *params_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glTexGenfvPROC glTexGenfv = (glTexGenfvPROC)((intptr_t)function_pointer);
	glTexGenfv(coord, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexGenf(JNIEnv *env, jclass clazz, jint coord, jint pname, jfloat param, jlong function_pointer) {
	glTexGenfPROC glTexGenf = (glTexGenfPROC)((intptr_t)function_pointer);
	glTexGenf(coord, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexParameteriv(JNIEnv *env, jclass clazz, jint target, jint pname, jobject param, jint param_position, jlong function_pointer) {
	const GLint *param_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, param)) + param_position;
	glTexParameterivPROC glTexParameteriv = (glTexParameterivPROC)((intptr_t)function_pointer);
	glTexParameteriv(target, pname, param_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexParameterfv(JNIEnv *env, jclass clazz, jint target, jint pname, jobject param, jint param_position, jlong function_pointer) {
	const GLfloat *param_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, param)) + param_position;
	glTexParameterfvPROC glTexParameterfv = (glTexParameterfvPROC)((intptr_t)function_pointer);
	glTexParameterfv(target, pname, param_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexParameteri(JNIEnv *env, jclass clazz, jint target, jint pname, jint param, jlong function_pointer) {
	glTexParameteriPROC glTexParameteri = (glTexParameteriPROC)((intptr_t)function_pointer);
	glTexParameteri(target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexParameterf(JNIEnv *env, jclass clazz, jint target, jint pname, jfloat param, jlong function_pointer) {
	glTexParameterfPROC glTexParameterf = (glTexParameterfPROC)((intptr_t)function_pointer);
	glTexParameterf(target, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexSubImage2D(JNIEnv *env, jclass clazz, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pixels)) + pixels_position));
	glTexSubImage2DPROC glTexSubImage2D = (glTexSubImage2DPROC)((intptr_t)function_pointer);
	glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexSubImage2DBO(JNIEnv *env, jclass clazz, jint target, jint level, jint xoffset, jint yoffset, jint width, jint height, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)offsetToPointer(pixels_buffer_offset));
	glTexSubImage2DPROC glTexSubImage2D = (glTexSubImage2DPROC)((intptr_t)function_pointer);
	glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexSubImage1D(JNIEnv *env, jclass clazz, jint target, jint level, jint xoffset, jint width, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pixels)) + pixels_position));
	glTexSubImage1DPROC glTexSubImage1D = (glTexSubImage1DPROC)((intptr_t)function_pointer);
	glTexSubImage1D(target, level, xoffset, width, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexSubImage1DBO(JNIEnv *env, jclass clazz, jint target, jint level, jint xoffset, jint width, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)offsetToPointer(pixels_buffer_offset));
	glTexSubImage1DPROC glTexSubImage1D = (glTexSubImage1DPROC)((intptr_t)function_pointer);
	glTexSubImage1D(target, level, xoffset, width, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexImage2D(JNIEnv *env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)(((char *)safeGetBufferAddress(env, pixels)) + pixels_position));
	glTexImage2DPROC glTexImage2D = (glTexImage2DPROC)((intptr_t)function_pointer);
	glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexImage2DBO(JNIEnv *env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint height, jint border, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)offsetToPointer(pixels_buffer_offset));
	glTexImage2DPROC glTexImage2D = (glTexImage2DPROC)((intptr_t)function_pointer);
	glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexImage1D(JNIEnv *env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint border, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)(((char *)safeGetBufferAddress(env, pixels)) + pixels_position));
	glTexImage1DPROC glTexImage1D = (glTexImage1DPROC)((intptr_t)function_pointer);
	glTexImage1D(target, level, internalformat, width, border, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTexImage1DBO(JNIEnv *env, jclass clazz, jint target, jint level, jint internalformat, jint width, jint border, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)offsetToPointer(pixels_buffer_offset));
	glTexImage1DPROC glTexImage1D = (glTexImage1DPROC)((intptr_t)function_pointer);
	glTexImage1D(target, level, internalformat, width, border, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglTranslatef(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jfloat z, jlong function_pointer) {
	glTranslatefPROC glTranslatef = (glTranslatefPROC)((intptr_t)function_pointer);
	glTranslatef(x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertex4i(JNIEnv *env, jclass clazz, jint x, jint y, jint z, jint w, jlong function_pointer) {
	glVertex4iPROC glVertex4i = (glVertex4iPROC)((intptr_t)function_pointer);
	glVertex4i(x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertex4f(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jfloat z, jfloat w, jlong function_pointer) {
	glVertex4fPROC glVertex4f = (glVertex4fPROC)((intptr_t)function_pointer);
	glVertex4f(x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertex3i(JNIEnv *env, jclass clazz, jint x, jint y, jint z, jlong function_pointer) {
	glVertex3iPROC glVertex3i = (glVertex3iPROC)((intptr_t)function_pointer);
	glVertex3i(x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertex3f(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jfloat z, jlong function_pointer) {
	glVertex3fPROC glVertex3f = (glVertex3fPROC)((intptr_t)function_pointer);
	glVertex3f(x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertex2i(JNIEnv *env, jclass clazz, jint x, jint y, jlong function_pointer) {
	glVertex2iPROC glVertex2i = (glVertex2iPROC)((intptr_t)function_pointer);
	glVertex2i(x, y);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertex2f(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jlong function_pointer) {
	glVertex2fPROC glVertex2f = (glVertex2fPROC)((intptr_t)function_pointer);
	glVertex2f(x, y);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertexPointer(JNIEnv *env, jclass clazz, jint size, jint type, jint stride, jobject pointer, jint pointer_position, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pointer)) + pointer_position));
	glVertexPointerPROC glVertexPointer = (glVertexPointerPROC)((intptr_t)function_pointer);
	glVertexPointer(size, type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglVertexPointerBO(JNIEnv *env, jclass clazz, jint size, jint type, jint stride, jint pointer_buffer_offset, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)offsetToPointer(pointer_buffer_offset));
	glVertexPointerPROC glVertexPointer = (glVertexPointerPROC)((intptr_t)function_pointer);
	glVertexPointer(size, type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglStencilFunc(JNIEnv *env, jclass clazz, jint func, jint ref, jint mask, jlong function_pointer) {
	glStencilFuncPROC glStencilFunc = (glStencilFuncPROC)((intptr_t)function_pointer);
	glStencilFunc(func, ref, mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPopAttrib(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glPopAttribPROC glPopAttrib = (glPopAttribPROC)((intptr_t)function_pointer);
	glPopAttrib();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPushAttrib(JNIEnv *env, jclass clazz, jint mask, jlong function_pointer) {
	glPushAttribPROC glPushAttrib = (glPushAttribPROC)((intptr_t)function_pointer);
	glPushAttrib(mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPopClientAttrib(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glPopClientAttribPROC glPopClientAttrib = (glPopClientAttribPROC)((intptr_t)function_pointer);
	glPopClientAttrib();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPushClientAttrib(JNIEnv *env, jclass clazz, jint mask, jlong function_pointer) {
	glPushClientAttribPROC glPushClientAttrib = (glPushClientAttribPROC)((intptr_t)function_pointer);
	glPushClientAttrib(mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPopMatrix(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glPopMatrixPROC glPopMatrix = (glPopMatrixPROC)((intptr_t)function_pointer);
	glPopMatrix();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPushMatrix(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glPushMatrixPROC glPushMatrix = (glPushMatrixPROC)((intptr_t)function_pointer);
	glPushMatrix();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPopName(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glPopNamePROC glPopName = (glPopNamePROC)((intptr_t)function_pointer);
	glPopName();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPushName(JNIEnv *env, jclass clazz, jint name, jlong function_pointer) {
	glPushNamePROC glPushName = (glPushNamePROC)((intptr_t)function_pointer);
	glPushName(name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRasterPos4i(JNIEnv *env, jclass clazz, jint x, jint y, jint z, jint w, jlong function_pointer) {
	glRasterPos4iPROC glRasterPos4i = (glRasterPos4iPROC)((intptr_t)function_pointer);
	glRasterPos4i(x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRasterPos4f(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jfloat z, jfloat w, jlong function_pointer) {
	glRasterPos4fPROC glRasterPos4f = (glRasterPos4fPROC)((intptr_t)function_pointer);
	glRasterPos4f(x, y, z, w);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRasterPos3i(JNIEnv *env, jclass clazz, jint x, jint y, jint z, jlong function_pointer) {
	glRasterPos3iPROC glRasterPos3i = (glRasterPos3iPROC)((intptr_t)function_pointer);
	glRasterPos3i(x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRasterPos3f(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jfloat z, jlong function_pointer) {
	glRasterPos3fPROC glRasterPos3f = (glRasterPos3fPROC)((intptr_t)function_pointer);
	glRasterPos3f(x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRasterPos2i(JNIEnv *env, jclass clazz, jint x, jint y, jlong function_pointer) {
	glRasterPos2iPROC glRasterPos2i = (glRasterPos2iPROC)((intptr_t)function_pointer);
	glRasterPos2i(x, y);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRasterPos2f(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jlong function_pointer) {
	glRasterPos2fPROC glRasterPos2f = (glRasterPos2fPROC)((intptr_t)function_pointer);
	glRasterPos2f(x, y);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglReadBuffer(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glReadBufferPROC glReadBuffer = (glReadBufferPROC)((intptr_t)function_pointer);
	glReadBuffer(mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglReadPixels(JNIEnv *env, jclass clazz, jint x, jint y, jint width, jint height, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	GLvoid *pixels_address = ((GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pixels)) + pixels_position));
	glReadPixelsPROC glReadPixels = (glReadPixelsPROC)((intptr_t)function_pointer);
	glReadPixels(x, y, width, height, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglReadPixelsBO(JNIEnv *env, jclass clazz, jint x, jint y, jint width, jint height, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	GLvoid *pixels_address = ((GLvoid *)offsetToPointer(pixels_buffer_offset));
	glReadPixelsPROC glReadPixels = (glReadPixelsPROC)((intptr_t)function_pointer);
	glReadPixels(x, y, width, height, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRecti(JNIEnv *env, jclass clazz, jint x1, jint y1, jint x2, jint y2, jlong function_pointer) {
	glRectiPROC glRecti = (glRectiPROC)((intptr_t)function_pointer);
	glRecti(x1, y1, x2, y2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRectf(JNIEnv *env, jclass clazz, jfloat x1, jfloat y1, jfloat x2, jfloat y2, jlong function_pointer) {
	glRectfPROC glRectf = (glRectfPROC)((intptr_t)function_pointer);
	glRectf(x1, y1, x2, y2);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_GL11_nglRenderMode(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glRenderModePROC glRenderMode = (glRenderModePROC)((intptr_t)function_pointer);
	GLint __result = glRenderMode(mode);
	return __result;
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglRotatef(JNIEnv *env, jclass clazz, jfloat angle, jfloat x, jfloat y, jfloat z, jlong function_pointer) {
	glRotatefPROC glRotatef = (glRotatefPROC)((intptr_t)function_pointer);
	glRotatef(angle, x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglScalef(JNIEnv *env, jclass clazz, jfloat x, jfloat y, jfloat z, jlong function_pointer) {
	glScalefPROC glScalef = (glScalefPROC)((intptr_t)function_pointer);
	glScalef(x, y, z);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglScissor(JNIEnv *env, jclass clazz, jint x, jint y, jint width, jint height, jlong function_pointer) {
	glScissorPROC glScissor = (glScissorPROC)((intptr_t)function_pointer);
	glScissor(x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglSelectBuffer(JNIEnv *env, jclass clazz, jint size, jobject buffer, jint buffer_position, jlong function_pointer) {
	GLuint *buffer_address = ((GLuint *)(*env)->GetDirectBufferAddress(env, buffer)) + buffer_position;
	glSelectBufferPROC glSelectBuffer = (glSelectBufferPROC)((intptr_t)function_pointer);
	glSelectBuffer(size, buffer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglShadeModel(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glShadeModelPROC glShadeModel = (glShadeModelPROC)((intptr_t)function_pointer);
	glShadeModel(mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMultMatrixf(JNIEnv *env, jclass clazz, jobject m, jint m_position, jlong function_pointer) {
	const GLfloat *m_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, m)) + m_position;
	glMultMatrixfPROC glMultMatrixf = (glMultMatrixfPROC)((intptr_t)function_pointer);
	glMultMatrixf(m_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEndList(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glEndListPROC glEndList = (glEndListPROC)((intptr_t)function_pointer);
	glEndList();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglNewList(JNIEnv *env, jclass clazz, jint list, jint mode, jlong function_pointer) {
	glNewListPROC glNewList = (glNewListPROC)((intptr_t)function_pointer);
	glNewList(list, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglNormal3i(JNIEnv *env, jclass clazz, jint nx, jint ny, jint nz, jlong function_pointer) {
	glNormal3iPROC glNormal3i = (glNormal3iPROC)((intptr_t)function_pointer);
	glNormal3i(nx, ny, nz);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglNormal3f(JNIEnv *env, jclass clazz, jfloat nx, jfloat ny, jfloat nz, jlong function_pointer) {
	glNormal3fPROC glNormal3f = (glNormal3fPROC)((intptr_t)function_pointer);
	glNormal3f(nx, ny, nz);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglNormal3b(JNIEnv *env, jclass clazz, jbyte nx, jbyte ny, jbyte nz, jlong function_pointer) {
	glNormal3bPROC glNormal3b = (glNormal3bPROC)((intptr_t)function_pointer);
	glNormal3b(nx, ny, nz);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglNormalPointer(JNIEnv *env, jclass clazz, jint type, jint stride, jobject pointer, jint pointer_position, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pointer)) + pointer_position));
	glNormalPointerPROC glNormalPointer = (glNormalPointerPROC)((intptr_t)function_pointer);
	glNormalPointer(type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglNormalPointerBO(JNIEnv *env, jclass clazz, jint type, jint stride, jint pointer_buffer_offset, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)offsetToPointer(pointer_buffer_offset));
	glNormalPointerPROC glNormalPointer = (glNormalPointerPROC)((intptr_t)function_pointer);
	glNormalPointer(type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglOrtho(JNIEnv *env, jclass clazz, jdouble left, jdouble right, jdouble bottom, jdouble top, jdouble zNear, jdouble zFar, jlong function_pointer) {
	glOrthoPROC glOrtho = (glOrthoPROC)((intptr_t)function_pointer);
	glOrtho(left, right, bottom, top, zNear, zFar);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPassThrough(JNIEnv *env, jclass clazz, jfloat token, jlong function_pointer) {
	glPassThroughPROC glPassThrough = (glPassThroughPROC)((intptr_t)function_pointer);
	glPassThrough(token);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelMapusv(JNIEnv *env, jclass clazz, jint map, jint mapsize, jobject values, jint values_position, jlong function_pointer) {
	const GLushort *values_address = ((const GLushort *)(*env)->GetDirectBufferAddress(env, values)) + values_position;
	glPixelMapusvPROC glPixelMapusv = (glPixelMapusvPROC)((intptr_t)function_pointer);
	glPixelMapusv(map, mapsize, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelMapusvBO(JNIEnv *env, jclass clazz, jint map, jint mapsize, jint values_buffer_offset, jlong function_pointer) {
	const GLushort *values_address = ((const GLushort *)offsetToPointer(values_buffer_offset));
	glPixelMapusvPROC glPixelMapusv = (glPixelMapusvPROC)((intptr_t)function_pointer);
	glPixelMapusv(map, mapsize, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelMapuiv(JNIEnv *env, jclass clazz, jint map, jint mapsize, jobject values, jint values_position, jlong function_pointer) {
	const GLuint *values_address = ((const GLuint *)(*env)->GetDirectBufferAddress(env, values)) + values_position;
	glPixelMapuivPROC glPixelMapuiv = (glPixelMapuivPROC)((intptr_t)function_pointer);
	glPixelMapuiv(map, mapsize, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelMapuivBO(JNIEnv *env, jclass clazz, jint map, jint mapsize, jint values_buffer_offset, jlong function_pointer) {
	const GLuint *values_address = ((const GLuint *)offsetToPointer(values_buffer_offset));
	glPixelMapuivPROC glPixelMapuiv = (glPixelMapuivPROC)((intptr_t)function_pointer);
	glPixelMapuiv(map, mapsize, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelMapfv(JNIEnv *env, jclass clazz, jint map, jint mapsize, jobject values, jint values_position, jlong function_pointer) {
	const GLfloat *values_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, values)) + values_position;
	glPixelMapfvPROC glPixelMapfv = (glPixelMapfvPROC)((intptr_t)function_pointer);
	glPixelMapfv(map, mapsize, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelMapfvBO(JNIEnv *env, jclass clazz, jint map, jint mapsize, jint values_buffer_offset, jlong function_pointer) {
	const GLfloat *values_address = ((const GLfloat *)offsetToPointer(values_buffer_offset));
	glPixelMapfvPROC glPixelMapfv = (glPixelMapfvPROC)((intptr_t)function_pointer);
	glPixelMapfv(map, mapsize, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelStorei(JNIEnv *env, jclass clazz, jint pname, jint param, jlong function_pointer) {
	glPixelStoreiPROC glPixelStorei = (glPixelStoreiPROC)((intptr_t)function_pointer);
	glPixelStorei(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelStoref(JNIEnv *env, jclass clazz, jint pname, jfloat param, jlong function_pointer) {
	glPixelStorefPROC glPixelStoref = (glPixelStorefPROC)((intptr_t)function_pointer);
	glPixelStoref(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelTransferi(JNIEnv *env, jclass clazz, jint pname, jint param, jlong function_pointer) {
	glPixelTransferiPROC glPixelTransferi = (glPixelTransferiPROC)((intptr_t)function_pointer);
	glPixelTransferi(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelTransferf(JNIEnv *env, jclass clazz, jint pname, jfloat param, jlong function_pointer) {
	glPixelTransferfPROC glPixelTransferf = (glPixelTransferfPROC)((intptr_t)function_pointer);
	glPixelTransferf(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPixelZoom(JNIEnv *env, jclass clazz, jfloat xfactor, jfloat yfactor, jlong function_pointer) {
	glPixelZoomPROC glPixelZoom = (glPixelZoomPROC)((intptr_t)function_pointer);
	glPixelZoom(xfactor, yfactor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPointSize(JNIEnv *env, jclass clazz, jfloat size, jlong function_pointer) {
	glPointSizePROC glPointSize = (glPointSizePROC)((intptr_t)function_pointer);
	glPointSize(size);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPolygonMode(JNIEnv *env, jclass clazz, jint face, jint mode, jlong function_pointer) {
	glPolygonModePROC glPolygonMode = (glPolygonModePROC)((intptr_t)function_pointer);
	glPolygonMode(face, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPolygonOffset(JNIEnv *env, jclass clazz, jfloat factor, jfloat units, jlong function_pointer) {
	glPolygonOffsetPROC glPolygonOffset = (glPolygonOffsetPROC)((intptr_t)function_pointer);
	glPolygonOffset(factor, units);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPolygonStipple(JNIEnv *env, jclass clazz, jobject mask, jint mask_position, jlong function_pointer) {
	const GLubyte *mask_address = ((const GLubyte *)(*env)->GetDirectBufferAddress(env, mask)) + mask_position;
	glPolygonStipplePROC glPolygonStipple = (glPolygonStipplePROC)((intptr_t)function_pointer);
	glPolygonStipple(mask_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglPolygonStippleBO(JNIEnv *env, jclass clazz, jint mask_buffer_offset, jlong function_pointer) {
	const GLubyte *mask_address = ((const GLubyte *)offsetToPointer(mask_buffer_offset));
	glPolygonStipplePROC glPolygonStipple = (glPolygonStipplePROC)((intptr_t)function_pointer);
	glPolygonStipple(mask_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMatrixMode(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glMatrixModePROC glMatrixMode = (glMatrixModePROC)((intptr_t)function_pointer);
	glMatrixMode(mode);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_GL11_nglIsTexture(JNIEnv *env, jclass clazz, jint texture, jlong function_pointer) {
	glIsTexturePROC glIsTexture = (glIsTexturePROC)((intptr_t)function_pointer);
	GLboolean __result = glIsTexture(texture);
	return __result;
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightiv(JNIEnv *env, jclass clazz, jint light, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLint *params_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glLightivPROC glLightiv = (glLightivPROC)((intptr_t)function_pointer);
	glLightiv(light, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightfv(JNIEnv *env, jclass clazz, jint light, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLfloat *params_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glLightfvPROC glLightfv = (glLightfvPROC)((intptr_t)function_pointer);
	glLightfv(light, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLighti(JNIEnv *env, jclass clazz, jint light, jint pname, jint param, jlong function_pointer) {
	glLightiPROC glLighti = (glLightiPROC)((intptr_t)function_pointer);
	glLighti(light, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightf(JNIEnv *env, jclass clazz, jint light, jint pname, jfloat param, jlong function_pointer) {
	glLightfPROC glLightf = (glLightfPROC)((intptr_t)function_pointer);
	glLightf(light, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightModeliv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLint *params_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glLightModelivPROC glLightModeliv = (glLightModelivPROC)((intptr_t)function_pointer);
	glLightModeliv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightModelfv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLfloat *params_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glLightModelfvPROC glLightModelfv = (glLightModelfvPROC)((intptr_t)function_pointer);
	glLightModelfv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightModeli(JNIEnv *env, jclass clazz, jint pname, jint param, jlong function_pointer) {
	glLightModeliPROC glLightModeli = (glLightModeliPROC)((intptr_t)function_pointer);
	glLightModeli(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLightModelf(JNIEnv *env, jclass clazz, jint pname, jfloat param, jlong function_pointer) {
	glLightModelfPROC glLightModelf = (glLightModelfPROC)((intptr_t)function_pointer);
	glLightModelf(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLineStipple(JNIEnv *env, jclass clazz, jint factor, jshort pattern, jlong function_pointer) {
	glLineStipplePROC glLineStipple = (glLineStipplePROC)((intptr_t)function_pointer);
	glLineStipple(factor, pattern);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLineWidth(JNIEnv *env, jclass clazz, jfloat width, jlong function_pointer) {
	glLineWidthPROC glLineWidth = (glLineWidthPROC)((intptr_t)function_pointer);
	glLineWidth(width);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglListBase(JNIEnv *env, jclass clazz, jint base, jlong function_pointer) {
	glListBasePROC glListBase = (glListBasePROC)((intptr_t)function_pointer);
	glListBase(base);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLoadIdentity(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glLoadIdentityPROC glLoadIdentity = (glLoadIdentityPROC)((intptr_t)function_pointer);
	glLoadIdentity();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLoadMatrixf(JNIEnv *env, jclass clazz, jobject m, jint m_position, jlong function_pointer) {
	const GLfloat *m_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, m)) + m_position;
	glLoadMatrixfPROC glLoadMatrixf = (glLoadMatrixfPROC)((intptr_t)function_pointer);
	glLoadMatrixf(m_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLoadName(JNIEnv *env, jclass clazz, jint name, jlong function_pointer) {
	glLoadNamePROC glLoadName = (glLoadNamePROC)((intptr_t)function_pointer);
	glLoadName(name);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglLogicOp(JNIEnv *env, jclass clazz, jint opcode, jlong function_pointer) {
	glLogicOpPROC glLogicOp = (glLogicOpPROC)((intptr_t)function_pointer);
	glLogicOp(opcode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMap1f(JNIEnv *env, jclass clazz, jint target, jfloat u1, jfloat u2, jint stride, jint order, jobject points, jint points_position, jlong function_pointer) {
	const GLfloat *points_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, points)) + points_position;
	glMap1fPROC glMap1f = (glMap1fPROC)((intptr_t)function_pointer);
	glMap1f(target, u1, u2, stride, order, points_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMap2f(JNIEnv *env, jclass clazz, jint target, jfloat u1, jfloat u2, jint ustride, jint uorder, jfloat v1, jfloat v2, jint vstride, jint vorder, jobject points, jint points_position, jlong function_pointer) {
	const GLfloat *points_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, points)) + points_position;
	glMap2fPROC glMap2f = (glMap2fPROC)((intptr_t)function_pointer);
	glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMapGrid2f(JNIEnv *env, jclass clazz, jint un, jfloat u1, jfloat u2, jint vn, jfloat v1, jfloat v2, jlong function_pointer) {
	glMapGrid2fPROC glMapGrid2f = (glMapGrid2fPROC)((intptr_t)function_pointer);
	glMapGrid2f(un, u1, u2, vn, v1, v2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMapGrid1f(JNIEnv *env, jclass clazz, jint un, jfloat u1, jfloat u2, jlong function_pointer) {
	glMapGrid1fPROC glMapGrid1f = (glMapGrid1fPROC)((intptr_t)function_pointer);
	glMapGrid1f(un, u1, u2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMaterialiv(JNIEnv *env, jclass clazz, jint face, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLint *params_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glMaterialivPROC glMaterialiv = (glMaterialivPROC)((intptr_t)function_pointer);
	glMaterialiv(face, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMaterialfv(JNIEnv *env, jclass clazz, jint face, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLfloat *params_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glMaterialfvPROC glMaterialfv = (glMaterialfvPROC)((intptr_t)function_pointer);
	glMaterialfv(face, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMateriali(JNIEnv *env, jclass clazz, jint face, jint pname, jint param, jlong function_pointer) {
	glMaterialiPROC glMateriali = (glMaterialiPROC)((intptr_t)function_pointer);
	glMateriali(face, pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglMaterialf(JNIEnv *env, jclass clazz, jint face, jint pname, jfloat param, jlong function_pointer) {
	glMaterialfPROC glMaterialf = (glMaterialfPROC)((intptr_t)function_pointer);
	glMaterialf(face, pname, param);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_GL11_nglIsList(JNIEnv *env, jclass clazz, jint list, jlong function_pointer) {
	glIsListPROC glIsList = (glIsListPROC)((intptr_t)function_pointer);
	GLboolean __result = glIsList(list);
	return __result;
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPolygonStipple(JNIEnv *env, jclass clazz, jobject mask, jint mask_position, jlong function_pointer) {
	GLubyte *mask_address = ((GLubyte *)(*env)->GetDirectBufferAddress(env, mask)) + mask_position;
	glGetPolygonStipplePROC glGetPolygonStipple = (glGetPolygonStipplePROC)((intptr_t)function_pointer);
	glGetPolygonStipple(mask_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPolygonStippleBO(JNIEnv *env, jclass clazz, jint mask_buffer_offset, jlong function_pointer) {
	GLubyte *mask_address = ((GLubyte *)offsetToPointer(mask_buffer_offset));
	glGetPolygonStipplePROC glGetPolygonStipple = (glGetPolygonStipplePROC)((intptr_t)function_pointer);
	glGetPolygonStipple(mask_address);
}

JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_GL11_nglGetString(JNIEnv *env, jclass clazz, jint name, jlong function_pointer) {
	glGetStringPROC glGetString = (glGetStringPROC)((intptr_t)function_pointer);
	const GLubyte * __result = glGetString(name);
	return NewStringNative(env, __result);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexEnvfv(JNIEnv *env, jclass clazz, jint coord, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexEnvfvPROC glGetTexEnvfv = (glGetTexEnvfvPROC)((intptr_t)function_pointer);
	glGetTexEnvfv(coord, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexEnviv(JNIEnv *env, jclass clazz, jint coord, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexEnvivPROC glGetTexEnviv = (glGetTexEnvivPROC)((intptr_t)function_pointer);
	glGetTexEnviv(coord, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexGenfv(JNIEnv *env, jclass clazz, jint coord, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexGenfvPROC glGetTexGenfv = (glGetTexGenfvPROC)((intptr_t)function_pointer);
	glGetTexGenfv(coord, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexGeniv(JNIEnv *env, jclass clazz, jint coord, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexGenivPROC glGetTexGeniv = (glGetTexGenivPROC)((intptr_t)function_pointer);
	glGetTexGeniv(coord, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexImage(JNIEnv *env, jclass clazz, jint target, jint level, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	GLvoid *pixels_address = ((GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pixels)) + pixels_position));
	glGetTexImagePROC glGetTexImage = (glGetTexImagePROC)((intptr_t)function_pointer);
	glGetTexImage(target, level, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexImageBO(JNIEnv *env, jclass clazz, jint target, jint level, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	GLvoid *pixels_address = ((GLvoid *)offsetToPointer(pixels_buffer_offset));
	glGetTexImagePROC glGetTexImage = (glGetTexImagePROC)((intptr_t)function_pointer);
	glGetTexImage(target, level, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexLevelParameteriv(JNIEnv *env, jclass clazz, jint target, jint level, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexLevelParameterivPROC glGetTexLevelParameteriv = (glGetTexLevelParameterivPROC)((intptr_t)function_pointer);
	glGetTexLevelParameteriv(target, level, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexLevelParameterfv(JNIEnv *env, jclass clazz, jint target, jint level, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexLevelParameterfvPROC glGetTexLevelParameterfv = (glGetTexLevelParameterfvPROC)((intptr_t)function_pointer);
	glGetTexLevelParameterfv(target, level, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexParameteriv(JNIEnv *env, jclass clazz, jint target, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexParameterivPROC glGetTexParameteriv = (glGetTexParameterivPROC)((intptr_t)function_pointer);
	glGetTexParameteriv(target, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetTexParameterfv(JNIEnv *env, jclass clazz, jint target, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetTexParameterfvPROC glGetTexParameterfv = (glGetTexParameterfvPROC)((intptr_t)function_pointer);
	glGetTexParameterfv(target, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglHint(JNIEnv *env, jclass clazz, jint target, jint mode, jlong function_pointer) {
	glHintPROC glHint = (glHintPROC)((intptr_t)function_pointer);
	glHint(target, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglInitNames(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glInitNamesPROC glInitNames = (glInitNamesPROC)((intptr_t)function_pointer);
	glInitNames();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglInterleavedArrays(JNIEnv *env, jclass clazz, jint format, jint stride, jobject pointer, jint pointer_position, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pointer)) + pointer_position));
	glInterleavedArraysPROC glInterleavedArrays = (glInterleavedArraysPROC)((intptr_t)function_pointer);
	glInterleavedArrays(format, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglInterleavedArraysBO(JNIEnv *env, jclass clazz, jint format, jint stride, jint pointer_buffer_offset, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)offsetToPointer(pointer_buffer_offset));
	glInterleavedArraysPROC glInterleavedArrays = (glInterleavedArraysPROC)((intptr_t)function_pointer);
	glInterleavedArrays(format, stride, pointer_address);
}

JNIEXPORT jboolean JNICALL Java_org_lwjgl_opengl_GL11_nglIsEnabled(JNIEnv *env, jclass clazz, jint cap, jlong function_pointer) {
	glIsEnabledPROC glIsEnabled = (glIsEnabledPROC)((intptr_t)function_pointer);
	GLboolean __result = glIsEnabled(cap);
	return __result;
}

JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_GL11_nglGetPointerv(JNIEnv *env, jclass clazz, jint pname, jint result_size, jlong function_pointer) {
	glGetPointervPROC glGetPointerv = (glGetPointervPROC)((intptr_t)function_pointer);
	GLvoid * __result;
	glGetPointerv(pname, &__result);
	return safeNewBuffer(env, __result, result_size);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFinish(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glFinishPROC glFinish = (glFinishPROC)((intptr_t)function_pointer);
	glFinish();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFlush(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glFlushPROC glFlush = (glFlushPROC)((intptr_t)function_pointer);
	glFlush();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFogiv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLint *params_address = ((const GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glFogivPROC glFogiv = (glFogivPROC)((intptr_t)function_pointer);
	glFogiv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFogfv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	const GLfloat *params_address = ((const GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glFogfvPROC glFogfv = (glFogfvPROC)((intptr_t)function_pointer);
	glFogfv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFogi(JNIEnv *env, jclass clazz, jint pname, jint param, jlong function_pointer) {
	glFogiPROC glFogi = (glFogiPROC)((intptr_t)function_pointer);
	glFogi(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFogf(JNIEnv *env, jclass clazz, jint pname, jfloat param, jlong function_pointer) {
	glFogfPROC glFogf = (glFogfPROC)((intptr_t)function_pointer);
	glFogf(pname, param);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFrontFace(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glFrontFacePROC glFrontFace = (glFrontFacePROC)((intptr_t)function_pointer);
	glFrontFace(mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFrustum(JNIEnv *env, jclass clazz, jdouble left, jdouble right, jdouble bottom, jdouble top, jdouble zNear, jdouble zFar, jlong function_pointer) {
	glFrustumPROC glFrustum = (glFrustumPROC)((intptr_t)function_pointer);
	glFrustum(left, right, bottom, top, zNear, zFar);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_GL11_nglGenLists(JNIEnv *env, jclass clazz, jint range, jlong function_pointer) {
	glGenListsPROC glGenLists = (glGenListsPROC)((intptr_t)function_pointer);
	GLuint __result = glGenLists(range);
	return __result;
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGenTextures(JNIEnv *env, jclass clazz, jint n, jobject textures, jint textures_position, jlong function_pointer) {
	GLuint *textures_address = ((GLuint *)(*env)->GetDirectBufferAddress(env, textures)) + textures_position;
	glGenTexturesPROC glGenTextures = (glGenTexturesPROC)((intptr_t)function_pointer);
	glGenTextures(n, textures_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetIntegerv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetIntegervPROC glGetIntegerv = (glGetIntegervPROC)((intptr_t)function_pointer);
	glGetIntegerv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetFloatv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetFloatvPROC glGetFloatv = (glGetFloatvPROC)((intptr_t)function_pointer);
	glGetFloatv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetDoublev(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLdouble *params_address = ((GLdouble *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetDoublevPROC glGetDoublev = (glGetDoublevPROC)((intptr_t)function_pointer);
	glGetDoublev(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetBooleanv(JNIEnv *env, jclass clazz, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLboolean *params_address = ((GLboolean *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetBooleanvPROC glGetBooleanv = (glGetBooleanvPROC)((intptr_t)function_pointer);
	glGetBooleanv(pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetClipPlane(JNIEnv *env, jclass clazz, jint plane, jobject equation, jint equation_position, jlong function_pointer) {
	GLdouble *equation_address = ((GLdouble *)(*env)->GetDirectBufferAddress(env, equation)) + equation_position;
	glGetClipPlanePROC glGetClipPlane = (glGetClipPlanePROC)((intptr_t)function_pointer);
	glGetClipPlane(plane, equation_address);
}

JNIEXPORT jint JNICALL Java_org_lwjgl_opengl_GL11_nglGetError(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glGetErrorPROC glGetError = (glGetErrorPROC)((intptr_t)function_pointer);
	GLint __result = glGetError();
	return __result;
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetLightiv(JNIEnv *env, jclass clazz, jint light, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetLightivPROC glGetLightiv = (glGetLightivPROC)((intptr_t)function_pointer);
	glGetLightiv(light, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetLightfv(JNIEnv *env, jclass clazz, jint light, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetLightfvPROC glGetLightfv = (glGetLightfvPROC)((intptr_t)function_pointer);
	glGetLightfv(light, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetMapiv(JNIEnv *env, jclass clazz, jint target, jint query, jobject v, jint v_position, jlong function_pointer) {
	GLint *v_address = ((GLint *)(*env)->GetDirectBufferAddress(env, v)) + v_position;
	glGetMapivPROC glGetMapiv = (glGetMapivPROC)((intptr_t)function_pointer);
	glGetMapiv(target, query, v_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetMapfv(JNIEnv *env, jclass clazz, jint target, jint query, jobject v, jint v_position, jlong function_pointer) {
	GLfloat *v_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, v)) + v_position;
	glGetMapfvPROC glGetMapfv = (glGetMapfvPROC)((intptr_t)function_pointer);
	glGetMapfv(target, query, v_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetMaterialiv(JNIEnv *env, jclass clazz, jint face, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLint *params_address = ((GLint *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetMaterialivPROC glGetMaterialiv = (glGetMaterialivPROC)((intptr_t)function_pointer);
	glGetMaterialiv(face, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetMaterialfv(JNIEnv *env, jclass clazz, jint face, jint pname, jobject params, jint params_position, jlong function_pointer) {
	GLfloat *params_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, params)) + params_position;
	glGetMaterialfvPROC glGetMaterialfv = (glGetMaterialfvPROC)((intptr_t)function_pointer);
	glGetMaterialfv(face, pname, params_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPixelMapusv(JNIEnv *env, jclass clazz, jint map, jobject values, jint values_position, jlong function_pointer) {
	GLushort *values_address = ((GLushort *)(*env)->GetDirectBufferAddress(env, values)) + values_position;
	glGetPixelMapusvPROC glGetPixelMapusv = (glGetPixelMapusvPROC)((intptr_t)function_pointer);
	glGetPixelMapusv(map, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPixelMapusvBO(JNIEnv *env, jclass clazz, jint map, jint values_buffer_offset, jlong function_pointer) {
	GLushort *values_address = ((GLushort *)offsetToPointer(values_buffer_offset));
	glGetPixelMapusvPROC glGetPixelMapusv = (glGetPixelMapusvPROC)((intptr_t)function_pointer);
	glGetPixelMapusv(map, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPixelMapuiv(JNIEnv *env, jclass clazz, jint map, jobject values, jint values_position, jlong function_pointer) {
	GLuint *values_address = ((GLuint *)(*env)->GetDirectBufferAddress(env, values)) + values_position;
	glGetPixelMapuivPROC glGetPixelMapuiv = (glGetPixelMapuivPROC)((intptr_t)function_pointer);
	glGetPixelMapuiv(map, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPixelMapuivBO(JNIEnv *env, jclass clazz, jint map, jint values_buffer_offset, jlong function_pointer) {
	GLuint *values_address = ((GLuint *)offsetToPointer(values_buffer_offset));
	glGetPixelMapuivPROC glGetPixelMapuiv = (glGetPixelMapuivPROC)((intptr_t)function_pointer);
	glGetPixelMapuiv(map, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPixelMapfv(JNIEnv *env, jclass clazz, jint map, jobject values, jint values_position, jlong function_pointer) {
	GLfloat *values_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, values)) + values_position;
	glGetPixelMapfvPROC glGetPixelMapfv = (glGetPixelMapfvPROC)((intptr_t)function_pointer);
	glGetPixelMapfv(map, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglGetPixelMapfvBO(JNIEnv *env, jclass clazz, jint map, jint values_buffer_offset, jlong function_pointer) {
	GLfloat *values_address = ((GLfloat *)offsetToPointer(values_buffer_offset));
	glGetPixelMapfvPROC glGetPixelMapfv = (glGetPixelMapfvPROC)((intptr_t)function_pointer);
	glGetPixelMapfv(map, values_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglFeedbackBuffer(JNIEnv *env, jclass clazz, jint size, jint type, jobject buffer, jint buffer_position, jlong function_pointer) {
	GLfloat *buffer_address = ((GLfloat *)(*env)->GetDirectBufferAddress(env, buffer)) + buffer_position;
	glFeedbackBufferPROC glFeedbackBuffer = (glFeedbackBufferPROC)((intptr_t)function_pointer);
	glFeedbackBuffer(size, type, buffer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDepthFunc(JNIEnv *env, jclass clazz, jint func, jlong function_pointer) {
	glDepthFuncPROC glDepthFunc = (glDepthFuncPROC)((intptr_t)function_pointer);
	glDepthFunc(func);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDepthMask(JNIEnv *env, jclass clazz, jboolean flag, jlong function_pointer) {
	glDepthMaskPROC glDepthMask = (glDepthMaskPROC)((intptr_t)function_pointer);
	glDepthMask(flag);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDepthRange(JNIEnv *env, jclass clazz, jdouble zNear, jdouble zFar, jlong function_pointer) {
	glDepthRangePROC glDepthRange = (glDepthRangePROC)((intptr_t)function_pointer);
	glDepthRange(zNear, zFar);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDrawArrays(JNIEnv *env, jclass clazz, jint mode, jint first, jint count, jlong function_pointer) {
	glDrawArraysPROC glDrawArrays = (glDrawArraysPROC)((intptr_t)function_pointer);
	glDrawArrays(mode, first, count);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDrawBuffer(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glDrawBufferPROC glDrawBuffer = (glDrawBufferPROC)((intptr_t)function_pointer);
	glDrawBuffer(mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDrawElements(JNIEnv *env, jclass clazz, jint mode, jint count, jint type, jobject indices, jint indices_position, jlong function_pointer) {
	const GLvoid *indices_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, indices)) + indices_position));
	glDrawElementsPROC glDrawElements = (glDrawElementsPROC)((intptr_t)function_pointer);
	glDrawElements(mode, count, type, indices_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDrawElementsBO(JNIEnv *env, jclass clazz, jint mode, jint count, jint type, jint indices_buffer_offset, jlong function_pointer) {
	const GLvoid *indices_address = ((const GLvoid *)offsetToPointer(indices_buffer_offset));
	glDrawElementsPROC glDrawElements = (glDrawElementsPROC)((intptr_t)function_pointer);
	glDrawElements(mode, count, type, indices_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDrawPixels(JNIEnv *env, jclass clazz, jint width, jint height, jint format, jint type, jobject pixels, jint pixels_position, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pixels)) + pixels_position));
	glDrawPixelsPROC glDrawPixels = (glDrawPixelsPROC)((intptr_t)function_pointer);
	glDrawPixels(width, height, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDrawPixelsBO(JNIEnv *env, jclass clazz, jint width, jint height, jint format, jint type, jint pixels_buffer_offset, jlong function_pointer) {
	const GLvoid *pixels_address = ((const GLvoid *)offsetToPointer(pixels_buffer_offset));
	glDrawPixelsPROC glDrawPixels = (glDrawPixelsPROC)((intptr_t)function_pointer);
	glDrawPixels(width, height, format, type, pixels_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEdgeFlag(JNIEnv *env, jclass clazz, jboolean flag, jlong function_pointer) {
	glEdgeFlagPROC glEdgeFlag = (glEdgeFlagPROC)((intptr_t)function_pointer);
	glEdgeFlag(flag);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEdgeFlagPointer(JNIEnv *env, jclass clazz, jint stride, jobject pointer, jint pointer_position, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pointer)) + pointer_position));
	glEdgeFlagPointerPROC glEdgeFlagPointer = (glEdgeFlagPointerPROC)((intptr_t)function_pointer);
	glEdgeFlagPointer(stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEdgeFlagPointerBO(JNIEnv *env, jclass clazz, jint stride, jint pointer_buffer_offset, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)offsetToPointer(pointer_buffer_offset));
	glEdgeFlagPointerPROC glEdgeFlagPointer = (glEdgeFlagPointerPROC)((intptr_t)function_pointer);
	glEdgeFlagPointer(stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDisable(JNIEnv *env, jclass clazz, jint cap, jlong function_pointer) {
	glDisablePROC glDisable = (glDisablePROC)((intptr_t)function_pointer);
	glDisable(cap);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEnable(JNIEnv *env, jclass clazz, jint cap, jlong function_pointer) {
	glEnablePROC glEnable = (glEnablePROC)((intptr_t)function_pointer);
	glEnable(cap);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDisableClientState(JNIEnv *env, jclass clazz, jint cap, jlong function_pointer) {
	glDisableClientStatePROC glDisableClientState = (glDisableClientStatePROC)((intptr_t)function_pointer);
	glDisableClientState(cap);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEnableClientState(JNIEnv *env, jclass clazz, jint cap, jlong function_pointer) {
	glEnableClientStatePROC glEnableClientState = (glEnableClientStatePROC)((intptr_t)function_pointer);
	glEnableClientState(cap);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEvalCoord2f(JNIEnv *env, jclass clazz, jfloat u, jfloat v, jlong function_pointer) {
	glEvalCoord2fPROC glEvalCoord2f = (glEvalCoord2fPROC)((intptr_t)function_pointer);
	glEvalCoord2f(u, v);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEvalCoord1f(JNIEnv *env, jclass clazz, jfloat u, jlong function_pointer) {
	glEvalCoord1fPROC glEvalCoord1f = (glEvalCoord1fPROC)((intptr_t)function_pointer);
	glEvalCoord1f(u);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEvalMesh2(JNIEnv *env, jclass clazz, jint mode, jint i1, jint i2, jint j1, jint j2, jlong function_pointer) {
	glEvalMesh2PROC glEvalMesh2 = (glEvalMesh2PROC)((intptr_t)function_pointer);
	glEvalMesh2(mode, i1, i2, j1, j2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEvalMesh1(JNIEnv *env, jclass clazz, jint mode, jint i1, jint i2, jlong function_pointer) {
	glEvalMesh1PROC glEvalMesh1 = (glEvalMesh1PROC)((intptr_t)function_pointer);
	glEvalMesh1(mode, i1, i2);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEvalPoint2(JNIEnv *env, jclass clazz, jint i, jint j, jlong function_pointer) {
	glEvalPoint2PROC glEvalPoint2 = (glEvalPoint2PROC)((intptr_t)function_pointer);
	glEvalPoint2(i, j);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEvalPoint1(JNIEnv *env, jclass clazz, jint i, jlong function_pointer) {
	glEvalPoint1PROC glEvalPoint1 = (glEvalPoint1PROC)((intptr_t)function_pointer);
	glEvalPoint1(i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClearIndex(JNIEnv *env, jclass clazz, jfloat c, jlong function_pointer) {
	glClearIndexPROC glClearIndex = (glClearIndexPROC)((intptr_t)function_pointer);
	glClearIndex(c);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClearStencil(JNIEnv *env, jclass clazz, jint s, jlong function_pointer) {
	glClearStencilPROC glClearStencil = (glClearStencilPROC)((intptr_t)function_pointer);
	glClearStencil(s);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClipPlane(JNIEnv *env, jclass clazz, jint plane, jobject equation, jint equation_position, jlong function_pointer) {
	const GLdouble *equation_address = ((const GLdouble *)(*env)->GetDirectBufferAddress(env, equation)) + equation_position;
	glClipPlanePROC glClipPlane = (glClipPlanePROC)((intptr_t)function_pointer);
	glClipPlane(plane, equation_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColor4ub(JNIEnv *env, jclass clazz, jbyte red, jbyte green, jbyte blue, jbyte alpha, jlong function_pointer) {
	glColor4ubPROC glColor4ub = (glColor4ubPROC)((intptr_t)function_pointer);
	glColor4ub(red, green, blue, alpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColor4f(JNIEnv *env, jclass clazz, jfloat red, jfloat green, jfloat blue, jfloat alpha, jlong function_pointer) {
	glColor4fPROC glColor4f = (glColor4fPROC)((intptr_t)function_pointer);
	glColor4f(red, green, blue, alpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColor4b(JNIEnv *env, jclass clazz, jbyte red, jbyte green, jbyte blue, jbyte alpha, jlong function_pointer) {
	glColor4bPROC glColor4b = (glColor4bPROC)((intptr_t)function_pointer);
	glColor4b(red, green, blue, alpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColor3ub(JNIEnv *env, jclass clazz, jbyte red, jbyte green, jbyte blue, jlong function_pointer) {
	glColor3ubPROC glColor3ub = (glColor3ubPROC)((intptr_t)function_pointer);
	glColor3ub(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColor3f(JNIEnv *env, jclass clazz, jfloat red, jfloat green, jfloat blue, jlong function_pointer) {
	glColor3fPROC glColor3f = (glColor3fPROC)((intptr_t)function_pointer);
	glColor3f(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColor3b(JNIEnv *env, jclass clazz, jbyte red, jbyte green, jbyte blue, jlong function_pointer) {
	glColor3bPROC glColor3b = (glColor3bPROC)((intptr_t)function_pointer);
	glColor3b(red, green, blue);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColorMask(JNIEnv *env, jclass clazz, jboolean red, jboolean green, jboolean blue, jboolean alpha, jlong function_pointer) {
	glColorMaskPROC glColorMask = (glColorMaskPROC)((intptr_t)function_pointer);
	glColorMask(red, green, blue, alpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColorMaterial(JNIEnv *env, jclass clazz, jint face, jint mode, jlong function_pointer) {
	glColorMaterialPROC glColorMaterial = (glColorMaterialPROC)((intptr_t)function_pointer);
	glColorMaterial(face, mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColorPointer(JNIEnv *env, jclass clazz, jint size, jint type, jint stride, jobject pointer, jint pointer_position, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, pointer)) + pointer_position));
	glColorPointerPROC glColorPointer = (glColorPointerPROC)((intptr_t)function_pointer);
	glColorPointer(size, type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglColorPointerBO(JNIEnv *env, jclass clazz, jint size, jint type, jint stride, jint pointer_buffer_offset, jlong function_pointer) {
	const GLvoid *pointer_address = ((const GLvoid *)offsetToPointer(pointer_buffer_offset));
	glColorPointerPROC glColorPointer = (glColorPointerPROC)((intptr_t)function_pointer);
	glColorPointer(size, type, stride, pointer_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCopyPixels(JNIEnv *env, jclass clazz, jint x, jint y, jint width, jint height, jint type, jlong function_pointer) {
	glCopyPixelsPROC glCopyPixels = (glCopyPixelsPROC)((intptr_t)function_pointer);
	glCopyPixels(x, y, width, height, type);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCopyTexImage1D(JNIEnv *env, jclass clazz, jint target, jint level, jint internalFormat, jint x, jint y, jint width, jint border, jlong function_pointer) {
	glCopyTexImage1DPROC glCopyTexImage1D = (glCopyTexImage1DPROC)((intptr_t)function_pointer);
	glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCopyTexImage2D(JNIEnv *env, jclass clazz, jint target, jint level, jint internalFormat, jint x, jint y, jint width, jint height, jint border, jlong function_pointer) {
	glCopyTexImage2DPROC glCopyTexImage2D = (glCopyTexImage2DPROC)((intptr_t)function_pointer);
	glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCopyTexSubImage1D(JNIEnv *env, jclass clazz, jint target, jint level, jint xoffset, jint x, jint y, jint width, jlong function_pointer) {
	glCopyTexSubImage1DPROC glCopyTexSubImage1D = (glCopyTexSubImage1DPROC)((intptr_t)function_pointer);
	glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCopyTexSubImage2D(JNIEnv *env, jclass clazz, jint target, jint level, jint xoffset, jint yoffset, jint x, jint y, jint width, jint height, jlong function_pointer) {
	glCopyTexSubImage2DPROC glCopyTexSubImage2D = (glCopyTexSubImage2DPROC)((intptr_t)function_pointer);
	glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCullFace(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glCullFacePROC glCullFace = (glCullFacePROC)((intptr_t)function_pointer);
	glCullFace(mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDeleteTextures(JNIEnv *env, jclass clazz, jint n, jobject textures, jint textures_position, jlong function_pointer) {
	const GLuint *textures_address = ((const GLuint *)(*env)->GetDirectBufferAddress(env, textures)) + textures_position;
	glDeleteTexturesPROC glDeleteTextures = (glDeleteTexturesPROC)((intptr_t)function_pointer);
	glDeleteTextures(n, textures_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglDeleteLists(JNIEnv *env, jclass clazz, jint list, jint range, jlong function_pointer) {
	glDeleteListsPROC glDeleteLists = (glDeleteListsPROC)((intptr_t)function_pointer);
	glDeleteLists(list, range);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClearDepth(JNIEnv *env, jclass clazz, jdouble depth, jlong function_pointer) {
	glClearDepthPROC glClearDepth = (glClearDepthPROC)((intptr_t)function_pointer);
	glClearDepth(depth);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglArrayElement(JNIEnv *env, jclass clazz, jint i, jlong function_pointer) {
	glArrayElementPROC glArrayElement = (glArrayElementPROC)((intptr_t)function_pointer);
	glArrayElement(i);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglEnd(JNIEnv *env, jclass clazz, jlong function_pointer) {
	glEndPROC glEnd = (glEndPROC)((intptr_t)function_pointer);
	glEnd();
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglBegin(JNIEnv *env, jclass clazz, jint mode, jlong function_pointer) {
	glBeginPROC glBegin = (glBeginPROC)((intptr_t)function_pointer);
	glBegin(mode);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglBindTexture(JNIEnv *env, jclass clazz, jint target, jint texture, jlong function_pointer) {
	glBindTexturePROC glBindTexture = (glBindTexturePROC)((intptr_t)function_pointer);
	glBindTexture(target, texture);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglBitmap(JNIEnv *env, jclass clazz, jint width, jint height, jfloat xorig, jfloat yorig, jfloat xmove, jfloat ymove, jobject bitmap, jint bitmap_position, jlong function_pointer) {
	const GLubyte *bitmap_address = ((const GLubyte *)(*env)->GetDirectBufferAddress(env, bitmap)) + bitmap_position;
	glBitmapPROC glBitmap = (glBitmapPROC)((intptr_t)function_pointer);
	glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglBitmapBO(JNIEnv *env, jclass clazz, jint width, jint height, jfloat xorig, jfloat yorig, jfloat xmove, jfloat ymove, jint bitmap_buffer_offset, jlong function_pointer) {
	const GLubyte *bitmap_address = ((const GLubyte *)offsetToPointer(bitmap_buffer_offset));
	glBitmapPROC glBitmap = (glBitmapPROC)((intptr_t)function_pointer);
	glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglBlendFunc(JNIEnv *env, jclass clazz, jint sfactor, jint dfactor, jlong function_pointer) {
	glBlendFuncPROC glBlendFunc = (glBlendFuncPROC)((intptr_t)function_pointer);
	glBlendFunc(sfactor, dfactor);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCallList(JNIEnv *env, jclass clazz, jint list, jlong function_pointer) {
	glCallListPROC glCallList = (glCallListPROC)((intptr_t)function_pointer);
	glCallList(list);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglCallLists(JNIEnv *env, jclass clazz, jint n, jint type, jobject lists, jint lists_position, jlong function_pointer) {
	const GLvoid *lists_address = ((const GLvoid *)(((char *)(*env)->GetDirectBufferAddress(env, lists)) + lists_position));
	glCallListsPROC glCallLists = (glCallListsPROC)((intptr_t)function_pointer);
	glCallLists(n, type, lists_address);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClear(JNIEnv *env, jclass clazz, jint mask, jlong function_pointer) {
	glClearPROC glClear = (glClearPROC)((intptr_t)function_pointer);
	glClear(mask);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClearAccum(JNIEnv *env, jclass clazz, jfloat red, jfloat green, jfloat blue, jfloat alpha, jlong function_pointer) {
	glClearAccumPROC glClearAccum = (glClearAccumPROC)((intptr_t)function_pointer);
	glClearAccum(red, green, blue, alpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglClearColor(JNIEnv *env, jclass clazz, jfloat red, jfloat green, jfloat blue, jfloat alpha, jlong function_pointer) {
	glClearColorPROC glClearColor = (glClearColorPROC)((intptr_t)function_pointer);
	glClearColor(red, green, blue, alpha);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglAlphaFunc(JNIEnv *env, jclass clazz, jint func, jfloat ref, jlong function_pointer) {
	glAlphaFuncPROC glAlphaFunc = (glAlphaFuncPROC)((intptr_t)function_pointer);
	glAlphaFunc(func, ref);
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_GL11_nglAccum(JNIEnv *env, jclass clazz, jint op, jfloat value, jlong function_pointer) {
	glAccumPROC glAccum = (glAccumPROC)((intptr_t)function_pointer);
	glAccum(op, value);
}

