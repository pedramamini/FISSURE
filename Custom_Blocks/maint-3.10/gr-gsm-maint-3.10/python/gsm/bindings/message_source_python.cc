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
/* BINDTOOL_HEADER_FILE(qa_utils/message_source.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(5c3f35ba4c0c908058f42f223eb969bf)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/qa_utils/message_source.h>
// pydoc.h is automatically generated in the build directory
#include <message_source_pydoc.h>

void bind_message_source(py::module& m)
{

    using message_source    = ::gr::gsm::message_source;


    py::class_<message_source, gr::block, gr::basic_block,
        std::shared_ptr<message_source>>(m, "message_source", D(message_source))

        .def(py::init(&message_source::make),
           py::arg("msg_data"),
           D(message_source,make)
        )
        




        
        .def("set_msg_data",&message_source::set_msg_data,       
            py::arg("msg_data"),
            D(message_source,set_msg_data)
        )

        ;




}








