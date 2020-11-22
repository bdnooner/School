/*************************************
	Week 2 Lab: Ex 2				
 	Doubly Linked List 
*************************************/

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "DoublyLinkedList.h"


using namespace std;

int main()

{
	DoublyLinkedList myList;
	int entry;

	//Add 5 random numbers to list
	for (int i = 0; i < 5; i++)
		myList.add(rand() % 20);

	cout << "1 - Display the list elements\n" 
		 << "2 - Is the list empty?\n"
		 << "3 - Add element\n"
		 << "4 - Delete element\n"
		 << "5 - Display reversed\n" 
		 << "6 - Add element at the end\n"
		 << "7 - Exit\n";

	int selection;

	do
	{
		cout << endl << "Enter your choice: ";
		cin >> selection;
		switch (selection)
		{
			case 1:
				cout << "List elements: ";
				myList.display();
				break;
			case 2:
				if (myList.isEmpty()) cout << "List is empty\n";
				else cout << "List is not empty\n";
				break;
			case 3:
				cout << "Enter an element to add at the beginning of the list: ";
				cin >> entry;
				myList.add(entry);
				break;
			case 4:
				cout << "Enter an element to delete from the list: ";
				cin >> entry;
				myList.remove(entry);
				break;
			case 5:
				cout << "Display in reverese :";
				myList.displayInReverse();
				break;
			case 6:
				cout << "Enter an element to add at end";
				cin >> entry;
				myList.addEnd(entry);
				break;
			case 7:
				cout << "All done!\n";
				break;
			default: cout << "Invalid choice!\n";
			}
		} while (selection != 7);

		
	return 0;
}
