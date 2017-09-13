/*******************************************************************************
 * Copyright (c) 2001, 2017 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at https://www.eclipse.org/legal/epl-2.0/
 * or the Apache License, Version 2.0 which accompanies this distribution and
 * is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following
 * Secondary Licenses when the conditions for such availability set
 * forth in the Eclipse Public License, v. 2.0 are satisfied: GNU
 * General Public License, version 2 with the GNU Classpath
 * Exception [1] and GNU General Public License, version 2 with the
 * OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
 *******************************************************************************/
package com.ibm.uma.freemarker;

import java.util.Hashtable;
import java.util.Iterator;

import com.ibm.uma.UMA;
import com.ibm.uma.UMAException;

import freemarker.template.TemplateCollectionModel;
import freemarker.template.TemplateHashModel;
import freemarker.template.TemplateModel;
import freemarker.template.TemplateModelException;
import freemarker.template.TemplateModelIterator;

public class Artifacts implements TemplateCollectionModel, TemplateHashModel {
	
	Hashtable<String, com.ibm.uma.om.Artifact> artifacts;
	
	public Artifacts(Hashtable<String, com.ibm.uma.om.Artifact> artifacts) {
		this.artifacts = artifacts;
	}
	
	class ArtifactsIterator implements TemplateModelIterator {
		Iterator<String> iterator;
	
		public ArtifactsIterator() throws UMAException {
			iterator = artifacts.keySet().iterator();
		}
		public boolean hasNext() throws TemplateModelException {
			return iterator.hasNext();
		}
		public TemplateModel next() throws TemplateModelException {
			return new Artifact(iterator.next());			
		}
	}

	public TemplateModelIterator iterator() throws TemplateModelException {
		try {
			return new ArtifactsIterator();
		} catch (UMAException e) {
			throw new TemplateModelException(e);
		}
	}
	
	public TemplateModel get(String arg0) throws TemplateModelException {
		com.ibm.uma.om.Artifact artifact = UMA.getUma().getArtifact(arg0);
		if ( artifact == null ) {
			return null;
		}
		return new Artifact(artifact);
	}
	
	
	public boolean isEmpty() throws TemplateModelException {
		return false;
	}
	
	

}