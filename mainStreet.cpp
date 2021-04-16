/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: mainStreet.cpp holds the mainStreet functions.
*********************************************************************/


#include "mainStreet.hpp"

// default constructor sets name
MainStreet::MainStreet() {
    name = "Main Street";

}

// landPlay function
int MainStreet::landPlay() {

    cout << endl;
    cout << "You are in Main Street." << endl;
    cout << endl;

    int choice = 0;

    // source: http://www.chris.com/ascii/joan/www.geocities.com/SoHo/7373/disney.html#mickey
    cout << "             .-'''-." << endl;
    cout << "            /       |" << endl;
    cout << "            |       /" << endl;
    cout << "     .-'''-.-`.-.-.<" << endl;
    cout << "    /      _,-| ()()_/:)" << endl;
    cout << "    |     / ,  `     `|" << endl;
    cout << "     '-..-| |-.,___,  /" << endl;
    cout << "           | `-.__/  /" << endl;
    cout << "            `-.__.-'`" << endl;
    cout << endl;

        cout << "You spot Mickey Mouse. Do you want to take a photo with Mickey Mouse?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cout << "Choice: " << endl;
        choice = validate2();

        switch (choice) {

            // user wants to obtain item
            case 1: {
                int selection = 0;
                cout << "You get in line to take a photo with Mickey.  Mickey is tired and only" << endl;
                cout << "one more guest can take their photo with him. Mickey's helper says Mickey will take" << endl;
                cout << "a photo with the guest who can answer this question." << endl;
                cout << endl;
                cout << "What year was Mickey Mouse created?" << endl;
                cout << "1. 1919" << endl;
                cout << "2. 1925" << endl;
                cout << "3. 1928" << endl;
                cout << "4. 1932" << endl;
                cout << "Choice: " << endl;
                selection = validateQuestion();

                // user gets item by answering correctly
                if (selection == 3) {
                    cout << "You answered the question correctly! You get a photo with Mickey." << endl;
                    return 1;
                }

                // no item because user answers incorrectly
                else {
                    cout << "You answered the question wrong! You do not get a photo with Mickey." << endl;
                    cout << "Try again next time." << endl;
                    cout << "Hint: 1928" << endl;
                    return 2;
                }
            }

            // user does not want to obtain item
            case 2: {
                cout << "You do not want to take a photo with Mickey." << endl;
                return 2;
            }
        }
}

// obtain Mickey Photo
string MainStreet::obtainItem() {
    return "Mickey Photo";
}

