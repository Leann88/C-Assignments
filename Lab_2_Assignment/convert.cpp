//
//  convert.cpp
//  Lab Assignment 2
//
//  Created by Leann Labelle on 2015-09-29.
//  Copyright © 2015 Leann Labelle. All rights reserved.
//

#include <string>
#include <cstring>
#include <iostream>

#include "convert.hpp"

char* upConvert(const std::string& in){

    char *cString = new char[in.length()];
    strncpy(cString, in.c_str(), in.length());

    //Determine size of the array of all capital letters
    int sizeOfArray = 0;
    for( int i = 0; i < in.length(); i++){
        if (in[i] == ' ' || (in[i] >= 'A' && in[i] <= 'Z')||(in[i] >= 'a' && in[i] <= 'z')) {
            sizeOfArray++;
        }
    }
    char *upString = new char[sizeOfArray];
    char *ptr = upString;
    
    //Determine if value in array is a letter, if lowercase, capitalize it.
    int indexOfArray = 0;
    for( int i = 0; i < in.length(); i++){
        if (in[i] == ' ' || (in[i] >= 'A' && in[i] <= 'Z')) {
            ptr[indexOfArray] = in[i];
            indexOfArray++;
        } else if (in[i] >= 'a' && in[i] <= 'z'){
            ptr[indexOfArray]= in[i] - 32;
            indexOfArray++;
        }
    }
    delete []cString;
    return upString;
}

char* repeatConvert(const std::string& in, int r){
    
    char *cString = new char[in.length()];
    strncpy(cString, in.c_str(), in.length());
    
    //Determine size of the array with repeated vowels
    int sizeOfArray = 0;
    for (int i = 0; i < in.length(); i++){
        if (cString[i] == 'a' || cString[i] == 'A' || cString[i] == 'e' || cString[i] == 'E' || cString[i] == 'i' || cString[i] == 'I' || cString[i] =='o' || cString[i] == 'O' || cString[i] == 'u' || cString[i] == 'U') {
            sizeOfArray += r ;
        }else {
            sizeOfArray++;
        }
    }
    
    //Determine if letter is a vowel. If it is a vowel, add r amount of the in the array
    char *finalString = new char[sizeOfArray];
    char *ptr = finalString;
    for (int i = 0; i < in.length(); i++){
        if (cString[i] == 'a' || cString[i] == 'A' || cString[i] == 'e' || cString[i] == 'E' || cString[i] == 'i' || cString[i] == 'I' || cString[i] =='o' || cString[i] == 'O' || cString[i] == 'u' || cString[i] == 'U') {
            for (int j = 0; j < r; j++) {
                *ptr = cString[i];
                ptr++;
            }
        }else {
            *ptr = cString[i];
            ptr++;
        }
    }
    delete []cString;
    return finalString;
}
