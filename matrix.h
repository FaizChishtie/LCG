//
//  matrix.h
//  LogicCircuitGenerator
//
//  Created by Faizaan Chishtie on 2018-11-09.
//  Copyright © 2018 Faizaan Chishtie. All rights reserved.
//

#include <iostream>

#ifndef matrix_h
#define matrix_h

struct Matrix{
private:
    int rows;
    int cols;
    std::string** matrix;
public:
    Matrix() = default;
    Matrix(int rows, int cols);
    Matrix(int cols);
    
    
    
    void assignValueToPos(int _x, int _y, std::string s);
    void removeValueAtPos(int _x, int _y);
    void removeCol(int _y);
    void removeRow(int _x);
    
    
    
    ostream operator<<(const Matrix& mat);
    
    
};


#endif /* matrix_h */
