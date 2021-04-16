/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: simulation.cpp holds the simulation functions.
*********************************************************************/

#include "simulation.hpp"
#include "mainStreet.hpp"
#include "adventureLand.hpp"
#include "frontierLand.hpp"
#include "toonTown.hpp"
#include "fantasyLand.hpp"
#include "tomorrowLand.hpp"

// default constructor
Simulation::Simulation() {
    mileCount = 0;
    win = false;

    // create lands
    MainStreet *main1 = new MainStreet;
    AdventureLand *adventure2 = new AdventureLand;
    FrontierLand *frontier3 = new FrontierLand;
    ToonTown *toon4 = new ToonTown;
    FantasyLand *fantasy5 = new FantasyLand;
    TomorrowLand *tomorrow6 = new TomorrowLand;

    // start player on mainstreet
    user = main1;

    // set the land positions
    // source: Daniel Koning, https://oregonstate.instructure.com/courses/1674404/pages/code-sharing
    main1->setBottom(NULL);
    main1->setTop(toon4);
    main1->setLeft(adventure2);
    main1->setRight(tomorrow6);

    adventure2->setBottom(NULL);
    adventure2->setTop(frontier3);
    adventure2->setLeft(NULL);
    adventure2->setRight(main1);

    frontier3->setBottom(adventure2);
    frontier3->setTop(NULL);
    frontier3->setLeft(NULL);
    frontier3->setRight(toon4);

    toon4->setBottom(main1);
    toon4->setTop(NULL);
    toon4->setLeft(frontier3);
    toon4->setRight(fantasy5);

    fantasy5->setBottom(tomorrow6);
    fantasy5->setTop(NULL);
    fantasy5->setLeft(toon4);
    fantasy5->setRight(NULL);

    tomorrow6->setBottom(NULL);
    tomorrow6->setTop(fantasy5);
    tomorrow6->setLeft(main1);
    tomorrow6->setRight(NULL);

}

// destructor
Simulation::~Simulation() {

    // move user all the way to left
    while (user->getLeft() != NULL) {
        user = user->getLeft();
    }

    // move user to bottom
    while (user->getBottom() != NULL) {
        user = user->getBottom();
    }

    // delete the lands clockwise
    Land *temp = user;
    user = user->getTop();
    delete temp;

    Land *temp2 = user;
    user = user->getRight();
    delete temp2;

    Land *temp3 = user;
    user = user->getRight();
    delete temp3;

    Land *temp4 = user;
    user = user->getBottom();
    delete temp4;

    Land *temp5 = user;
    user = user->getLeft();
    delete temp5;

    Land *temp6 = user;
    user = user->getLeft();
    delete temp6;

}

// gameplay function
void Simulation::startSimulation() {

    cout << endl;
    cout << "You enter Disneyland through Main Street and boy is it crowded!" << endl;
    cout << endl;


    // loop until walk more than 12 miles or game has been won
    while (mileCount <= 12 && !win) {

        cout << endl;
        cout << "Number of miles walked (max: 12): " << mileCount << endl;
        cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
        backpack.printBag();

        int userRemoveItem = 0;

        // if user picked up an item, perform bag functions
        if (user->landPlay() == 1) {
            backpack.increaseItemCount(); // obtaining item so increase item count

            // if there are more than 4 items in bag, need to remove or discard an item
            if (backpack.getItemCount() > 4) {
                cout << endl;
                cout << "You do not have enough room in your backpack for " << user->obtainItem() << "." << endl;
                cout << endl;
                cout << "Remove an item from bag to make room for " << user->obtainItem() << "?" << endl;
                cout << "1. Yes" << endl;
                cout << "2. No" << endl;
                cout << "Choice: " << endl;
                userRemoveItem = validateMenu();

                // if user wants to remove item, perform remove item function, otherwise, discard new item
                switch (userRemoveItem) {

                    // removing item from bag and adding new item
                    case 1: {
                        cout << "You open your bag to remove an item, and some kid steals the oldest item that"
                                " was placed in your bag." << endl;
                        cout << backpack.getFront() << " has been stolen!" << endl;
                        cout << "Oh well...at least you now have room for your " << user->obtainItem() << "." << endl;
                        backpack.removeFront();
                        backpack.addBack(user->obtainItem());
                        backpack.decreaseItemCount();
                        cout << endl;
                        cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
                        backpack.printBag();

                        break;

                    }

                    // discarding new item
                    case 2: {
                        backpack.decreaseItemCount();
                        cout << "You do not want to remove any items from your bag so you discard your new item."
                             << endl;
                        cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
                        backpack.printBag();

                        break;
                    }

                }
            }

            // add item to bag and print items in bag if under 4 items in bag
            else if (backpack.getItemCount() <= 4) {
                backpack.addBack(user->obtainItem());
                cout << endl;
                cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
                backpack.printBag();

            }

        }
        // if user did not obtain item from the land, just print stats
        else {
            cout << endl;
            cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
            backpack.printBag();
            cout << endl;
            cout << "Travel to the next land." << endl;
        }

        // if backpack has at least one item, check to see if user has required items to win
        if (backpack.getItemCount() > 0) {

            // if all 3 required Mickey items, set bool win to true
            if (backpack.searchForItem("Mickey Photo") && backpack.searchForItem("Mickey Plush")
                && backpack.searchForItem("Mickey Badge")) {
                win = true;
            }

            // if all 3 required Pooh items, set bool win to true
            if (backpack.searchForItem("Pooh Bear Photo") && backpack.searchForItem("Pooh Bear Plush")
                && backpack.searchForItem("Pooh Bear Badge")) {
                win = true;
            }

        }

        int direction = 0;
        int selectAgain = 0;

        // loop direction question while direction selection not valid and user has not won
        while (selectAgain == 0 && !win) {

            cout << endl;
            printMap(user);
            cout << endl;
            cout << "Which direction do you want to go?" << endl;
            cout << "1. Up" << endl;
            cout << "2. Down" << endl;
            cout << "3. Left" << endl;
            cout << "4. Right" << endl;
            cout << "Direction: " << endl;
            direction = validateDirection();


            switch (direction) {

                // move user up
                case 1: {
                    if (user->getTop() == NULL) {
                        cout << "You cannot go that way." << endl;
                        selectAgain = 0;
                    } else {
                        user = user->getTop();
                        selectAgain = 1;
                    }

                    break;
                }

                // move user down
                case 2: {
                    if (user->getBottom() == NULL) {
                        cout << "You cannot go that way." << endl;
                        selectAgain = 0;

                    } else {
                        user = user->getBottom();
                        selectAgain = 1;
                    }
                    break;
                }

                // move user left
                case 3: {
                    if (user->getLeft() == NULL) {
                        cout << "You cannot go that way." << endl;
                        selectAgain = 0;
                    } else {
                        user = user->getLeft();
                        selectAgain = 1;
                    }
                    break;
                }

                // move user right
                case 4: {
                    if (user->getRight() == NULL) {
                        cout << "You cannot go that way." << endl;
                        selectAgain = 0;
                    } else {
                        user = user->getRight();
                        selectAgain = 1;
                    }
                    break;
                }
            }
        }

        mileCount++; // increase mile count after valid land direction selected
    }

    // if did not win
    if (!win) {
        cout << "You start your journey to the next land. You check your Fitbit." << endl;
        cout << "You have walked 12 miles and are too tired to continue so you must leave the park." << endl;
        cout << "You did not have a fun day at Disneyland because you do not have the required" << endl;
        cout << "items on your list." << endl;
        cout << "You lose!" << endl;
        cout << endl;
        // show stats
        cout << "Number of miles walked (max: 12): " << mileCount - 1 << endl;
        cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
        backpack.printBag();
    }

    // if won
    if (win) {

        // if backpack has more than one item
        if (backpack.getItemCount() > 0) {

            // if have all Mickey items, win game
            if (backpack.searchForItem("Mickey Photo") && backpack.searchForItem("Mickey Plush")
                && backpack.searchForItem("Mickey Badge")) {
                cout << "Congratulations! You obtained the 3 required Mickey souvenirs and had" << endl;
                cout <<"a great day at Disneyland!" << endl;
                cout << endl;
                // show stats
                cout << "Number of miles walked (max: 12): " << mileCount - 1 << endl;
                cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
                backpack.printBag();
                cout << "You win! You truly are Mickey's number 1 fan! #MickeyFan4Lyfe" << endl;
            }

            // if have all Pooh items, win game
            if (backpack.searchForItem("Pooh Bear Photo") && backpack.searchForItem("Pooh Bear Plush")
                && backpack.searchForItem("Pooh Bear Badge")) {
                cout << "Congratulations! You obtained the 3 required Pooh Bear souvenirs and had" << endl;
                cout <<"a great day at Disneyland!" << endl;
                cout << endl;
                // show stats
                cout << "Number of miles walked (max: 12): " << mileCount - 1 << endl;
                cout << "Number of items in bag (capacity: 4): " << backpack.getItemCount() << endl;
                backpack.printBag();
                cout << "You Win! You truly are Pooh's number 1 fan! #PoohFan4Lyfe" << endl;
            }

        }
    }

    cout << endl;
    cout << "Do you want to play again?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << "Choice: " << endl;
    int playAgain = validateMenu();

    // play again
    if (playAgain == 1) {
        showMenu();
    }
    // quit
    else if (playAgain == 2) {
        cout << "Have a magical day! Goodbye." << endl;
    }
}

// print map
// source: Daniel Koning, https://oregonstate.instructure.com/courses/1674404/pages/code-sharing
void Simulation::printMap(Land *spaceObj) {

    if (spaceObj->getName() == "Main Street") {
        cout << "                    Park Map" << endl;
        cout << ".----------------------------------------------." << endl;
        cout << "| Frontierland      Toon Town     Fantasyland  |" << endl;
        cout << "|      [ ]------------[ ]------------[ ]       |" << endl;
        cout << "|       |              |              |        |" << endl;
        cout << "|      [ ]-----------[°O°]-----------[ ]       |" << endl;
        cout << "| Adventureland    Main Street   Tomorrowland  |" << endl;
        cout << ".----------------------------------------------." << endl;
    }
    else if (spaceObj->getName() == "Adventureland") {
        cout << "                    Park Map" << endl;
        cout << ".---------------------------------------------." << endl;
        cout << "| Frontierland     Toon Town     Fantasyland  |" << endl;
        cout << "|      [ ]------------[ ]------------[ ]      |" << endl;
        cout << "|       |              |              |       |" << endl;
        cout << "|     [°O°]-----------[ ]------------[ ]      |" << endl;
        cout << "| Adventureland   Main Street   Tomorrowland  |" << endl;
        cout << ".---------------------------------------------." << endl;
    }
    else if (spaceObj->getName() == "Frontierland") {
        cout << "                    Park Map" << endl;
        cout << ".---------------------------------------------." << endl;
        cout << "| Frontierland     Toon Town     Fantasyland  |" << endl;
        cout << "|     [°O°]-----------[ ]------------[ ]      |" << endl;
        cout << "|       |              |              |       |" << endl;
        cout << "|      [ ]------------[ ]------------[ ]      |" << endl;
        cout << "| Adventureland   Main Street   Tomorrowland  |" << endl;
        cout << ".---------------------------------------------." << endl;

    }
    else if (spaceObj->getName() == "Toon Town") {
        cout << "                    Park Map" << endl;
        cout << ".----------------------------------------------." << endl;
        cout << "| Frontierland      Toon Town     Fantasyland  |" << endl;
        cout << "|      [ ]-----------[°O°]-----------[ ]       |" << endl;
        cout << "|       |              |              |        |" << endl;
        cout << "|      [ ]------------[ ]------------[ ]       |" << endl;
        cout << "| Adventureland    Main Street   Tomorrowland  |" << endl;
        cout << ".----------------------------------------------." << endl;

    }
    else if (spaceObj->getName() == "Fantasyland") {
        cout << "                    Park Map" << endl;
        cout << ".---------------------------------------------." << endl;
        cout << "| Frontierland     Toon Town     Fantasyland  |" << endl;
        cout << "|      [ ]------------[ ]-----------[°O°]     |" << endl;
        cout << "|       |              |              |       |" << endl;
        cout << "|      [ ]------------[ ]------------[ ]      |" << endl;
        cout << "| Adventureland   Main Street   Tomorrowland  |" << endl;
        cout << ".---------------------------------------------." << endl;

    }
    else if (spaceObj->getName() == "Tomorrowland") {
        cout << "                    Park Map" << endl;
        cout << ".---------------------------------------------." << endl;
        cout << "| Frontierland     Toon Town     Fantasyland  |" << endl;
        cout << "|      [ ]------------[ ]------------[ ]      |" << endl;
        cout << "|       |              |              |       |" << endl;
        cout << "|      [ ]------------[ ]-----------[°O°]     |" << endl;
        cout << "| Adventureland   Main Street   Tomorrowland  |" << endl;
        cout << ".---------------------------------------------." << endl;

    }

}