/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: toonTown.cpp holds the toonTown functions.
*********************************************************************/


#include "toonTown.hpp"


// default constructor sets name
ToonTown::ToonTown() {
    name = "Toon Town";

}

// landPlay function
int ToonTown::landPlay() {

    cout << endl;
    cout << "You are in Toon Town." << endl;
    cout << endl;

    int choice = 0;

    cout << "You spot the parade. Pooh Bear walks by and says if you sing" << endl;
    cout <<"the correct lyrics to the song you will get a Pooh Bear Badge!" << endl;
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
            cout << "♪ Winnie the Pooh, Winnie the Pooh, Tubby little _______. ♪" << endl;
            cout << "1. ♪ cubby all stuffed with fluff ♪" << endl;
            cout << "2. ♪ teddy all stuffed with fluff ♪" << endl;
            cout << "Choice: " << endl;
            selection = validateQuestion();

            // user gets item by answering correctly
            if (selection == 1) {
                cout << "Great singing! Pooh Bear hands you a Pooh Bear Badge." << endl;
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
            cout << "You do not want to sing to get a Pooh Bear Badge." << endl;
            break;
        }
    }
}

// obtain Pooh Badge
string ToonTown::obtainItem() {
    return "Pooh Bear Badge";
}
