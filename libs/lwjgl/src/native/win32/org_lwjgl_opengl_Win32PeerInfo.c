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

/**
 * $Id: org_lwjgl_opengl_Win32PeerInfo.c,v 1.1 2005/02/21 14:46:47 elias_naur Exp $
 *
 * @author elias_naur <elias_naur@users.sourceforge.net>
 * @version $Revision: 1.1 $
 */

#include <jni.h>
#include "org_lwjgl_opengl_Win32PeerInfo.h"
#include "context.h"
#include "common_tools.h"

JNIEXPORT jobject JNICALL Java_org_lwjgl_opengl_Win32PeerInfo_createHandle
  (JNIEnv *env, jclass clazz) {
	return newJavaManagedByteBuffer(env, sizeof(Win32PeerInfo));
}

JNIEXPORT void JNICALL Java_org_lwjgl_opengl_Win32PeerInfo_nChoosePixelFormat
  (JNIEnv *env, jclass clazz, jobject peer_info_handle, jint origin_x, jint origin_y, jobject pixel_format, jobject pixel_format_caps, jboolean use_hdc_bpp, jboolean window, jboolean pbuffer, jboolean double_buffer) {
	Win32PeerInfo *peer_info = (Win32PeerInfo *)(*env)->GetDirectBufferAddress(env, peer_info_handle);
	int pixel_format_id = findPixelFormat(env, origin_x, origin_y, pixel_format, pixel_format_caps, use_hdc_bpp, window, pbuffer, double_buffer);
	if (pixel_format_id == -1)
		return;
	if (!applyPixelFormat(peer_info->format_hdc, pixel_format_id)) {
		throwException(env, "Could not apply pixel format");
		return;
	}
}
