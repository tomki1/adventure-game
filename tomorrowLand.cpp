/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: tomorrowLand.cpp holds the tomorrowLand functions.
*********************************************************************/

#include "tomorrowLand.hpp"

// default constructor sets name
TomorrowLand::TomorrowLand() {
    name = "Tomorrowland";
}

// landPlay function
int TomorrowLand::landPlay() {

    cout << endl;
    cout << "You are in Tomorrowland." << endl;
    cout << endl;

    int choice = 0;

    cout << "You walk into a store. Do you want to buy a Mickey Plush?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Choice: " << endl;
    choice = validateMenu();

    switch (choice) {

        // user wants to obtain item
        case 1: {
            int selection = 0;
            cout << "You get in line to buy a Mickey Plush.  A mean kid takes it from your hands." << endl;
            cout << "You try to steal it back but the kid starts crying. Their body builder dad comes" << endl;
            cout << "over and says 'Are you bothering my kid?' and wants to start a fight." << endl;
            cout << endl;
            cout << "What do you do next?" << endl;
            cout << "1. Beg for the plush toy back." << endl;
            cout << "2. Walk away and get another plush from the shelf." << endl;
            cout << "Choice: " << endl;
            selection = validate2();

            // user gets item by answering correctly
            if (selection == 1) {
                cout << "You cry and beg for the Mickey Plush and the kid hands you the toy. Way to go!" << endl;
                return 1;
            }

            // no item because user answers incorrectly
            else {
                cout << "You walk back to the shelf and see that there are no more Mickey plushies. Bummer!" << endl;
                cout << "A worker informs you that they will restock shortly if you come back again later." << endl;
                return 2;
            }
        }

        // user does not want to obtain item
        case 2: {
            cout << "You do not want to buy a Mickey Plush." << endl;
            return 2;
        }
    }
}

// obtain Mickey Plush
string TomorrowLand::obtainItem() {
    return "Mickey Plush";
}

