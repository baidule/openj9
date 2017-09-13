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
package jit.test.jitt.exceptions;

import org.testng.annotations.Test;
import org.testng.log4testng.Logger;

@Test(groups = { "level.sanity","component.jit" })
public class SanityE0 extends jit.test.jitt.Test {

	private static Logger logger = Logger.getLogger(SanityE0.class);

	static class BlewIt extends Exception {
	
	}

	private int tstException(int pi, int pj) throws BlewIt {
		int mi = 23;
		for (int j=0;j<1;j++)
			try
 			{
 				mi = 45;
  				if (pi == 48)
					throw new BlewIt();
 			} 
			 catch (BlewIt r) {
			 	mi = 19; 
	 		}
		return mi;
	}

	@Test
	public void testSanityE0() {
		int j = 4;
	
		 try  // cause resolve Special
	     {
	      	tstException(48,55);
		  }//causes JITed rtn to throw blew it
	         catch (BlewIt bcc ) 
	           {
		        j = 1;
		        logger.debug("Driver(interpreted caught BlewIt \n");
		       };
		 try // force routine to JIT
	        {for (int i = 0; i < 100; i++)   
		         tstException(52,55);
		    }
	        catch (BlewIt bcc ) 
	          {j = 3;
		      };
	         
		 j = 99;
		 for (int i = 0; i < 5; i++)
	 	  try
	         { 
	         	tstException(48,55);
		     } 
	         catch (BlewIt bcc ) 
	        {
	          	j = 0;
	       	}	
	}
}