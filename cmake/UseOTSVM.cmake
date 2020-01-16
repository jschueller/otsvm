#                                               -*- cmake -*-
#
#  UseOTSVM.cmake
#
#  Use OTSVM in CMake files
#
#  Copyright 2014-2020 Phimeca
#
#  This library is free software: you can redistribute it and/or modify
#  it under the terms of the GNU Lesser General Public License as published by
#  the Free Software Foundation, either version 3 of the License, or
#  (at your option) any later version.
#
#  This library is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU Lesser General Public License for more details.
#
#  You should have received a copy of the GNU Lesser General Public
#  along with this library.  If not, see <http://www.gnu.org/licenses/>.
#
#  @author dutka
#  @date   2010-02-04 16:44:49 +0100 (Thu, 04 Feb 2010)
#

add_definitions     ( ${OTSVM_DEFINITIONS} )
include_directories ( ${OTSVM_INCLUDE_DIRS} )
link_directories    ( ${OTSVM_LIBRARY_DIRS} )

