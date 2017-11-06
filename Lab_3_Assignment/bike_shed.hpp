//
//  bike_shed.hpp
//  CSI2372 Assignment 3
//
//  Created by Leann Labelle on 2015-10-06.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef bike_shed_hpp
#define bike_shed_hpp

#include <stdio.h>
#include <string>
#include "bike.hpp"

class Bike_Shed {
    
    Bike bikes_in_shed[10]{{}};
    
public:
    
//    Use the default constructor supplied by the compiler
//    Bike_Shed();
    bool park( const Bike& _bike);
    Bike remove( const string& _name, int _number);
    bool checkLegal();
    void print( );

};


#endif /* bike_shed_hpp */
