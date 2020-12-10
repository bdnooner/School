/*******************************
*  Week 2 lesson:              *
*   a simple LinkedList class  *
*******************************/

#include <iostream>
#include "Bag.h"

using namespace std;

/*
* Initializes the list to empty creating a dummy header node.
*/
Bag::Bag()
{
	first = new Node;
	first->next = NULL;
}

/*
* Destructor. Deallocates all the nodes of the linked list,
* including the header node.
*/
Bag::~Bag()
{
	Node *temp;   

	while (first != NULL)
	{
		temp=first;
		first=first->next;
		delete temp;
	}
}

//Constructor
Bag::Bag()
{
	SIZE = 10;
	list = new int[SIZE];
	length = 0;
}

//Destructor
Bag::~Bag()
{
	delete[] list;
	list = NULL;
}

//methods
bool Bag::isEmpty()
{
	return this->length == 0;
}

void Bag::print()
{
	for (int i = 0; i < SIZE; i++)
		cout << this->list[i] << ", ";

	cout << endl;
}

int Bag::getLength()
{
	return this->length;
}

void Bag::clear()
{
	length = 0;
}

void Bag::add(int entry)
{
	if (this->length <= SIZE)
	{
		this->list[length] = entry;
		this->length++;
	}
	else
		cout << "\nBag is full!" << endl;
}

void Bag::remove(int entry)
{
	this->list[length] = entry;
	this->length--;
}

int Bag::count(int entry)
{
	int count = 0;
	for (int i = 0; i <= this->length; i++)
	{
		if (this->list[i] == entry)
			count++;
	}

	return count;
}