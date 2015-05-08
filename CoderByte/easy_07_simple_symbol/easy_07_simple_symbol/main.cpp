//
//  main.cpp
//  easy_07_simple_symbol
//
//  Created by heefan on 1/5/15.
//  Copyright (c) 2015 heefan. All rights reserved.
//

//#include <iostream>
//
//using namespace std;
//
//bool isLetter(char c) {
//    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
//}
//
//
//string simpleSymbol (string str) {
//    char * p = const_cast<char*>(str.c_str());
//    
//    bool result = false;
//    
//    if (*p != '+')
//        return "false";
//
//    for (int i = 1; i < str.length(); ++i) {
//        if (isLetter( p[i] )) {
//            cout << "i: " << i << endl;
//            if ( i + 1 <= str.length() ) {
//                if (p[i - 1] == '+' && p[i + 1] == '+') {
//                    result = true;
//                } else {
//                    return "false";
//                }
//            }
//        }
//    }
//    
//    if (result)
//        return "true";
//    else
//        return "false";
//}
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    cout << simpleSymbol("+d===+a+") << endl;
//    return 0;
//}


#include <iostream>
using namespace std;

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}


string SimpleSymbols (string str) {
    char * p = const_cast<char*>(str.c_str());

    bool result = false;

    if (*p != '+')
        return "false";

    for (int i = 1; i < str.length(); ++i) {
        if (isLetter( p[i] )) {
            cout << "i: " << i << endl;
            if ( i + 1 <= str.length() ) {
                if (p[i - 1] == '+' && p[i + 1] == '+') {
                    result = true;
                } else {
                    return "false";
                }
            }
        }
    }

    if (result)
        return "true";
    else
        return "false";
}

//string SimpleSymbols(string str) {
//    
//    if(str.length() < 3)
//        return "false";
//    
//    if(isalpha(*(str.begin())) || isalpha(*(str.end()-1)))
//        return "false";
//    
//    for(string::iterator i = str.begin()+1; i != str.end() - 1; i++){
//        if(isalpha(*i)){
//            if(*(i-1) != '+' || *(i+1) != '+')
//                return "false";
//        }
//    }
//    
//    return "true"; 
//    
//}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << SimpleSymbols("+z+z+==+a+") << endl;
    return 0;
}
