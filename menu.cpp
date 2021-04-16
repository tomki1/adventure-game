/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: holds the menu function.
*********************************************************************/

#include "menu.hpp"

// show menu of game
void showMenu() {

    cout << endl;
    cout << "  ****Disneyland Vacation Game****" << endl;
    cout << endl;

    cout << "     Your ticket to Disneyland: " << endl;
    cout << endl;
    cout << "          .------------. " << endl;
    cout << "         { ~~~~~~~~~~~~ }" << endl;
    cout << "         { ~~~~~~~~~~~~ }" << endl;
    cout << "         {  DISNEYLAND  }" << endl;
    cout << "         {    Resort    }" << endl;
    cout << "         { ~~~~~~~~~~~~ }" << endl;
    cout << "         {  ADMIT ONE   }" << endl;
    cout << "         { ~~~~~~~~~~~~ }" << endl;
    cout << "         { ~~~~~~~~~~~~ }" << endl;
    cout << "          .------------. " << endl;
    cout << endl;

    cout << "Ladies and gentlemen, boys and girls, welcome to the happiest place on earth!" << endl;
    cout << endl;
    cout << "You just spent $200 to spend a day at Disneyland and want to make the most out of your day." << endl;
    cout << "Luckily for you, your fun is measurable by obtaining the souvenirs on your To-do list." << endl;
    cout << "You must either obtain either ALL 3 MICKEY items or ALL 3 POOH BEAR items on your To-Do list" << endl;
    cout << "in order to have a successful day." << endl;
    cout << endl;
    cout << "Successful day combination #1 (in any order): " << endl;
    cout << "Mickey Badge, Mickey Plush, Mickey Photo" << endl;
    cout << "OR" << endl;
    cout << "Successful day combination #2 (in any order): " << endl;
    cout << "Pooh Bear Badge, Pooh Bear Plush, Pooh Bear Photo" << endl;
    cout << endl;
    cout << "You are wearing a Fitbit to keep track of your distance walked. You get tired after 12 miles." << endl;
    cout << "It takes 1 mile to travel to each land in the park." << endl;
    cout << endl;
    cout << "If you do not obtain all 3 items on your To-do list by the time you have walked 12 miles, " << endl;
    cout << "you lose the game because you are too tired to continue walking and have to leave the park." << endl;
    cout << endl;
    cout << "If you have in your possession all 3 items on your To-do list before you've walked 12 miles, " << endl;
    cout << "then you win the game.  Your reward is a fun day at Disneyland." << endl;
    cout << endl;

    int start = 0;
    cout << "Enter 1 to continue..." << endl;
    start = validateStart();

    cout << "To-do list:" << endl;
    cout << "1. Obtain a photo with Mickey/Pooh Bear" << endl;
    cout << "2. Obtain a Mickey/Pooh Bear plush by purchasing one at the store" << endl;
    cout << "3. Obtain a Mickey/Pooh Bear badge by singing along in the parade" << endl;
    cout << endl;
    cout << "You must have either ALL 3 MICKEY items or ALL 3 POOH BEAR items in your bag to win the game." << endl;
    cout << "Your bag holds a maximum of 4 items." << endl;
    cout << endl;
    cout << "Have fun!" << endl;
    cout << endl;

    start = 0;
    cout << "Enter 1 to continue..." << endl;
    start = validateStart();

    cout << "You are represented by the Mickey '°O°' on the map." << endl;
    cout << endl;
    cout << "                    Park Map" << endl;
    cout << ".----------------------------------------------." << endl;
    cout << "| Frontierland      Toon Town     Fantasyland  |" << endl;
    cout << "|      [ ]------------[ ]------------[ ]       |" << endl;
    cout << "|       |              |              |        |" << endl;
    cout << "|      [ ]-----------[°O°]-----------[ ]       |" << endl;
    cout << "| Adventureland    Main Street   Tomorrowland  |" << endl;
    cout << ".----------------------------------------------." << endl;
    cout << endl;

    start = 0;
    cout << "Enter 1 to continue..." << endl;
    start = validateStart();

        // create new Simulation object
        Simulation *newGame = new Simulation;
        newGame->startSimulation();

        // delete simulation object
        delete newGame;
}
