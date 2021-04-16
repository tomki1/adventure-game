/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: The header file for bagNode.cpp. BagNode is a struct.
*********************************************************************/

#ifndef CS162FINALPROJECT_BAGNODE_HPP
#define CS162FINALPROJECT_BAGNODE_HPP

#include <string>

using std::string;

struct BagNode {
    BagNode *prev;
    BagNode *next;
    string item;
    BagNode(string itemName);


};


#endif