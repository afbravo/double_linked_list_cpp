#include <iostream>
#include "llist.h"

int main(int argc, char** argv){

    //the passed in argument is the string to be reversed

    char* str = argv[1];

    std::cout << "String to be reversed: " << str << std::endl;

    //create a new list
    LinkedList::list<char> *myString = new LinkedList::list<char>();

    while(*str != '\0'){
        myString->push_back(*str);
        str++;
    }

    std::cout << "Double linked list as a string: " << *myString << std::endl;

    //reverse the list

    myString->reverse();

    std::cout << "Reversed double linked list as a string: " << *myString << std::endl;

    delete myString;
}