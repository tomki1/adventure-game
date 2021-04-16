/*********************************************************************
** Program name: Final Project
** Author: Kimberly Tom
** Date: 6/6/18
** Description: bag.cpp holds the bag functions.
*********************************************************************/

#include "bag.hpp"

// default constructor to set pointers to NULL
Bag::Bag() {
    head = NULL;
    tail = NULL;
    itemCount = 0;
}

// destructor
Bag::~Bag() {
    while (!isEmpty()) {
        // if only one value in queue, delete that value and set the head to NULL
        if (head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
        }
            // if more than one value in queue, delete the front value
        else {
            BagNode *tempQueue = head;
            head = head->next; // move the head to the next value in the queue
            head->prev = tail; // set the value before head to tail
            tail->next = head; // set the new next node to the head
            delete tempQueue; // delete the temporary pointer
        }
    }


}

// checks if queue is empty, returns true if queue is empty, false if not
bool Bag::isEmpty() {
    // if queue is empty, return true
    if (head == NULL) {
        return true;
    }

        // if queue is not empty, return false
    else {
        return false;
    }
}
// return item at front of queue
string Bag::getFront() {
    // if not empty, return the value at the head of the queue.
    if (isEmpty()) {
        return NULL;
    }
    else {
        return head->item;
    }
}

// add item to back of bag
// source: Daniel Koning, https://oregonstate.instructure.com/courses/1674404/pages/code-sharing
void Bag::addBack(string addItem) {

    BagNode *temp = new BagNode(addItem);
    // if nothing in queue
    if (isEmpty()) {
        head = temp;
        tail = head;

        head->next = tail; // next next spot is tail
        head->prev = tail; // previous spot is tail
        tail->next = head; // next spot is head
        tail->prev = head; // previous spot is head
    }
        // if something already in queue
    else {
        head->prev = temp; // set entry before head to new node
        tail->next = temp; // set entry after tail to new node
        temp->prev = tail; // set entry before new node to old tail
        temp->next = head; // set entry after new node to old head
        tail = temp; // set tail to the new temp node
    }

}

// remove item from front of queue
void Bag::removeFront() {
// if queue is empty, there is no value to remove
    if (isEmpty()) {
        cout << "Your bag is empty.  There is no item to remove." << endl;

    }
        // if only one value in queue, delete that value and set the head to NULL
    else if (head == tail) {
        BagNode *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
        // if more than one value in queue, delete the front value
    else {
        BagNode *tempQueue = head;
        head = head->next; // move the head to the next value in the queue
        head->prev = tail; // set the previous front to the tail
        tail->next = head; // set tail to head
        delete tempQueue; // delete the temporary pointer
    }
}

// searches for string in bag and returns true if found or false if not found
// source: Daniel Koning, https://oregonstate.instructure.com/courses/1674404/pages/code-sharing
bool Bag::searchForItem(string itemMatch) {
    BagNode *temp = head;
    bool found = false;

    do {
        if (temp->item == itemMatch)
        {
            found = true;
        }
        temp = temp->next;
    } while (temp != head);
    return found;
}

// print bag list
void Bag::printBag() {

    // if empty, tell user queue is empty
    if (isEmpty()) {
        cout << "There are no items in your bag." << endl;
    }
        // if queue is not empty, print queue
    else {
        BagNode *list = head; // create pointer
        cout << "Items in your bag: " << endl;
        // while queue does not equal the head, keep printing values
        do {
            cout << list->item << endl;
            list = list->next;
        } while (list != head);
        cout << endl;
    }
}

// increases item count
int Bag::increaseItemCount() {
    itemCount++;
}

// decreases item count
int Bag::decreaseItemCount() {
    itemCount--;
}

// returns item count
int Bag::getItemCount() {
    return itemCount;
}