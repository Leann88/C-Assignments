//
//  simpleSort.cpp
//  Lab 0
//
//  Created by Leann Labelle on 2015-09-15.
//  Copyright (c) 2015 Leann Labelle. All rights reserved.
//

#include "simpleSort.h"
#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
/**
 * Simple O(n^2) sort - bad
 */
void simpleSort( vector<int>& numbers ) {
    // Using & means "pass by reference" (the Java way)
    for (int i = 0; i < numbers.size(); i++) {
        for(int j = i + 1; j < numbers.size(); j++){
            if (numbers[j] < numbers[i]){
                int hold = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = hold;
            }
        }
    }
    
}