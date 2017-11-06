//
//  main.cpp
//  CSI2372 Assignment 3
//
//  Created by Leann Labelle on 2015-10-06.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <iostream>
#include "bike.hpp"
#include "bike_shed.hpp"


int main() {
    Bike_Shed new_shed;
    Color c1(4.5, 6.0 ,7.1);
    Color c2(0.0, 0.0, 0.0);
    Color c3(0.0, 8.4 ,2.0);
    Bike john_bike("John", c1);
    Bike jane_bike("Jane", c3);
    Bike sean_bike("Sean", c2);
    Bike andrea_bike("Andrea", c1);
    Bike peter_bike("Peter", c3);
    Bike mohammed_bike("Mohammed", c1);
    Bike hong_bike("Hong", c2);
    
    john_bike.setBell(true);
    john_bike.setNLight(3);
    
    jane_bike.setBell(true);
    jane_bike.setReflector(true);
    jane_bike.setNLight(2);
    
    sean_bike.setBell(true);
    sean_bike.setReflector(true);
    sean_bike.setNLight(4);
    
    andrea_bike.setBell(true);
    
    peter_bike.setBell(true);
    peter_bike.setReflector(true);
    
    mohammed_bike.setBell(true);
    mohammed_bike.setReflector(true);
    mohammed_bike.setNLight(15);
    
    hong_bike.setBell(true);
    hong_bike.setReflector(true);
    hong_bike.setNLight(150);
    
    new_shed.park(john_bike);
    std::cout << "Bikes in shed after John parks:" << std::endl;
    new_shed.print();
    
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    new_shed.park(jane_bike);
    std::cout << "Bikes in shed after Jane parks:" << std::endl;
    new_shed.print();

    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    new_shed.park(sean_bike);
    std::cout << "Bikes in shed after Sean parks:" << std::endl;
    new_shed.print();
    
    
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    new_shed.park(andrea_bike);
    std::cout << "Bikes in shed after Andrea parks:" << std::endl;
    new_shed.print();
 
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    new_shed.park(peter_bike);
    std::cout << "Bikes in shed after Peter parks:" << std::endl;
    new_shed.print();
    
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    std::cout << "Illegal bikes:" << std::endl;
    new_shed.checkLegal();
    
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    std::cout << "Removing bikes:" << std::endl;
    
    new_shed.remove("Peter", 3).print();
    std::cout << "Bikes in shed after Peter's bike is removed:" << std::endl;
    new_shed.print();
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;

    
    new_shed.remove("John", 3).print();
    std::cout << "Bikes in shed after John's bike is removed:" << std::endl;
    new_shed.print();
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    
    new_shed.remove("Andrea", 3).print();
    std::cout << "Bikes in shed after Andrea's bike is removed:" << std::endl;
    new_shed.print();
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
  
    new_shed.park(mohammed_bike);
    std::cout << "Bikes in shed after Mohammed parks:" << std::endl;
    new_shed.print();
    
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    new_shed.park(hong_bike);
    std::cout << "Bikes in shed after Hong parks:" << std::endl;
    new_shed.print();
    
    std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
    std::cout << "Remaining bikes:" << std::endl;
    new_shed.print();
    
}
