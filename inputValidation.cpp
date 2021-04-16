/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: inputValidation.cpp holds the input validation functions.
*********************************************************************/

#include "inputValidation.hpp"


// validate menu
int validateMenu() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger != 1 && validInteger != 2)
            {
                cout << "Please enter 1 or 2" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter 1 or 2" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}


// validate direction
int validateDirection() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger < 1 || validInteger > 4)
            {
                cout << "Please enter an integer between 1 and 4" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter an integer between 1 and 4" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// validate question
int validateQuestion() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger < 1 || validInteger > 4)
            {
                cout << "Please enter an answer between 1 and 4" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter an answer between 1 and 4" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// validate start
int validateStart() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger != 1)
            {
                cout << "Please enter 1 to continue" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter 1 to continue" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}

// validate lyrics, store, parade
int validate2() {
    bool errFlag = false;
    string input;
    int validInteger;
    do {
        getline(cin, input);
        stringstream sStream(input);

        if (sStream >> validInteger && !(sStream >> input))
        {

            if (validInteger != 1 && validInteger != 2)
            {
                cout << "Please enter 1 or 2" << endl;
            }
            else
            {
                errFlag = true;
            }
        }
        else
        {
            cout << "Please enter 1 or 2" << endl;
        }

    } while (errFlag == false);
    return validInteger;
}