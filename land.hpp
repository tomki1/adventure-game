/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Header file for land.cpp. It is a parent class.
*********************************************************************/

#ifndef CS162FINALPROJECT_SPACE_HPP
#define CS162FINALPROJECT_SPACE_HPP

#include <string>
#include<iostream>

#include "inputValidation.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Land {
protected:
    Land *top;
    Land *bottom;
    Land *left;
    Land *right;
    string name;

public:
    Land();
    virtual int landPlay() = 0;
    virtual string obtainItem() = 0;
    ~Land();
    string getName();
    Land *getTop();
    Land *getBottom();
    Land *getLeft();
    Land *getRight();
    void setTop(Land *place);
    void setBottom(Land *place);
    void setLeft(Land *place);
    void setRight(Land *place);


};


#endif