//
//  Stack.cc
//  Homework1
//
//  Created by Eric Franco on 9/29/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//
#include "Stack.h"
#include <iostream>


Stack::Stack(){
    topINT = -1;
}

void Stack::push(char c){
    if (topINT == STACK_CAPACITY){
        std::cout << "Stack is full, cannot push.\n";
        return;
    }
    else if (c == '\0'){
        return;
    }
    else {
        array[++topINT] = c;
    }
}
void Stack::pop(){
    if (topINT > -1) {
        array[topINT] = '\0';
        topINT--;
    }
    else {
        std::cout << "Stack is empty, nothing to pop.\n";
    }
}

char Stack::top(){
    return array[topINT];
}
bool Stack::isEmpty(){
    return topINT == -1;
}
int Stack::size(){
    return topINT + 1;
}

Stack::~Stack(){

}