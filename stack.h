//
//  stack.h
//  LogicCircuitGenerator
//
//  Created by Faizaan Chishtie on 2018-11-09.
//  Copyright © 2018 Faizaan Chishtie. All rights reserved.
//

#ifndef stack_h
#define stack_h

class Stack{
private:
    const int CAPACITY = 1000;
    int size;
    char *items;
    
public:
    Stack() : size{-1} {
        items = new char[CAPACITY];
    }
    void push(char c);
    char pop();
    bool isEmpty();
    ~Stack();
};

#endif /* stack_h */
