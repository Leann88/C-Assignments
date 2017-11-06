//
//  meeting.cpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include "meeting.hpp"


Meeting::Meeting(bool coffee, std::vector<std::string> _participants, string _what, Time _deadline, int _duration, int _priority):
Item(_what, _deadline, _duration, _priority), d_coffee(coffee), d_participants(_participants){}

void Meeting::print(){
    Item::print();
};