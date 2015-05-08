//
//  main.cpp
//  easy_06_letter_capitalize
//
//  Created by heefan on 1/5/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//

#include <iostream>

using namespace std;

string LetterCapitalize(string str) {

    char * p = const_cast<char*>(str.c_str());
    
    // split str by delimiters "space"
    char * pFirstLetter = p;
    bool isSpace = false;
    for (int i=0; i <= str.length() - 1; ++i) {
        
        if (isSpace) {
            pFirstLetter = p;
            isSpace = false;
        }
        
        if (*p == ' ' || i == str.length() - 1 ) {
            if (*pFirstLetter >= 'a' && *pFirstLetter <= 'z') {
                *pFirstLetter -= 32;
            }
            isSpace = true;
        }
        p++;
    }
    
    return str;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << LetterCapitalize("hello world 2341234sdfs d341sadf") << endl;
    return 0;
}
