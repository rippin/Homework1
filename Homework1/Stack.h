//
//  Stack.h
//  Homework1
//
//  Created by Eric Franco on 9/29/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//

#define STACK_CAPACITY 1000


class Stack {
private:
    char array[STACK_CAPACITY];
    int topINT;
public:
    Stack();
    void push(char c);
    void pop();
    char top();
    bool isEmpty();
    int size();
    ~Stack();
    
};


