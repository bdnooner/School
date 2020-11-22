#pragma once
/*************************************
*   Week 2 lesson:                   *
*   Simple DoublyLinkedList class	 *
*************************************/
/*
* Doubly Linked list node.
*/

struct Node
{
	int info; //element stored in this node

	Node *next; //link to next node
	Node *prev; //link to next node

};
/*
* Class implementing a linked list.
*/

class DoublyLinkedList
{
public:
	DoublyLinkedList(); ~DoublyLinkedList();

	bool isEmpty();
	void display();
	void add(int);
	void remove(int);
	void displayInReverse();
	void addEnd(int);
private:
	Node *first; //pointer to header (dummy) node
	Node *last;

};
