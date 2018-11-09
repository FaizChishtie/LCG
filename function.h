//
//  function.h
//  LogicCircuitGenerator
//
//  Created by Faizaan Chishtie on 2018-11-09.
//  Copyright © 2018 Faizaan Chishtie. All rights reserved.
//
#include "stack.h"
#include "matrix.h"
#include <iostream>

#ifndef function_h
#define function_h

class Function{
private:
    Stack literals;
    Stack operands;
    Matrix m;
    char *commandline;
public:
    Function() = default;
    Function(const char *input);
    
    void recieveCommandLineInput(const char* p); // takes cli input to internal char array for manipulation
    bool isParsable(); // checks if equation inputted is parsable -- i.e operators in order and
    void generateTruthTable(); // generates truth table with matrix
    std::ostream& operator<<(const Function& _func);
    
    ~Function();
    
    
};




#endif /* function_h */
