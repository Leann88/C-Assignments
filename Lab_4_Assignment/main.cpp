//
//  main.cpp
//  CSI2372 Lab 4
//
//  Created by Leann Labelle on 2015-10-13.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <iostream>
#include "room.hpp"
#include "item.hpp"
#include "meeting.hpp"


int main(int argc, const char * argv[]) {
    
    Room *A111 = new Room("A111");
    
    //Time(int d_year, int d_month, int d_day, int d_hour, int d_minutes);
    Time _time {2016, 8, 7, 9, 45};
    Time _time2 {2015, 11, 18, 16, 30};
    Time _time3 {2015, 10, 21, 12, 0};
    
    std::vector<std::string> _participants {"Leann","Ashley","Karen"};
    std::vector<std::string> _participants2 {"Marlene","Nicole","Chi"};
    std::vector<std::string> _participants3 {"Richard","Katherine","Becca"};
    
    Meeting meeting1 {true, _participants, "Convention Planning", _time, 60, 1};
    Meeting meeting2 {false, _participants2, "School Project", _time2, 75, 2};
    Meeting meeting3 {true, _participants3, "Video game session", _time3, 60, 3};
    Meeting meeting4 {false, _participants3, "More gaming", _time, 60, 4};
    Meeting meeting5 {true, _participants2, "School Project 2", _time2, 60, 1};
    
    Meeting getTogether {true, _participants, "Study Session", _time3, 90, 2};
    
    std::cout << "Meetings in room A111 after first meeting added: " << std::endl;
    A111->add(&meeting1);
    A111->print();
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;
    
    std::cout<< "Meetings in room A111 after second meeting added: " << std::endl;
    A111->add(&meeting2);
    A111->print();
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;
    
    std::cout<< "Meetings in room A111 after third meeting added: " << std::endl;
    A111->add(&meeting3);
    A111->print();
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;
    
    std::cout<< "Meetings in room A111 after fourth meeting added: " << std::endl;
    A111->add(&meeting4);
    A111->print();
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;

    std::cout<< "Meetings in room A111 after fifth meeting added: " << std::endl;
    A111->add(&meeting5);
    A111->print();
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;

    std::cout<< "Meetings in room B111 after getTogether added: " << std::endl;
    Room* B111 = new Room(*A111);
    B111->setName("B111");
    B111->add( &getTogether );
    B111->print();
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;
    
    std::cout<< "Meetings in room A111" << std::endl;
    A111->print();
    delete A111;
    std::cout << " - - - - - - - - - - - - - - - - - - - -- - - - - - - - - - - - - - " << std::endl;
    
    std::cout<< "Meetings in room B111 after A111 is deleted" << std::endl;
    B111->print();
    delete B111;
    
    return 0;
}