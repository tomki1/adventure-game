/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Header file for frontierLand.cpp. Derived class of the Land class.
*********************************************************************/

#ifndef CS162FINALPROJECT_FRONTIERLAND_HPP
#define CS162FINALPROJECT_FRONTIERLAND_HPP

#include "land.hpp"


class FrontierLand: public Land {

private:

public:
    FrontierLand();
    int landPlay();
    string obtainItem();


};


#endif