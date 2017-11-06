//
//  item.cpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//


#include <string>
#include <iostream>
#include "item.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;

Time::Time(){
    d_year = 2015;
    d_month = 10;
    d_day = 20;
    d_hour = 8;
    d_minutes = 0;
};
Time::Time(int _year, int _month, int _day, int _hour, int _minutes){
    d_year = _year;
    d_month = _month;
    d_day = _day;
    d_hour = _hour;
    d_minutes = _minutes;
};

Item::Item(string _what, Time _deadline, int _duration, int _priority){
    d_what = _what;
    d_deadline = _deadline;
    d_duration = _duration;
    d_priority = _priority;
};

void Item::print(){

    cout << d_what << ": Deadline: " <<
    d_deadline.d_year << "/" << d_deadline.d_month << "/" << d_deadline.d_day <<
    " " << d_deadline.d_hour << ":";
    if(d_deadline.d_minutes < 10){
        cout << "0" << d_deadline.d_minutes;
    }else {
        cout << d_deadline.d_minutes;
    }
     cout << " Duration: " << d_duration << " Priority: " << d_priority << endl;
};

