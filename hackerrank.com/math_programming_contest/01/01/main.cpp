//
//  main.cpp
//  01
//
//  Created by heefan on 7/5/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[])
{
    size_t num_of_balls = 0;
    size_t num_of_test_cases = 0;
    size_t ball_id = 0;
    
#define FATAL_ARG(fmt, ...) do { \
    printf("[x]:%d -> " fmt "try again !", __LINE__, __VA_ARGS__); \
    return -1; \
} while (0);
    
#define FATAL_MSG(message) do { \
    printf("[x]:%d -> " message ",try again !", __LINE__); \
    return -1; \
} while (0);
    
    cout << "[system]: how many test cases will you do: ";
    
    if (cin >> num_of_test_cases) {
        if (0 == num_of_test_cases ) {
            FATAL_MSG("no test required");
        } else if (num_of_test_cases > 50) {
            FATAL_MSG("tests range should be [1, 50]");
        }
    } else {
        FATAL_MSG("please input positve number");
    }
    
    cout << "----------------" << endl;
    cout << "Test Cases: " << num_of_test_cases << endl;
    cout << "----------------" << endl;
    
    for (size_t testCount = 0; testCount < num_of_test_cases; ++testCount )
    {
        cout << "\n+++++++++++++++++++++++++++" << endl;
        cout << "     TEST CASE  "<<  testCount + 1 << endl;
        cout << "+++++++++++++++++++++++++++\n";
        cout << "[system]: Please input number of balls : ";

        
        if (cin >> num_of_balls) {
            
            if (0 == num_of_balls) {
                FATAL_MSG("Please input positive number");
            } else {
                cout << "--------------------" << endl;
                cout << "Number of Balls: " << num_of_balls << endl;
                cout << "--------------------\n\n";
                
                cout << "[system]: Please input which ball will you look for? ";
            }
        } else {
            FATAL_MSG("Please input positive number");
        }
        
        if (cin >> ball_id) {
            if (ball_id > num_of_balls) {
                ostringstream oss;
                oss << "[x] : the ball id should not over" << num_of_balls << "\n";
                FATAL_ARG("%s", oss.str().c_str());
            } else {
                cout << "------------------" << endl;
                cout << "ball id to find: " << ball_id << endl;
                cout << "------------------" << endl;
            }
        } else {
            FATAL_MSG("Please input positive number");
        }
        
#undef INVALID_CIN
        
        
        vector<size_t> balls, balls_even, balls_odd;
        
        size_t odd_count = 0;
        if (0 != num_of_balls % 2) {
            odd_count = num_of_balls / 2 + 1;
        } else {
            odd_count = num_of_balls / 2;
        }
        
        for (size_t i = 0; i < odd_count; ++i) {
            size_t tmp = num_of_balls - 1;
            balls_odd.push_back(tmp - i);
        }
        
        for (size_t i = 0; i < num_of_balls - odd_count; ++i) {
            balls_even.push_back(i);
        }
        
        cout << "\nResult: " <<endl;
        cout << "The balls after reversing : [";
        for (size_t i = 0; i < num_of_balls; ++i) {
            if ( i < balls_odd.size()) {
                cout << balls_odd[i] << " ";
            }
            
            if ( i < balls_even.size()) {
                cout << balls_even[i] << " ";
            }
        }
        cout << "]" << endl;
        
        size_t index = 0;
        
        if (ball_id >= balls_odd.back()) {
            index = 2 * (num_of_balls - 1 - ball_id);
        } else {
            index = 1 + 2 * ball_id;
        }
        
        cout << "The index of \"" << ball_id << "\" after reversing is :  " << index << endl;
    }
    return 0;
}

