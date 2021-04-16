/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: frontierLand.cpp holds the frontierLand functions.
*********************************************************************/


#include "frontierLand.hpp"

// default constructor sets name
FrontierLand::FrontierLand() {
    name = "Frontierland";
}

// landPlay function
int FrontierLand::landPlay() {

    cout << endl;
    cout << "You are in Frontierland." << endl;
    cout << endl;

    int choice = 0;

    cout << "You spot the parade. Queen Elsa from Frozen walks by and says" << endl;
    cout << "if you sing the correct lyrics to the song you will get a Mickey Badge!" << endl;
    cout << "Do you want to sing a song?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Choice: " << endl;
    choice = validateMenu();

    switch (choice) {

        // user wants to obtain item
        case 1: {
            int selection = 0;
            cout << "You get really excited and clear your throat and join in with the chorus. Don't sing"
                    " the wrong lyrics!" << endl;
            cout << endl;
            cout << "♪ Let it go, let it go, _______. ♪" << endl;
            cout << "1. ♪ turn around and slam the door ♪" << endl;
            cout << "2. ♪ turn away and slam the door ♪" << endl;
            cout << "Choice: " << endl;
            selection = validate2();

            // user gets item by answering correctly
            if (selection == 2) {
                cout << "Great singing! Queen Elsa hands you a Mickey Badge." << endl;
                return 1;
            }
            // no item because user answers incorrectly
            else {
                cout << "You sang the wrong lyrics and the kids around you point and laugh at you." << endl;
                cout << "Better luck next time!" << endl;
            }

            break;
        }

        // user does not want to obtain item
        case 2: {
            cout << "You do not want to sing to get a Mickey Badge." << endl;
            break;
        }
    }
}

// obtain Mickey badge
string FrontierLand::obtainItem() {
    return "Mickey Badge";
}
