//
//  Time.hpp
//  CS2372 Make-Up Assignment
//
//  Created by Leann Labelle on 2015-11-21.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef Time_hpp
#define Time_hpp

#include <iostream>
#include <stdio.h>
using namespace std;

class Time {
    unsigned char d_hour = 0;
    unsigned char d_minutes = 0;
public:
    // complete the following class functions
    // a) Default constructor, initialize the Time object
    // to 00 hrs 00 mins 0.5
    inline Time(){
        d_hour = 0;
        d_minutes = 0;
    }
    // b) Constructor with hours and minutes 0.5
    inline Time(unsigned char _hour, unsigned char _minutes){
        d_hour = _hour + _minutes / 60;
        d_minutes = _minutes % 60;
    }
    // c) Getter returning the hours and minutes of this time
    // object through the references 0.5
    inline void get(unsigned char& _hour,
                    unsigned char& _minutes) const{
        _hour = d_hour;
        _minutes = d_minutes;
    }
    
    // d) Setter to change the hours and minutes of this time
    // object. The method must take care of overflow of minutes
    // (0…59) 1
    inline void set(unsigned char _hour, unsigned char _minutes){
        d_hour = _hour + _minutes / 60;
        d_minutes = _minutes % 60;
    }
    
    // Print to console
    inline void print() const {
        cout << static_cast<int>(d_hour) << ":" <<
        static_cast<int>(d_minutes);
    }
};

#endif /* Time_hpp */
