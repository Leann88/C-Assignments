//
//  meeting.hpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef meeting_hpp
#define meeting_hpp

#include <stdio.h>
#include <vector>
#include <string>

#include "item.hpp"

using std::string;
using std::vector;


class Meeting: public Item {
    
protected:
    bool d_coffee;
    vector < string > d_participants;
    
public:
    Meeting(bool coffee, std::vector<std::string> _participants, string _what, Time _deadline, int _duration, int _priority);
    void print();

};
#endif /* meeting_hpp */
