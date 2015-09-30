//
//  ReversePrintModified.cc
//  Homework1
//
//  Created by Eric Franco on 9/30/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//


#ifdef _WIN32
#define KEYS "^Z"

#elif __linux__
#define KEYS "^D"

#elif __APPLE__
#define KEYS "^B"

#endif


#include <iostream>
#include <string>
#include "Stack.cc"

using namespace std;


int main(){
    
    while (true){
        string s;
        cout << "\nEnter a string: ";
        cin >> s;
        if (s == KEYS){
            exit(1);
        }
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


