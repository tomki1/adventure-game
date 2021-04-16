/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: The header file for simulation.cpp.
*********************************************************************/

#ifndef CS162FINALPROJECT_SIMULATION_HPP
#define CS162FINALPROJECT_SIMULATION_HPP


#include "land.hpp"
#include "bag.hpp"
#include "inputValidation.hpp"
#include "menu.hpp"

class Simulation {

private:
    int mileCount;
    Land *user;
    bool win;
    Bag backpack;

public:
    Simulation();
    ~Simulation();
    void startSimulation();
    void printMap(Land *spaceObj);

};


#endif