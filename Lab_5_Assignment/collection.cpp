//
//  collection.cpp
//  Assignment 5
//
//  Created by Leann Labelle on 2015-10-27.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include "collection.hpp"
#include "information.hpp"

CollectionWidget::CollectionWidget(){
    d_widgets = new Widget*[5];
    numElements = 0;
};

CollectionWidget::CollectionWidget(const CollectionWidget& colW) : numElements(colW.numElements)
{
    //deep copy the other rooms's meetings
    this ->d_widgets = new Widget*[5];
    for (int i = 0; i < numElements; i++) {
        // copy construct meetings
        d_widgets[i] = colW.d_widgets[i]->clone();
    }
}

CollectionWidget::~CollectionWidget() {
 //release the memory
    for (int i = 0; i < numElements; i++) {
        delete d_widgets[i];
    }
    //the array
    delete[] d_widgets;
}

bool CollectionWidget::remove( ){
    if (numElements == 0) {
        return false;
    }else{
        delete d_widgets[numElements-1];
        --numElements;
        return true;
    }
}

bool RowViewWidget::move( Direction toMove){
    if (numElements !=0){
         d_widgets[0]->move(toMove);   
    }
    return true;
}
bool RowViewWidget::resize( int size ){

    int remainder = size - numElements + 1; //account for a space between each infoStr
    int sizeOfWidget = 0;
    sizeOfWidget += remainder/numElements;
    remainder = remainder%numElements;
    try {
        if (sizeOfWidget != 0 ){
            for (int i = 0; i < numElements; i++) {
                if (remainder!=0) {
                    d_widgets[numElements - i - 1]->resize(sizeOfWidget + 1);
                    --remainder;
                }else{ d_widgets[numElements - i - 1]->resize(sizeOfWidget);}
            }
            row_size = size;
            return true;
        } else throw (size);
    } catch (int size) {
        std::cout << "Resizing to: " << size << " produces strings that are too small" << std::endl;
        return false;
    }
}

void RowViewWidget::show(){
    int numSpaces = numElements - 1;
    for (int i = 0; i < numElements; i++) {
        d_widgets[i] ->show();
        if ( numSpaces != 0 ){
            std::cout << '~';
            --numSpaces;
        }
    }
    std::cout << std::endl;
}

Widget* RowViewWidget::clone(){
    RowViewWidget *w = new RowViewWidget();
    w->move(direction);
    for (int i = 0; i < numElements; i++) {
        w->add(d_widgets[i]);
    }
    w->resize(row_size);
    return w;
}

bool RowViewWidget::add( Widget* w ) {
    if (numElements >= 5) {
        cout << "Cannot add another widget to array" << endl;
        return false;
    }
    d_widgets[numElements] = w->clone();
    numElements++;
    resize(row_size);
    return true;
}

