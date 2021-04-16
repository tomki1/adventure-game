/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: advenutreLand.cpp holds the adventureLand functions.
*********************************************************************/


#include "adventureLand.hpp"

// default constructor sets name
AdventureLand::AdventureLand() {
    name = "Adventureland";
}

// landPlay function
int AdventureLand::landPlay() {

    cout << endl;
    cout << "You are in Adventureland." << endl;
    cout << endl;

    int choice = 0;

    cout << "You walk into a store. Do you want to buy a Pooh Bear Plush?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Choice: " << endl;
    choice = validateMenu();

    switch (choice) {

        // user wants to obtain item
        case 1: {
            int selection = 0;
            cout << "You get in line to buy a Pooh Bear Plush.  A cute girl wearing a Pooh Bear shirt" << endl;
            cout << "notices your plush and says 'I'm sooo sad there aren't anymore Pooh Bear plushies left!'" << endl;
            cout << endl;
            cout << "What do you do next?" << endl;
            cout << "1. Let her take your Pooh Bear Plush" << endl;
            cout << "2. Ignore her and purchase your Pooh Bear Plush" << endl;
            cout << "Choice: " << endl;
            selection = validate2();

            // user gets item by answering correctly
            if (selection == 2) {
                cout << "You ignore the girl and purchase your plush." << endl;
                cout << "You are Pooh Bear's number one fan and need it more than she does!" << endl;
                return 1;
            }
            // user does not get item because answers incorrectly
            else {
                cout << "You let the girl have your Pooh Bear Plush and she doesn't even say thank you." << endl;
                cout << "A worker informs you that they will restock shortly if you come back again later." << endl;
                return 2;
            }
        }

        // user does not want to obtain item
        case 2: {
            cout << "You do not want to buy a Pooh Bear Plush." << endl;
            return 2;
        }
    }
}

// obtain Pooh Bear plush
string AdventureLand::obtainItem() {
    return "Pooh Bear Plush";
}