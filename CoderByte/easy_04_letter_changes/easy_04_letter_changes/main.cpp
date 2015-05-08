//
//  main.cpp
//  easy_04_letter_changes
//
//  Created by heefan on 30/4/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//

#include <iostream>

using namespace std;

string solution(string str) {
    for (string::iterator i = str.begin(); i != str.end(); ++i) {
        if ( (*i >= 'a' && *i <= 'z')
            || (*i >= 'A' && *i <= 'Z'))
        {
            if (*i == 'z') {
                *i = 'a';
            } else {
                (*i) ++;
            }
        }
        switch (*i) {
            case 'a':
                *i = 'A';
                break;
            case 'e':
                *i = 'E';
                break;
            case 'i':
                *i = 'I';
                break;
            case 'o':
                *i = 'O';
                break;
            case 'u':
                *i = 'U';
                break;
            default:
                break;
        }
    }
    
    return str;
}

int main(int argc, const char * argv[]) {

//    string input;
//    getline(cin, input);
    cout << solution("oxford") << endl;
    return 0;
}
