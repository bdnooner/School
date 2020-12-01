/********************************************
*  Week 5 lesson:                           *
*   ArrayList class with search algorithms  *
*********************************************/

#include <iostream>
#include "ArrayList.h"
#include <time.h>

using namespace std;

/*
* Program to test the ArrayList class.
*/
int main()
{
	srand((unsigned)time(0));

	//list creation
	ArrayList numbers;

	for (int i = 0; i<20; i++)
	{
		numbers.add(rand()%100);
	}

	//printing the list
	cout << "List of numbers:" << endl <<"\t";
	numbers.display();

	int x;

	//searching with sequential search
	cout << endl << "(Sequential Search) Enter a number: ";
	cin >> x;

	if (numbers.sequentialSearch(x)) cout << "Found!" << endl;
	else cout << "Not found!" << endl;

	//Sorting the list
	numbers.quicksort();

	cout << endl << "Sorted list of integers:" << endl <<"\t";
	numbers.display();

	//searching with sorted search
	cout << endl << "(Sorted Search) Enter a number: ";
	cin >> x;

	if (numbers.sortedSearch(x)) cout << "Found!" << endl;
	else cout << "Not found!" << endl;

	//searching with binary search
	cout << endl << "(Binary Search) Enter a number: ";
	cin >> x;

	if (numbers.binarySearch(x)) cout << "Found!" << endl;
	else cout << "Not found!" << endl;

	return 0;
}
