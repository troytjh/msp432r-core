/* --COPYRIGHT--,EPL
 *  Copyright (c) 2016-2018 Texas Instruments Incorporated
 *  All rights reserved. This program and the accompanying materials
 *  are made available under the terms of the Eclipse Public License v1.0
 *  which accompanies this distribution, and is available at
 *  http://www.eclipse.org/legal/epl-v10.html
 *
 *  Contributors:
 *      Texas Instruments - initial implementation
 *
 * --/COPYRIGHT--*/

package xdc.rov.testserver;

/*!
 *  ======== CallStack ========
 *  @_nodoc
 *  This module provides call stack services to xdc.rov
 *
 *  Instances of this module are created by the ROV server in this package.
 *  This server uses instances of this module to initialize
 *  `{@link xdc.rov.Model}`; the module responsible for initializing the ROV
 *  model.
 *
 */
metaonly module CallStack inherits xdc.rov.ICallStack
{
  instance:
    create(Any memoryReader);
}
