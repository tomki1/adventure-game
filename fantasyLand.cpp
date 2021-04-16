/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: fantasyLand.cpp holds the fantasyLand functions.
*********************************************************************/


#include "fantasyLand.hpp"

// default constructor sets name
FantasyLand::FantasyLand() {
    name = "Fantasyland";
}

// landPlay function
int FantasyLand::landPlay() {

    cout << endl;
    cout << "You are in Fantasyland." << endl;
    cout << endl;

    int choice = 0;

    // source: http://www.asciiworld.com/-Winnie-the-Pooh-.html
    cout << " __( )_" << endl;
    cout << "(      (o___" << endl;
    cout << " |          |" << endl;
    cout << " |      (__/" << endl;
    cout << "   |     /   ___" << endl;
    cout << "   /     |  |___|" << endl;
    cout << " /    ^    |     |" << endl;
    cout << "|   |  |__|_HUNNY |" << endl;
    cout << "|    |______)____/" << endl;
    cout << " |         /" << endl;
    cout << "   |     /_" << endl;
    cout << "    |  ( __)" << endl;
    cout << "    (____)" << endl;
    cout << endl;


    cout << "You spot Pooh Bear. Do you want to take a photo with Pooh Bear?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Choice: " << endl;
    choice = validate2();

    switch (choice) {

        // user wants to obtain item
        case 1: {
            int selection = 0;
            cout << "You get in line to take a photo with Pooh Bear.  Pooh Bear is tired and only" << endl;
            cout << "one more guest can take their photo with him. Pooh Bear's helper says Pooh will take" << endl;
            cout << "a photo with the guest who can answer this question." << endl;
            cout << endl;
            cout << "What year did Disneyland first open?" << endl;
            cout << "1. 1950" << endl;
            cout << "2. 1955" << endl;
            cout << "3. 1960" << endl;
            cout << "4. 1965" << endl;
            cout << "Choice: " << endl;
            selection = validateQuestion();

            // user gets item by answering correctly
            if (selection == 2) {
                cout << "You answered the question correctly! You get a photo with Pooh Bear." << endl;
                return 1;
            }

            // no item because user answers incorrectly
            else {
                cout << "You answered the question wrong! You do not get a photo with Pooh Bear." << endl;
                cout << "Try again next time." << endl;
                cout << " (Hint: 1955)" << endl;
                return 2;
            }

        }

        // user does not want to obtain item
        case 2: {
            cout << "You do not want to take a photo with Pooh Bear." << endl;
            return 2;
        }
    }
}

// obtain photo with Pooh Bear
string FantasyLand::obtainItem() {
    return "Pooh Bear Photo";
}