//
//  room.hpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef room_hpp
#define room_hpp

#include <stdio.h>
#include <vector>
#include <string>

#include "meeting.hpp"

using std::string;
using std::vector;


class Room {
    //Objects constructs (and destructs) the objects which it owns
    string d_name;
    Meeting** d_schedule;
    int d_nMeetings;
    
    
public:
    
    Room(string _name);
    Room(const Room &cRoom);
    void setName(string _name);
    string getName();
    bool add(Meeting* _meeting);
    int getNumMeetings();
    void print();
    
    //destructor needed due to rule of 3
    ~Room(){delete d_schedule;}
    
};

#endif /* room_hpp */
