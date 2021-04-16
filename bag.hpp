/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: The header file for bag.cpp.
*********************************************************************/

#ifndef CS162FINALPROJECT_BAG_HPP
#define CS162FINALPROJECT_BAG_HPP

#include "bagNode.hpp"

#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::endl;

class Bag {

private:
    BagNode *head;
    BagNode *tail;
    int itemCount;


public:
    Bag();
    ~Bag();
    bool isEmpty();
    string getFront();
    void addBack(string addItem); // source: Daniel Koning, https://oregonstate.instructure.com/courses/1674404/pages/code-sharing
    void removeFront();
    bool searchForItem(string itemMatch); // source: Daniel Koning, https://oregonstate.instructure.com/courses/1674404/pages/code-sharing
    void printBag();
    int increaseItemCount();
    int decreaseItemCount();
    int getItemCount();

};


#endif