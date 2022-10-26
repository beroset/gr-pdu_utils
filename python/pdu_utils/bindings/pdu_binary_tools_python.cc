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
/* BINDTOOL_HEADER_FILE(pdu_binary_tools.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(bb4b4b9c5f500f72f20a06c15f8e8285)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/pdu_utils/pdu_binary_tools.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_binary_tools_pydoc.h>

void bind_pdu_binary_tools(py::module& m)
{

    using pdu_binary_tools = ::gr::pdu_utils::pdu_binary_tools;


    py::class_<pdu_binary_tools,
               gr::block,
               gr::basic_block,
               std::shared_ptr<pdu_binary_tools>>(
        m, "pdu_binary_tools", D(pdu_binary_tools))

        .def(
            py::init(&pdu_binary_tools::make), py::arg("mode"), D(pdu_binary_tools, make))


        ;
}