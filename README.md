# Double Linked List Project

This project was made to have a costumizable double linked list library in C++. It was made for testing purposes and to be used in other projects.

The library has a Node class and a Llist class. The Node class is a template class that can be used to store any type of data. The Llist class is also a template class that can be used to store any type of data. The Llist class has a pointer to the first node of the list and a pointer to the last node of the list. It also has a size variable that stores the size of the list.

## Llist Class Methods

### Node Accessors

- **begin():** Returns pointer to the head Node of the list. _[O(1)]_
- **end():** Returns pointer to the tail Node of the list. _[O(1)]_
- **nodeAt(int index):** Returns pointer to the Node at the given index. _[O(n)]_

### Data Accessors

- **front():** Returns data of the first Node of the list. _[O(1)]_
- **back():** Returns data of the last Node of the list. _[O(1)]_
- **at(int index):** Returns data of the Node at the given index. _[O(n)]_

### Capacity

- **empty():** Returns true if the list is empty, false otherwise. _[O(1)]_
- **size():** Returns the size of the list. _[O(1)]_
- **max_size():** Returns the maximum size of the list. _[O(1)]_

### Modifiers

- **clear():** Clears the list. _[O(n)]_
- **insert(node\<T> \*node, T data):** Inserts a new Node with the given data before the given Node. _[O(1)]_
- **insert(int index, T data):** Inserts a new Node with the given data before the given index. _[O(n)]_
- **erase(node\<T> \*node):** Erases the given Node. _[O(1)]_
- **erase(int index):** Erases the Node at the given index. _[O(n)]_
- **push_back(T data):** Inserts a new Node with the given data at the end of the list. _[O(1)]_
- **pop_back():** Erases the last Node of the list. _[O(1)]_
- **push_front(T data):** Inserts a new Node with the given data at the beginning of the list. _[O(1)]_
- **pop_front():** Erases the first Node of the list. _[O(1)]_
- **moveToFront(node\<T> \*node):** Moves the given Node to the beginning of the list. _[O(1)]_

### Operations

- **reverse():** Reverses the list. _[O(n)]_

### Operator Overloads

- **operator[](int index):** Returns data of the Node at the given index. _[O(n)]_
- **operator<<(ostream &os, Llist\<T> &list):** Prints the list. _[O(n)]_

## Examples

The project includes 3 examples to understand the possible uses of the library. These examples focus on:

- **test1.cpp** -> Finding the maximum value of a list.
- **test2.cpp** -> Using a llist as a string based on characters
- **test3.cpp** -> Using a llist to store data as a FIFO data structure

## Known Issues and Needed Improvements

The projects has basic functionallity and there are not known issues reported.

However, needed improvements are:

- faster reverse() method
- add find() method
- add sort() method
- add merge() method
- add operator overloads for +, -, +=, -=, ==, !=, <, >, <=, >=, =
