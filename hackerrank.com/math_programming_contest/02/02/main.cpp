//
//  main.cpp
//  02
//
//  Created by heefan on 8/5/15.
//  Copyright (c) 2015 Wild Pointer. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    int min_time = 0;
    for (int  i = 1; i < 100; ++i) {
        if (i * (i+1) - 200 > 0) {
            min_time = i;
            break;
        }
    }
    
    cout << "You need drop " << min_time << " times at least for worst case" << endl;
    
    return 0;
}
