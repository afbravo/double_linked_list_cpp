/*
    Example for finding the maximum value of a double linked list
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "llist.h"

int randomNumber(int offset, int maxNumber){
    return (rand() % maxNumber) + offset;
}

int main(int argc, char** argv){
    int maxNumber = 100;
    int listSize = 10;

    //create a seed for the random number generator
    srand(time(NULL));

    std::cout << "Initializing double linked list" << std::endl;
    //create a new list
    LinkedList::list<int> *myList = new LinkedList::list<int>();

    for (size_t i = 0; i < listSize; i++){
        myList->push_back(1);
    }

    std::cout << "Done initializing double linked list" << std::endl;

    //print the list
    std::cout << "List: " << *myList << std::endl;


}
