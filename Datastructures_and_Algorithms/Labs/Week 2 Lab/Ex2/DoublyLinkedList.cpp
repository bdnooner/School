#include <iostream>
#include <algorithm>
#include "DoublyLinkedList.h"
#include <vector>

using namespace std;

// Initializes the list to be empty creating a header node

DoublyLinkedList::DoublyLinkedList()
{
	first = new Node;
	last = first;
	first->next = NULL;
	first->prev = NULL;
}

//De-allcoate the resources and destroy object
DoublyLinkedList::~DoublyLinkedList()
{
	Node *temp;
	while (first != NULL)
	{
		temp = first;
		first = first->next;
		delete temp;
	}
}


bool DoublyLinkedList::isEmpty()
{
	return first->next == NULL;
}

void DoublyLinkedList::display()
{
	Node * current = first;

	while (current != NULL)
	{
		cout << current->info << " ";
		current = current->next;
	}
	cout << endl;
}


void DoublyLinkedList::displayInReverse()
{
	Node * current = last;
	while (current != NULL)
	{
		cout << current->info << " ";
		current = current->prev;
	}
	cout << endl;
}

void DoublyLinkedList::add(int entry)
{
	Node *list = new Node;

	list->info = entry;
	list->next = first;
	list->prev = NULL;
	first->prev = list;
	first = list;

}

void DoublyLinkedList::addEnd(int entry)
{
	Node *list = new Node;

	list->info = entry;
	list->next = NULL;
	list->prev = last;
	last->next = list;
	last = list;
}

void DoublyLinkedList::remove(int entry)
{
	Node * old = first->next,
		*list = first;
	//Finding the address of the node before the one to be deleted
	bool found = false;
	while (old != NULL && !found)
	{
		if (old->info == entry) found = true;
		else
		{
			list = old;
			old = list->next;
		}
	}

	//if x is in the list, remove it.
	if (found)
	{
		list->next = old->next;
		old->next->prev = old->prev;
		delete old;
	}
};