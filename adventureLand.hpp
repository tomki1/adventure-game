/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Header file for adventureLand.cpp. Derived class of the Land class.
*********************************************************************/

#ifndef CS162FINALPROJECT_ADVENTURELAND_HPP
#define CS162FINALPROJECT_ADVENTURELAND_HPP

#include "land.hpp"

class AdventureLand: public Land {

private:

public:
    AdventureLand();
    int landPlay();
    string obtainItem();



};


#endif