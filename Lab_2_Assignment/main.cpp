//
//  main.cpp
//  Lab Assignment 2
//
//  Created by Leann Labelle on 2015-09-29.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <string>
#include <cstring>
#include <iostream>
#include "convert.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string phrase;
    int numVowels;
    cout << "Please enter a phrase" << endl;
    getline(cin, phrase);
    cout << "Please enter a value for the number of repeated vowels" << endl;
    cin >> numVowels;
    cout << "Original string: " << phrase << endl;
    char* upper = upConvert(phrase);
    char* addedVowels = repeatConvert(phrase, numVowels);
    cout << "Uppercase string: " << upper << endl;
    cout << "String with "<< numVowels << ": " << addedVowels << endl;
}
