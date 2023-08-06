#include <iostream>
#include "llist.h"

int main(int argc, char** argv){
    //create the fifo
    LinkedList::list<float> *myFifo = new LinkedList::list<float>();

    //push 10 items onto the fifo
    for(int i = 0; i < 10; i++){
        myFifo->push_back(i);
    }

    //print the fifo
    std::cout << "Fifo: " << *myFifo << std::endl;

    //pop 5 items off the fifo
    for(int i = 0; i < 5; i++){
        myFifo->pop_front();
    }

    //print the fifo
    std::cout << "Fifo: " << *myFifo << std::endl;

    //push 5 items onto the fifo
    for(int i = 0; i < 5; i++){
        myFifo->push_back(i);
    }

    //print the fifo
    std::cout << "Fifo: " << *myFifo << std::endl;

    delete myFifo;

    return 0;
}