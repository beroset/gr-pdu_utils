/*
 * Copyright 2021 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(pack_unpack.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(3514e3b62de3d28f0c7d8b9ea1147576)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <pdu_utils/pack_unpack.h>
// pydoc.h is automatically generated in the build directory
#include <pack_unpack_pydoc.h>

void bind_pack_unpack(py::module& m)
{

    using pack_unpack = ::gr::pdu_utils::pack_unpack;


    py::class_<pack_unpack, gr::block, gr::basic_block, std::shared_ptr<pack_unpack>>(
        m, "pack_unpack", D(pack_unpack))

        .def(py::init(&pack_unpack::make),
             py::arg("mode"),
             py::arg("bitorder"),
             D(pack_unpack, make))


        .def(
            "set_mode", &pack_unpack::set_mode, py::arg("mode"), D(pack_unpack, set_mode))


        .def("set_bit_order",
             &pack_unpack::set_bit_order,
             py::arg("order"),
             D(pack_unpack, set_bit_order))

        ;
}