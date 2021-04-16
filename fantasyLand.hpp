/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Header file for fantasyLand.cpp. Derived class of the Land class.
*********************************************************************/

#ifndef CS162FINALPROJECT_FANTASYLAND_HPP
#define CS162FINALPROJECT_FANTASYLAND_HPP

#include "land.hpp"

class FantasyLand: public Land {

private:

public:
    FantasyLand();
    int landPlay();
    string obtainItem();


};


#endif