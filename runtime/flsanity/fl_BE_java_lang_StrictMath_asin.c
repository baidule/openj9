/*******************************************************************************
 * Copyright (c) 2002, 2014 IBM Corp. and others
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
#define true 1
#define false 0
#include "floatsanityg.h"


   void group_java_lang_StrictMath_asin() {
      int i=0, groupNum=52,numTests=127;
      int testsPassed=0, testsFailed=0;
      unsigned int op_0 [] = {
         0x3fd58139, 0xf95ac4e8,
         0x3fd4d753, 0xca24770c,
         0x3fe1f1b5, 0xe2ee80f8,
         0x3fe49c30, 0xb7f0c2cd,
         0x3fe7d46b, 0xb0e4050c,
         0x3fc0e1f1, 0x09547674,
         0x3fd1a461, 0xa53076c8,
         0x3fe6d154, 0x187c4bbf,
         0x3fe7ba16, 0xf9d650c2,
         0x3fe8ff6c, 0x11a7fd62,
         0x3fda4581, 0x212ad2cc,
         0x3fd48eb0, 0xe8c22c3c,
         0x3fde27bd, 0x7edbf5f0,
         0x3fc04b98, 0xdca6b9ac,
         0x3fe1d234, 0x547f8161,
         0x3fe3af12, 0x8232e8e3,
         0x3fe8cf7c, 0xf31f38d8,
         0x3fe87105, 0x3cd8f2bf,
         0x3f932ffb, 0x96cf3360,
         0x3fb378cd, 0x50af46e8,
         0x3ff921f0, 0xd7e968a9,
         0xc01921fb, 0x54442d18,
         0x3ff921fb, 0x54442d1b,
         0xffefffff, 0xffffffff,
         0xffeccccc, 0xcccccccc,
         0xffe99999, 0x99999999,
         0xffe66666, 0x66666666,
         0xffe33333, 0x33333333,
         0xffe00000, 0x00000000,
         0xffd99999, 0x9999999a,
         0xffd33333, 0x33333334,
         0xffc99999, 0x9999999c,
         0xffb99999, 0x9999999f,
         0xfc980000, 0x00000000,
         0x7fb99999, 0x99999993,
         0x7fc99999, 0x99999996,
         0x7fd33333, 0x33333331,
         0x7fd99999, 0x99999997,
         0x7fdfffff, 0xfffffffd,
         0x7fe33333, 0x33333332,
         0x7fe66666, 0x66666665,
         0x7fe99999, 0x99999998,
         0x7feccccc, 0xcccccccb,
         0x7fefffff, 0xfffffffe,
         0xc32fc000, 0x00000000,
         0x7fefffff, 0xffffffff,
         0x0, 0x2,
         0x0, 0x9,
         0x40000, 0x00000000,
         0x80000, 0x00000000,
         0xfffff, 0xfffffffe,
         0xfffff, 0xffffffff,
         0x80000000, 0x00000002,
         0x80000000, 0x00000009,
         0x80040000, 0x00000000,
         0x80080000, 0x00000000,
         0x800fffff, 0xfffffffe,
         0x800fffff, 0xffffffff,
         0x408fb4e1, 0x47ae149b,
         0x4090961e, 0xb851eb95,
         0xc0863000, 0x00000000,
         0xc08627eb, 0x851eb852,
         0x4051ef5c, 0x28f5c132,
         0x3ff0a2b2, 0x3def12b7,
         0x3ff0a2b2, 0x3e33cae7,
         0x3ff0a2b2, 0x3f8b63d7,
         0xbfefffff, 0xffffffff,
         0x3fefffff, 0xfffffff0,
         0x3fefffff, 0xffffffff,
         0x3fefffff, 0xfffffe14,
         0xc0152c38, 0xc4e8043a,
         0xc014e48a, 0xb06d22f4,
         0xc014da4d, 0x3fc94bea,
         0xc010d00f, 0xcf2574f8,
         0xc0014e34, 0x192c3200,
         0x40124ea8, 0x82c60fb8,
         0x401258e5, 0xf369e6c2,
         0x4014e842, 0x1c5fa942,
         0xbff80d0c, 0x0962a17e,
         0xbff03601, 0xcbf1fda5,
         0x3ff111ac, 0x4888e3a9,
         0x3ff911ac, 0x4888e3ab,
         0x3fefced9, 0x1687291c,
         0x3fefe76c, 0x8b439398,
         0x3feff3b6, 0x45a1c8d6,
         0x3feff7ce, 0xd9168540,
         0xc014eec8, 0x2110f9fe,
         0x400d7e98, 0xb3a09a7b,
         0xc00295e2, 0x2da71340,
         0x3ffff2f3, 0xf69d5e8e,
         0x401058e5, 0xf369e6ce,
         0xc00e8167, 0x4c5f64e4,
         0x3fc6978d, 0x4fdf3b6a,
         0x3fd126e9, 0x78d4fdf8,
         0x3fd2978d, 0x4fdf3b69,
         0x3fd6a7ef, 0x9db22d14,
         0x3fd7c6a7, 0xef9db233,
         0x3fd7df3b, 0x645a1cb2,
         0x3fd820c4, 0x9ba5e35a,
         0x3fd98106, 0x24dd2f21,
         0x3fdbdf3b, 0x645a1cb3,
         0x3fdc20c4, 0x9ba5e35b,
         0x3fdc28f5, 0xc28f5c30,
         0x3fdcbc6a, 0x7ef9db2a,
         0x3fdf645a, 0x1cac0839,
         0x3fe00831, 0x26e978d8,
         0x3fe01cac, 0x083126ea,
         0x3fe0b439, 0x5810623c,
         0x3fe0bc6a, 0x7ef9db10,
         0x3fe1ba5e, 0x353f7cbc,
         0x3fe1c6a7, 0xef9db1fa,
         0x3fe1d2f1, 0xa9fbe738,
         0x3fe1d70a, 0x3d70a3a2,
         0x3fe21cac, 0x083126ac,
         0x3fe29ba5, 0xe353f782,
         0x3fe33f7c, 0xed916812,
         0x3fe38d4f, 0xdf3b63f0,
         0x3fe39168, 0x72b0205a,
         0x3fe39999, 0x9999992e,
         0x3fe40c49, 0xba5e34c6,
         0x3fe4e147, 0xae147a4e,
         0x3fe5ef9d, 0xb22d0da2,
         0x3fe651eb, 0x851eb792,
         0x3fe676c8, 0xb439574c,
         0x3fe81062, 0x4dd2f0b4,
         0x3fe84189, 0x374bc5ac,
         0x3feac083, 0x126e9644,
         0x0, 0x0};
      unsigned int result [] = {
         0x3fd5ee77, 0x93246ee4,
         0x3fd53a6d, 0xd5fba55b,
         0x3fe30cae, 0xca684475,
         0x3fe664c7, 0x107a43b8,
         0x3feae1bc, 0x5e451773,
         0x3fc0ee92, 0x58db82de,
         0x3fd1dfa0, 0xe9ad847e,
         0x3fe96729, 0x20d59faf,
         0x3feaba63, 0xae2fcc55,
         0x3fecb08f, 0x8c77b0d4,
         0x3fdb1254, 0x851ee9a6,
         0x3fd4edaa, 0xc18d32fc,
         0x3fdf665e, 0x4c2c2f99,
         0x3fc056f2, 0xc62d5f45,
         0x3fe2e6b0, 0xccda08f0,
         0x3fe53386, 0x3ac2b90d,
         0x3fec6439, 0x97d63f1e,
         0x3febd047, 0x45223fd0,
         0x3f933045, 0x2f1db15d,
         0x3fb37d9f, 0x011063cd,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x0, 0x2,
         0x0, 0x9,
         0x40000, 0x00000000,
         0x80000, 0x00000000,
         0xfffff, 0xfffffffe,
         0xfffff, 0xffffffff,
         0x80000000, 0x00000002,
         0x80000000, 0x00000009,
         0x80040000, 0x00000000,
         0x80080000, 0x00000000,
         0x800fffff, 0xfffffffe,
         0x800fffff, 0xffffffff,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0xbff921fb, 0x50442d18,
         0x3ff921fb, 0x44442d18,
         0x3ff921fb, 0x50442d18,
         0x3ff921fa, 0xfb8ac1e4,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x3ff76110, 0x12ab59b1,
         0x3ff7e4a0, 0xa982f42d,
         0x3ff8419b, 0x46585385,
         0x3ff86ac9, 0xad18e290,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x7ff80000, 0x00000000,
         0x3fc6b602, 0x663773a0,
         0x3fd15d3f, 0xd6ef496c,
         0x3fd2dd2c, 0x4be44395,
         0x3fd72876, 0x4e48e613,
         0x3fd85c25, 0x4a4baffc,
         0x3fd8769f, 0xe8dfde2c,
         0x3fd8bd51, 0xd868d08a,
         0x3fda3b7c, 0xa8b8996e,
         0x3fdcd686, 0xb643233c,
         0x3fdd1f68, 0x4ace3146,
         0x3fdd2887, 0x569581d2,
         0x3fddcd24, 0x554c5d69,
         0x3fe067bd, 0x1f33f4bd,
         0x3fe0cac8, 0x9c39e9c6,
         0x3fe0e277, 0xb15be34e,
         0x3fe192ff, 0x7b30de75,
         0x3fe19c9b, 0x14fe0511,
         0x3fe2ca06, 0x830c33f3,
         0x3fe2d8cb, 0x5bc7bc1d,
         0x3fe2e794, 0xc3a8f340,
         0x3fe2ec83, 0x9598c4dc,
         0x3fe340ae, 0x93c3d16c,
         0x3fe3dbb8, 0x410e25a8,
         0x3fe4a6ee, 0x917d09e3,
         0x3fe508ca, 0xa54d62e1,
         0x3fe50df7, 0x8bd53391,
         0x3fe51853, 0x4a515ec4,
         0x3fe5aa6e, 0x4efef1fe,
         0x3fe6bf84, 0xfc98a816,
         0x3fe82b56, 0x662633c8,
         0x3fe8b36d, 0x72baa8cb,
         0x3fe8e707, 0xb3cd8fe3,
         0x3feb3c23, 0x31c74c7c,
         0x3feb8718, 0xd8ada81a,
         0x3fefadb1, 0x30c88653,
         0x0, 0x0};
      double *p0=(double *) op_0;
      double *erp=(double*) result, r, *rp=&r;
      for (i=0; i<numTests; i++) {
         r = java_lang_StrictMath_asin(*(p0));
         if ( IS_DNAN(erp) ){
            if ( !(IS_DNAN(&r)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }

         } else {
            if ( (HIWORD(&r) != HIWORD(erp)) || (LOWORD(&r) != LOWORD(erp)) ){
               printf("%d.%d: op_0=0x%08x%08x Expected=0x%08x%08x Actual=0x%08x%08x \n",
                  groupNum, i, 
                  *(int *)p0, *((int *)p0+1), *(int *)erp, *((int *) erp + 1), *(int *)&r, *((int *) &r + 1));
               testsFailed++;
            } else {
               testsPassed++;
            }
         }

         p0++;erp++;
      }
      printf("[%d] %s Passed %d Failed %d Total %d \n", groupNum,"java_lang_StrictMath_asin", testsPassed, testsFailed, numTests);
      totalNumTest +=numTests; totalTestsPassed +=testsPassed; totalTestsFailed +=testsFailed;
   }
