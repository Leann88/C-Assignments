//
//  main.cpp
//  Assignment 5
//
//  Created by Leann Labelle on 2015-10-27.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <iostream>
#include "information.hpp"
#include "collection.hpp"
#include "widget.hpp"

using namespace std;

void nestIt( RowViewWidget r) {
    RowViewWidget *rVW2 = new RowViewWidget();
    InformationWidget *info7 = new InformationWidget("Royals");
    InformationWidget *info8 = new InformationWidget("American League Conference Series");
    rVW2->add(info7);
    rVW2->add(info8);
    r.add(rVW2);
    cout << "Row view widget after nestIt called" << endl;
    r.show();
}

int main() {
    RowViewWidget rTest;
    RowViewWidget bTest;
    InformationWidget *test2 = new InformationWidget("Hello World");
    InformationWidget *test3 = new InformationWidget("Ottawa");
    
    bTest.add(test2);
    bTest.add(test3);
    bTest.resize(13);
    bTest.show();
    cout<<endl;
    
    bTest.resize(14);
    bTest.move(RIGHT);
    bTest.show();
    cout<<endl;
    
    InformationWidget *info = new InformationWidget("Blue Jays");
    InformationWidget *info2 = new InformationWidget("Texas Rangers");
    InformationWidget *info3 = new InformationWidget("Game 5");
    InformationWidget *info4 = new InformationWidget("thriller");
    InformationWidget *info5 = new InformationWidget("play");
    InformationWidget *info6 = new InformationWidget("7th inning");
    RowViewWidget rVW;
    rVW.add(info);
    cout << "Row view widget after Blue Jays added" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    rVW.add(info2);
    cout << "Row view widget after Texas Rangers added" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    rVW.add(info3);
    cout << "Row view widget after Game 5 added" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    rVW.add(info4);
    cout << "Row view widget after thriller added" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    rVW.add(info5);
    cout << "Row view widget after play added" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    rVW.add(info6);
    cout << "Row view widget after 7th inning added" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;

    rVW.remove();
    cout << "Row view widget after 1st removal" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    rVW.remove();
    cout << "Row view widget after 2nd removal" << endl;
    rVW.show();
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    
    nestIt(rVW);

}
