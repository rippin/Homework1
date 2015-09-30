//
//  KnotConversion.cc
//  Homework1
//
//  Created by Eric Franco on 9/29/15.
//  Copyright (c) 2015 Eric Franco. All rights reserved.
//


#include <iostream>
#include <string>


using namespace std;

double knotConversion(int knots);
bool isNumeric(string s);

int main(){
    string input;

    
    double val;
    
    while (true){
        cout << "Enter a numerical amount of Knots to convert to miles per minute.\n";
        cin >> input;
        //check if numerical or negative
        if (!isNumeric(input)){
            cout << "Characters were not numerical or are negative!\n";
            continue;
        }
        
        val = atoi(input.c_str());
    
        //convert
        val = knotConversion(val);
        break;
    }
    
                                
    
    cout << "Miles per minute of " << input << " Knots is " << val << " feet per minute." << endl;
    return 0;
}

double knotConversion(int knots){
    
    const int KNOT_FEET_PER_HOUR = 6076;
    const int MPH_FEET_PER_HOUR = 5280;
    const double MPH =  KNOT_FEET_PER_HOUR/MPH_FEET_PER_HOUR;
    const double MILES_PER_MINUTE = MPH/60;
    double total = MILES_PER_MINUTE * knots;
    
    return total;
    
}

bool isNumeric(string s){
    const char * c = s.c_str();
    for (int i = 0; i < strlen(s.c_str()); i++){
        if (!isdigit(c[i])){
            return false;
        }
    }
    
    return true;
}