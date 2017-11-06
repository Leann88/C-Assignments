//
//  item.hpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef item_hpp
#define item_hpp

#include <stdio.h>
#include <string>

using std::string;

typedef struct Time{
    int d_year, d_month, d_day, d_hour, d_minutes;
    Time();
    Time(int _year, int _month, int _day, int _hour, int _minutes);
} Time;

class Item {

protected:
    string d_what;
    Time d_deadline;
    int d_duration;
    int d_priority;
    
public:
    Item( string _what, Time _deadline, int _duration, int _priority);
    void print();
};

#endif /* item_hpp */
