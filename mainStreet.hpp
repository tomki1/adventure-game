/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Header file for mainStreet.cpp. Derived class of the Land class.
*********************************************************************/

#ifndef CS162FINALPROJECT_MAINSTREET_HPP
#define CS162FINALPROJECT_MAINSTREET_HPP


#include "land.hpp"



class MainStreet : public Land {

private:

public:
    MainStreet();
    int landPlay();
    string obtainItem();



};


#endif