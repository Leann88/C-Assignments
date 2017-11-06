//
//  readInput.cpp
//  Lab 0
//
//  Created by Leann Labelle on 2015-09-15.
//  Copyright (c) 2015 Leann Labelle. All rights reserved.
//

#include "readInput.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
/**
 * Input routines which reads into a growable array of integers.
 */
vector<int> readInput()
{
    vector<int> numbers;
    cout << "Please enter integers for array:" << endl;
    cout << "Press non integer to terminate" << endl;
    int inRead;
    do {
        // Read number from console using cin
        // Check for failure with if (cin.fail()) ...
        cin >> inRead;
        if (!cin.fail()) {
            numbers.push_back(inRead);
        }
        
        else {
            break;
        }
        
    } while ( true );
    return numbers;
}