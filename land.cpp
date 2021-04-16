/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: Holds the land functions.
*********************************************************************/

#include "land.hpp"

// default constructor
Land::Land() {

}

// destructor
Land::~Land() {

}

// return land name
string Land::getName() {
    return name;
}

// returns top
Land *Land::getTop() {
    return top;
}

// returns bottom
Land *Land::getBottom() {
    return bottom;
}

// returns left
Land *Land::getLeft() {
    return left;
}

// returns right
Land *Land::getRight() {
    return right;
}


// sets top land
void Land::setTop(Land *place) {
    top = place;
}

// sets bottom land
void Land::setBottom(Land *place) {
    bottom = place;
}

// sets left land
void Land::setLeft(Land *place) {
    left = place;
}

// sets right land
void Land::setRight(Land *place) {
    right = place;
}



