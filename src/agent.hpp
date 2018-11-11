/*
# Sub-module containing agent functions
#
# This file is part of SMosMod.
#  Copyright (c) 2017-2018, Imperial College London
#  For licensing information, see the LICENSE file distributed with the SMosMod
#  software package.
*/


#ifndef SRC_AGENT_HPP_
#define SRC_AGENT_HPP_

class Agent {
 private:
  double age;

 public:
  // Constructors
  explicit Agent(double a);

  // Accessors
  double getAge() {return age; }
};

#endif  // SRC_AGENT_HPP_
