//
//  collection.hpp
//  Assignment 5
//
//  Created by Leann Labelle on 2015-10-27.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#ifndef collection_hpp
#define collection_hpp

#include <stdio.h>
#include "widget.hpp"
//
class CollectionWidget : public Widget {

protected:
    
    Widget **d_widgets;
    int numElements;

public:
    
    CollectionWidget();
    CollectionWidget(const CollectionWidget& colW);
    virtual bool add( Widget* w ) = 0;
    bool remove();
    
    //destructor
    ~CollectionWidget();
};

class RowViewWidget : public CollectionWidget {
    
    int row_size = 50;
    Direction direction = LEFT;

public:
    bool move( Direction toMove);
    bool resize( int size );
    bool add( Widget* w );
    void show();
    Widget* clone();
};

#endif /* collection_hpp */
