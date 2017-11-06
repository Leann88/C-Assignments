//
//  information.cpp
//  Assignment 5
//
//  Created by Leann Labelle on 2015-10-27.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include "information.hpp"

InformationWidget::InformationWidget(string info){
    try {
        if ((int)info.size() <= 50){
            infoStr = info;
            size = 50;
            direction = LEFT;
        } else throw (info);
    } catch (string info) {
        cout << "Information string: " << info << " is too big. It has " <<
        info.size() << " characters" << endl;
    }
}
bool InformationWidget::move(Direction toMove){
    
    direction = toMove;
    return true;
}

bool InformationWidget::resize( int size ){
    if (size > 50){
        cout << "Console is only 50 characters wide" << endl;
        return false;
    }else{
        this->size = size;
        return true;
    }

}

void InformationWidget::show(){
    if (direction == LEFT) {
        cout << string(infoStr.substr(0, size));
    }else {
        cout << string(max(size - (int) infoStr.size(), 50 - size), '~') <<
        infoStr.substr(0, size);
    }
};

Widget* InformationWidget::clone(){
    Widget *w = new InformationWidget(infoStr);
    w->move(direction);
    w->resize(size);
    return w;
}