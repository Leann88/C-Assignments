//
//  showResult.cpp
//  Lab 0
//
//  Created by Leann Labelle on 2015-09-15.
//  Copyright (c) 2015 Leann Labelle. All rights reserved.
//

#include "showResult.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
/**
 * Routine which prints out the number array.
 */
void showResult( vector<int>& numbers ) {
    cout << "Printing the result to the console: " << endl;
    cout << "[";
    for (int i = 0; i < numbers.size(); i++ ) {
        cout << " " << numbers[i];
    }
    // for (int temp : numbers) {
    //}
    cout << " ]" << endl;
    return;
}