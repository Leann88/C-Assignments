//
//  bike_shed.cpp
//  CSI2372 Assignment 3
//
//  Created by Leann Labelle on 2015-10-06.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <iostream>
#include "bike_shed.hpp"

bool Bike_Shed::park( const Bike& _bike){

    for (int i = 0; i < 10; i++) {
        if (bikes_in_shed[i].getOwner() == "None") {
            bikes_in_shed[i] = _bike;
            return true;
        }
    }
    return false;
};

Bike Bike_Shed::remove( const string& _name, int _number){
    bool found = false;
    Bike removed_bike;
    for (int i = 0; i < 10 && !found; i++) {
        if (bikes_in_shed[i].getOwner() == _name) {
            removed_bike = bikes_in_shed[i];
            bikes_in_shed[i] = Bike();
            found = true;
        }
    }
    return removed_bike;
};

bool Bike_Shed::checkLegal(){
    
    for (int i = 0; i < 10; i++) {
        if (bikes_in_shed[i].getOwner() != "None") {
            if(!bikes_in_shed[i].isLegal()){
                bikes_in_shed[i].print();
            }
        }
    }
    return true;
};

void Bike_Shed::print( ){
    
    for (int i = 0; i < 10; i++) {
        if (bikes_in_shed[i].getOwner() != "None") {
            bikes_in_shed[i].print();
        }
    }
};

