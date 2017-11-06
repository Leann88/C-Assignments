//
//  widget.h
//  Assignment 5
//
//  Created by Leann Labelle on 2015-10-27.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef widget_h
#define widget_h

enum Direction
{
    LEFT,
    RIGHT
};

class Widget {

public:
    virtual bool move( Direction toMove) = 0;
    virtual bool resize( int size ) = 0;
    virtual void show() = 0;
    virtual Widget* clone() = 0;
};
#endif /* widget_h */
