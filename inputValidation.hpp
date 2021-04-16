/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: The header file for inputValidation.cpp
*********************************************************************/


#ifndef CS162FINALPROJECT_INPUTVALIDATION_HPP
#define CS162FINALPROJECT_INPUTVALIDATION_HPP

#include <iostream>
#include <sstream>

using std::string;
using std::stringstream;
using std::cout;
using std::cin;
using std::endl;

// validate menu
int validateMenu();

// validate question
int validateQuestion();

// validate direction
int validateDirection();

// validate start
int validateStart();

// validate lyrics, store, parade
int validate2();

#endif