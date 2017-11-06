//
//  bike.hpp
//  CSI2372 Assignment 3
//
//  Created by Leann Labelle on 2015-10-06.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef bike_hpp
#define bike_hpp

#include <stdio.h>
#include <string>

using std::string;

typedef struct Color{
    float red, green, blue;
    Color();
    Color(float r, float g , float b);
} Color;

class Bike {

private:
    string d_owner;
    Color d_color;
    int d_nLight;
    bool d_bell;
    bool d_reflector;
    
public:
    Bike();
    Bike(string owner_name, Color bike_color);
    void setNLight(int nLight);
    int getNLight();
    void setBell(bool bell);
    bool hasBell();
    void setReflector(bool reflector);
    bool hasReflector();
    void setOwner(string owner);
    string getOwner();
    bool isLegal();
    void print();
};

#endif /* bike_hpp */
