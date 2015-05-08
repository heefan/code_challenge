//
//  main.cpp
//  easy_08_time_convert
//
//  Created by heefan on 1/5/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//


/* ***************************************************************
 Question
 
 Have the function TimeConvert(num) 
    take the num parameter being passed 
    and return the number of hours and minutes the parameter converts to 
    (ie. if num = 63 then the output should be 1:3). 
 Separate the number of hours and minutes with a colon.
 
 ***************************************************************/
 
#include <iostream>
#include <sstream>

using namespace std;

string TimeConvert(int num) {
    
    int min = num % 60;
    int hours = int(num / 60);
  
//    string minString = std::to_string(min);
//    string hourString = std::to_string(hours);
    
//    char minString[32];
//    itoa(min, minString);
    
    stringstream ss1, ss2;
    ss1 << min;
    string minString = ss1.str();
    
    ss2 << hours;
    string hourString = ss2.str();
    
    
    
    return hourString + ":" + string(minString);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << TimeConvert(100) << endl;
    return 0;
}
