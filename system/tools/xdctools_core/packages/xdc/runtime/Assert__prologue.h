/* 
 *  Copyright (c) 2008-2017 Texas Instruments Incorporated
 *  This program and the accompanying materials are made available under the
 *  terms of the Eclipse Public License v1.0 and Eclipse Distribution License
 *  v. 1.0 which accompanies this distribution. The Eclipse Public License is
 *  available at http://www.eclipse.org/legal/epl-v10.html and the Eclipse
 *  Distribution License is available at
 *  http://www.eclipse.org/org/documents/edl-v10.php.
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 * */

#ifndef xdc_runtime_Assert__prologue__include
#define xdc_runtime_Assert__prologue__include

/*
 *  ======== Assert__prologue.h ========
 */
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Diags.h>

/*
 *  ======== xdc_runtime_Assert_Id ========
 */
typedef xdc_Bits32 xdc_runtime_Assert_Id;

/*
 *  ======== Module__MID ========
 *  This definition allows non-module code to
 *  use the Assert module.  This symbol is normally defined in each
 *  module internal header (i.e., package/internal/<mod>.xdc.h).
 *
 *  Only do this if this file is not one that will be included in the Registry.
 *  This check ensures that Registry.h (which similarly defines these Module__*
 *  symbols) can be included in any order relative to other xdc.runtime
 *  headers.
 */
#ifndef Registry_CURDESC

#undef Module__MID
#define Module__MID xdc_runtime_Main_Module__id__C

#endif
#endif
/*
 *  @(#) xdc.runtime; 2, 1, 0,0; 8-21-2019 13:22:46; /db/ztree/library/trees/xdc/xdc-H25/src/packages/
 */

