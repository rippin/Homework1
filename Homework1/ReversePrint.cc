//
//  ReversePrint.cc
//  Homework1
//
//  Created by Eric Franco on 9/29/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//
#include <iostream>
#include "Stack.cc"

using namespace std;


int main(){
    
    while (true){
        string s;
        cout << "\nEnter a string: ";
        cin >> s;
        Stack stack;
        const char * c = s.c_str();
        //push into stack
        for(int i = 0; i <= s.length(); i++){
            stack.push(c[i]);
            
        }
        //pop
        const int size = stack.size();
        for (int i = 0; i < size; i++){
            cout << stack.top();
            stack.pop();
        }
        
    }
    
    
    return 0;
}

