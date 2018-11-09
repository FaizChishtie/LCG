//
//  stack.cpp
//  LogicCircuitGenerator
//
//  Created by Faizaan Chishtie on 2018-11-09.
//  Copyright © 2018 Faizaan Chishtie. All rights reserved.
//

#include <stdio.h>
#include "stack.h"
#include <iostream>

char Stack::pop(){
    if( isEmpty() ){
        std::cerr << "No items in stack" << std::endl;
        return NULL;
    }
    return items[size];
}

void Stack::push(char c){
    if(size == (CAPACITY-1)){
        std::cerr << "Stack full" << std::endl;
        return;
    }
    ++size;
    items[size] = c;
}

bool Stack::isEmpty(){
    return size<0;
}

Stack::~Stack(){
    delete[] items;
}
