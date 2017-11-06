//
//  main.cpp
//  CS2372 Make-Up Assignment
//
//  Created by Leann Labelle on 2015-11-21.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <iostream>
#include "Time.hpp"
#include "WorkWeek.hpp"


int main(int argc, const char * argv[]) {
    Time t;
    t.print();
    cout<<endl;
    t.set(2,128);
    t.print();
    cout<<endl;
    WorkWeek w(3);
    w.addShift(2, 15, 120);
    w.addShift(24, 45, 25);
    w.addShift(5, 0, 25);
    w.addShift(6, 45, 125);
    w.addShift(24, 45, 25);
    cout << "Printing shifts in work array" << endl;
    w.print();
    
    
    cout << "Total number of hours worked:" << endl;
    Time t_total = w.getTotalHours();
    t_total.print();
    cout<<endl;
}
