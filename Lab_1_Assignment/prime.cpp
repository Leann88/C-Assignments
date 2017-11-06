//
//  prime.cpp
//  Lab 1 Assignment
//
//  Created by Leann Labelle on 2015-09-22.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//
#include "prime.hpp"
bool isPrime(unsigned int val){
    if (val == 1) return 0; 
    if (val == 2) return 1; //2 is a prime number but would result in a mod of 0 when 2%2.
    if ((val & 0x1)!= 0){
        for ( int i = 3; i*i <= val; i += 2){
            if ((val % i) == 0) {
                return 0;
            }
        }
        return 1;
    }else { return 0; }
}