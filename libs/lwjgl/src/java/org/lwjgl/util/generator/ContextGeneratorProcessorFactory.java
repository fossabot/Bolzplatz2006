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

import com.sun.mirror.apt.*;
import com.sun.mirror.declaration.*;
import com.sun.mirror.type.*;
import com.sun.mirror.util.*;

import java.util.Collection;
import java.util.Collections;
import java.util.Set;
import java.util.Iterator;
import java.util.Map;
import java.util.Arrays;

import java.io.PrintWriter;
import java.io.IOException;
import java.io.File;

import static java.util.Collections.*;
import static com.sun.mirror.util.DeclarationVisitors.*;

/**
 * $Id: ContextGeneratorProcessorFactory.java,v 1.2 2005/03/21 08:27:43 elias_naur Exp $
 *
 * Generator tool for creating the ContexCapabilities class
 *
 * @author elias_naur <elias_naur@users.sourceforge.net>
 * @version $Revision: 1.2 $
 */
public class ContextGeneratorProcessorFactory implements AnnotationProcessorFactory, RoundCompleteListener {
	private static boolean first_round = true;
	
	// Process any set of annotations
	private static final Collection<String> supportedAnnotations =
		unmodifiableCollection(Arrays.asList("*"));

	public Collection<String> supportedAnnotationTypes() {
		return supportedAnnotations;
	}

	public Collection<String> supportedOptions() {
		return unmodifiableCollection(Arrays.asList("-Acontextspecific"));
	}

	public void roundComplete(RoundCompleteEvent event) {
		first_round = false;
	}

	public AnnotationProcessor getProcessorFor(Set<AnnotationTypeDeclaration> atds, AnnotationProcessorEnvironment env) {
		// Only process the initial types, not the generated ones
		if (first_round) {
			env.addListener(this);
			return new GeneratorProcessor(env);
		} else
			return AnnotationProcessors.NO_OP;
	}

	private static class GeneratorProcessor implements AnnotationProcessor {
		private final AnnotationProcessorEnvironment env;

		GeneratorProcessor(AnnotationProcessorEnvironment env) {
			this.env = env;
		}

		public void process() {
			Map<String, String> options = env.getOptions();
			boolean context_specific = options.containsKey("-Acontextspecific");
			try {
				generateContextCapabilitiesSource(context_specific);
			} catch (IOException e) {
				throw new RuntimeException(e);
			}
		}

		private void generateContextCapabilitiesSource(boolean context_specific) throws IOException {
			PrintWriter writer = env.getFiler().createSourceFile("org.lwjgl.opengl." + Utils.CONTEXT_CAPS_CLASS_NAME);
			writer.println("/* MACHINE GENERATED FILE, DO NOT EDIT */");
			writer.println();
			writer.println("package org.lwjgl.opengl;");
			writer.println();
			writer.println("import org.lwjgl.LWJGLException;");
			writer.println("import java.util.Set;");
			writer.println();
			ContextCapabilitiesGenerator.generateClassPrologue(writer, context_specific);
			DeclarationFilter filter = DeclarationFilter.getFilter(InterfaceDeclaration.class);
			Collection<TypeDeclaration> interface_decls = filter.filter(env.getSpecifiedTypeDeclarations());
			for (TypeDeclaration typedecl : interface_decls) {
				InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
				if (Utils.isFinal(interface_decl))
					ContextCapabilitiesGenerator.generateField(writer, interface_decl);
			}
			writer.println();
			for (TypeDeclaration typedecl : interface_decls) {
				InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
				ContextCapabilitiesGenerator.generateSymbolAddresses(writer, interface_decl);
			}
			writer.println();
			if (context_specific) {
				for (TypeDeclaration typedecl : interface_decls) {
					InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
					ContextCapabilitiesGenerator.generateAddressesInitializers(writer, interface_decl);
				}
				writer.println();
			}
			ContextCapabilitiesGenerator.generateInitStubsPrologue(writer, context_specific);
			for (TypeDeclaration typedecl : interface_decls) {
				InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
				if (!Utils.isFinal(interface_decl))
					ContextCapabilitiesGenerator.generateAddExtension(writer, interface_decl);
			}
			for (TypeDeclaration typedecl : interface_decls) {
				InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
				String simple_name = interface_decl.getSimpleName();
				if (simple_name.equals("GL11"))
					continue;
				ContextCapabilitiesGenerator.generateInitStubs(writer, interface_decl, context_specific);
			}
			ContextCapabilitiesGenerator.generateInitStubsEpilogue(writer, context_specific);
			writer.println();
			writer.println("\tstatic void unloadAllStubs() {");
			if (!context_specific) {
				writer.println("\t\tif (!loaded_stubs)");
				writer.println("\t\t\treturn;");
				for (TypeDeclaration typedecl : interface_decls) {
					InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
					ContextCapabilitiesGenerator.generateUnloadStubs(writer, interface_decl);
				}
				writer.println("\t\tloaded_stubs = false;");
			}
			writer.println("\t}");
			writer.println();
			ContextCapabilitiesGenerator.generateInitializerPrologue(writer);
			for (TypeDeclaration typedecl : interface_decls) {
				InterfaceDeclaration interface_decl = (InterfaceDeclaration)typedecl;
				if (Utils.isFinal(interface_decl))
					ContextCapabilitiesGenerator.generateInitializer(writer, interface_decl);
			}
			writer.println("\t}");
			writer.println("}");
			writer.close();
		}
	}
}
