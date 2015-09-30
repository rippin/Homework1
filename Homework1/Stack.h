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
    int top = -1;
public:
    Stack();
    void push(char c){
        if (top == STACK_CAPACITY){
            cout << "Stack is full, cannot push\n";
        }
        else {
            array[++top] = c;
    
        }
    }
    void pop(){
        if (top >= 0) {
        array[top] = NULL;
        --top;
        }
        else {
            cout << "Stack is empty, nothing to pop.\n";
        }
    }
    
    char top(){
        return array[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    ~Stack(){
        delete[] array;
    }
    
};


