//
//  bike.cpp
//  CSI2372 Assignment 3
//
//  Created by Leann Labelle on 2015-10-06.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <string>
#include <iostream>
#include "bike.hpp"

using std::string;
using std::cout;
using std::cin;
using std::endl;



Color::Color(){
    red = 0;
    green = 0;
    blue = 0;
};
Color::Color(float r, float g , float b){
        red = r;
        green = g;
        blue = b;
    };


Bike::Bike(){
    d_owner = "None";
    d_nLight = 0;
    d_bell = false;
    d_reflector = false;
};

Bike::Bike(string owner_name, Color bike_color){
    
    d_owner = owner_name;
    d_nLight = 0;
    d_bell = false;
    d_reflector = false;
    d_color = bike_color;
};

void Bike::setNLight(int nLight){
    d_nLight = nLight;
};

int Bike::getNLight(){
    return d_nLight;
};

void Bike::setBell(bool bell){
    d_bell = bell;
};

bool Bike::hasBell(){
    return d_bell;
};

void Bike::setReflector(bool reflector){
    d_reflector = reflector;
};

bool Bike::hasReflector(){
    return d_reflector;
};

void Bike::setOwner(string owner){
    d_owner = owner;
};

string Bike::getOwner(){
    return d_owner;
};

bool Bike::isLegal(){
    return (d_nLight >= 1 && d_reflector && d_bell);
};

void Bike::print(){
    cout << "Bike Owner: " << d_owner
    << " Color (rgb):  " << d_color.red << " " << d_color.green << " " << d_color.blue
    << " Lights: " << d_nLight
    << " Bell: " << (d_bell ? "yes Reflector: " : "no Reflector: ")
    << (d_reflector ? "yes" : "no") << endl;
};