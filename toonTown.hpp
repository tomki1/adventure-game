/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Header file for toonTown.cpp. Derived class of the Land class.
*********************************************************************/

#ifndef CS162FINALPROJECT_TOONTOWN_HPP
#define CS162FINALPROJECT_TOONTOWN_HPP

#include "land.hpp"

class ToonTown: public Land {


private:

public:
    ToonTown();
    int landPlay();
    string obtainItem();


};


#endif