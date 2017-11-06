//
//  main.cpp
//  Lab 1 Assignment
//
//  Created by Leann Labelle on 2015-09-22.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <iostream>
#include "prime.hpp"

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned int value;
    cout << "This program determine whether an inputted integer is prime" << endl;
    cout << "Please enter an integer: " << endl;
    cin >> value;
    if (isPrime(value)) {
        cout << value << " is a prime" << endl;
    }else {
        cout << value << " is not a prime" << endl;
    }
}
