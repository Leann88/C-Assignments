//
//  room.cpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include "room.hpp"

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

Room::Room(string _name){
    d_name = _name;
    d_nMeetings = 0;
    d_schedule = nullptr;
};

Room::Room(const Room &cRoom): d_name(cRoom.d_name),d_nMeetings(cRoom.d_nMeetings), d_schedule( cRoom.d_schedule ){}

void Room::setName(string _name){
    d_name = _name;
};
string Room::getName(){
    return d_name;
};

bool Room::add(Meeting* _meeting){
    Meeting **temp = new Meeting*[d_nMeetings+1];
    
    if (d_nMeetings == 0) {
        temp[d_nMeetings] = _meeting;
    } else {
        for (int i = 0; i < d_nMeetings; ++i) {
            temp[i] = d_schedule[i];
        }
        temp[d_nMeetings] = _meeting;
    }

    d_schedule = temp;
    temp = nullptr;
    delete temp;
    ++d_nMeetings;
    return true;
};

int Room::getNumMeetings(){
    return d_nMeetings;
};
void Room::print(){
    for (int i = 0; i < d_nMeetings; ++i) {
        d_schedule[i]->print();
        std::cout << "\n";
    }
};
