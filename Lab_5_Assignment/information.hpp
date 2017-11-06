//
//  information.hpp
//  Assignment 5
//
//  Created by Leann Labelle on 2015-10-27.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef information_hpp
#define information_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "widget.hpp"
using namespace std;

using std::string;

class InformationWidget : public Widget {
    
private:
    string infoStr;
    int size;
    Direction direction;
    
public:
    InformationWidget(string info);
    bool move( Direction toMove );
    bool resize( int size );
    void show();
    Widget* clone();
};

#endif /* information_hpp */
