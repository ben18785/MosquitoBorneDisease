/*
# Sub-module containing agent functions
#
# This file is part of SMosMod.
#  Copyright (c) 2017-2018, Imperial College London
#  For licensing information, see the LICENSE file distributed with the SMosMod
#  software package.
*/

#include "world.hpp"

double World::getArea() {
  return width * length;
}
