//
//  function.cpp
//  LogicCircuitGenerator
//
//  Created by Faizaan Chishtie on 2018-11-09.
//  Copyright © 2018 Faizaan Chishtie. All rights reserved.
//

#include <stdio.h>
#include "function.h"

class Stack();
class Matrix();

Function::Function(){
    literals = new Stack();
    operands = new Stack();
    commandline = nullptr;
}

Function::Function(const char* input){
    literals = new Stack();
    operands = new Stack();
    commandline = input;
}

