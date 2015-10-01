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
    Stack(){
        topINT = -1;
    }
    void push(char c){
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
    void pop(){
        if (topINT > -1) {
            array[topINT] = '\0';
            topINT--;
        }
        else {
            std::cout << "Stack is empty, nothing to pop.\n";
        }
    }
    
    char top(){
        return array[topINT];
    }
    bool isEmpty(){
        return topINT == -1;
    }
    int size(){
        return topINT + 1;
    }
    ~Stack(){

    }
    
};


