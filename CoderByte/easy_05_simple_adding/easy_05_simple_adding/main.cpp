//
//  main.cpp
//  easy_05_simple_adding
//
//  Created by heefan on 1/5/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//

#include <iostream>
using namespace std;

int SimpleAdding( int num) {
    
    if (num < 1 || num > 1000) {
        printf("Give num : %d over range, [1,1000]\n", num);
        return -1;
    }
    
    int sum = 0;
    for (int i = 0; i <= num; ++i) {
        sum += i;
    }
    
    return sum;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << SimpleAdding(5) << endl;
    return 0;
}
