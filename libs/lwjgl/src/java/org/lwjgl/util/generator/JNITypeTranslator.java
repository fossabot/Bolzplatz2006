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

package org.lwjgl.util.generator;

import com.sun.mirror.type.*;
import com.sun.mirror.util.*;

/**
 * $Id: JNITypeTranslator.java,v 1.1 2005/02/20 19:28:31 cix_foo Exp $
 *
 * A TypeVisitor that translates TypeMirrors to JNI
 * type strings.
 *
 * @author elias_naur <elias_naur@users.sourceforge.net>
 * @version $Revision: 1.1 $
 */
public class JNITypeTranslator implements TypeVisitor {
	private final StringBuilder signature = new StringBuilder();

	public String getSignature() {
		return signature.toString();
	}

	public void visitAnnotationType(AnnotationType t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitArrayType(ArrayType t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitClassType(ClassType t) {
		signature.append("jobject");
	}

	public void visitDeclaredType(DeclaredType t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitEnumType(EnumType t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitInterfaceType(InterfaceType t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitPrimitiveType(PrimitiveType t) {
		String type;
		switch (t.getKind()) {
			case INT:
				type = "jint";
				break;
			case FLOAT:
				type = "jfloat";
				break;
			case SHORT:
				type = "jshort";
				break;
			case BYTE:
				type = "jbyte";
				break;
			case DOUBLE:
				type = "jdouble";
				break;
			case BOOLEAN:
				type = "jboolean";
				break;
			default:
				throw new RuntimeException(t + " is not allowed");
		}
		signature.append(type);
	}

	public void visitReferenceType(ReferenceType t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitTypeMirror(TypeMirror t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitTypeVariable(TypeVariable t) {
		throw new RuntimeException(t + " is not allowed");
	}

	public void visitVoidType(VoidType t) {
		signature.append(t.toString());
	}

	public void visitWildcardType(WildcardType t) {
		throw new RuntimeException(t + " is not allowed");
	}
}
