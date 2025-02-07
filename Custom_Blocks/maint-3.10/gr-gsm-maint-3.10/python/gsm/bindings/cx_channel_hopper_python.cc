/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(receiver/cx_channel_hopper.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(08741758b8d211f32570707908ecd75e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/receiver/cx_channel_hopper.h>
// pydoc.h is automatically generated in the build directory
#include <cx_channel_hopper_pydoc.h>

void bind_cx_channel_hopper(py::module& m)
{

    using cx_channel_hopper    = ::gr::gsm::cx_channel_hopper;


    py::class_<cx_channel_hopper, gr::block, gr::basic_block,
        std::shared_ptr<cx_channel_hopper>>(m, "cx_channel_hopper", D(cx_channel_hopper))

        .def(py::init(&cx_channel_hopper::make),
           py::arg("ma"),
           py::arg("maio"),
           py::arg("hsn"),
           D(cx_channel_hopper,make)
        )
        



        ;




}








