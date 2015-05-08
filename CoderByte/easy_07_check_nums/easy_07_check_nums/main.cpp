//
//  main.cpp
//  easy_07_check_nums
//
//  Created by heefan on 1/5/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//

/* ********************************************************************************************
 * Question
 * 
 * Have the function CheckNums(num1,num2)
 *   take both parameters being passed and return the string true if num2 is greater than num1,
 *   otherwise return the string false. 
 * 
 * If the parameter values are equal to each other then return the string -1.
 **********************************************************************************************/
 

#include <iostream>

using namespace std;

string CheckNums(int num1, int num2) {
    if ( num2 > num1 )
        return "true";
    else if ( num2 == num1)
        return "-1";
    else
        return "false";
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
