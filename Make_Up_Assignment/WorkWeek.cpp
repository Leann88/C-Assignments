//
//  WorkWeek.cpp
//  CS2372 Make-Up Assignment
//
//  Created by Leann Labelle on 2015-11-21.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include "WorkWeek.hpp"

WorkWeek::WorkWeek(int _arrayLength){
    d_start=new Time[_arrayLength];
    d_end = new Time[_arrayLength];
    d_arrayLength = _arrayLength;

} // Part 2.a

WorkWeek::WorkWeek(const WorkWeek& _w){
    d_arrayLength = _w.d_arrayLength;
    d_start =new Time[_w.d_arrayLength];
    d_end = new Time[_w.d_arrayLength];
    for (int i = 0; i < _w.d_index; i++) {
        d_start[i] = _w.d_start[i];
        d_end[i] = _w.d_end[i];
        d_index++;
    }

} // Part 2.b

WorkWeek::~WorkWeek(){
    delete d_start;
    delete d_end;
} // Part 2.c

void WorkWeek::print() const{
    for (int i =0; i < d_index; i++) {
        d_start[i].print();
        cout << " to ";
        d_end[i].print();
        cout << endl;
    }

} // Part 2.d

Time WorkWeek::getTotalHours() const{
    Time t;
    int duration = 0;
    unsigned char start_hour = 0;
    unsigned char start_min = 0;
    unsigned char end_hour = 0;
    unsigned char end_min = 0;

    for (int i = 0; i < d_index; i++) {
        d_start[i].get(start_hour, start_min);
        d_end[i].get(end_hour, end_min);
        //Assumes end_hour will not equal start_hour and end_hour is always larger
        duration = duration + (end_hour - start_hour) * 60 + (end_min - start_min);
    }
    t.set(duration / 60, duration % 60);
    return t;
} // Part 2.e

void WorkWeek::addShift(unsigned char _hour,unsigned char _minutes, unsigned int _duration){
    if (d_arrayLength == d_index) {
        d_arrayLength = d_arrayLength * 2;
        Time *nd_start = new Time[d_arrayLength];
        Time *nd_end = new Time[d_arrayLength];
        for (int i = 0; i < d_index; i++) {
            nd_start[i] = d_start[i];
            nd_end[i] = d_end[i];
        }
        delete d_start;
        delete d_end;
        d_start = nd_start;
        d_end = nd_end;
        
    }
    unsigned char end_hour = _hour + (_minutes +_duration) / 60;
    unsigned char end_minutes = (_minutes + _duration) % 60;
    Time start(_hour, _minutes);
    Time end(end_hour, end_minutes);
    d_start[d_index] = start;
    d_end[d_index] = end;
    d_index++;
    
}


