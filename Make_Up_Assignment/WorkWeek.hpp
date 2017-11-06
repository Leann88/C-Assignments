//
//  WorkWeek.hpp
//  CS2372 Make-Up Assignment
//
//  Created by Leann Labelle on 2015-11-21.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef WorkWeek_hpp
#define WorkWeek_hpp

#include <iostream>
#include <stdio.h>
#include "Time.hpp"

using namespace std;

class WorkWeek {
    Time *d_start;
    Time *d_end;
    int d_arrayLength;
    int d_index = 0; // next available index to add a shift
public:
    WorkWeek(int _arrayLength); // Part 2.a
    WorkWeek(const WorkWeek& _w); // Part 2.b
    ~WorkWeek(); // Part 2.c
    void print() const; // Part 2.d
    Time getTotalHours() const; // Part 2.e
    void addShift(unsigned char _hour,
                  unsigned char _minutes, unsigned int _duration);
    // Part 2.f
};

#endif /* WorkWeek_hpp */
