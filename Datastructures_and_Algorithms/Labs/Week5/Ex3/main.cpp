/********************************************
*  Week 5 lesson:                           *
*   ArrayList class with search algorithms  *
*********************************************/

#include <iostream>
#include <time.h>
#include <chrono>
#include "ArrayList.h"

using namespace std;


bool unsortedSearch(ArrayList *arr1, ArrayList *arr2)
{
	for (int i = 0; i < arr1->getSize(); i++)
	{
		if(arr2->sequentialSearch(arr1->getValue(i)) == false)
			return false;
	}

	return true;
}

//arrays must be sorted beforehand
bool sortedSearch(ArrayList *arr1, ArrayList *arr2)
{
	for (int i = 0; i < arr1->getSize(); i++)
	{
		if(arr2->binarySearch(arr1->getValue(i)) == false)
			return false; 
	}

	return true;
}

/*
* Program to test the ArrayList class.
*/
int main()
{
	srand((unsigned)time(0));

	ArrayList arr1(1000), arr2(1000);

	arr1.populate();
	arr2.populate();

	//timing the unsorted list searches
	cout << "Unsorted searching between array contents now...\n";
	chrono::steady_clock::time_point start = chrono::steady_clock::now();
	
	unsortedSearch(&arr1, &arr2);

	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

	cout << "Code duration for Unsorted Search:\t" 
		 << timeElapsed.count() << endl << endl;
	
	//sort the lists for testing the sorted search
	arr1.quicksort();
	arr2.quicksort();

	//timing the sorted list searches
	cout << "Sorted searching between array contents now...\n";
	start = chrono::steady_clock::now();

	sortedSearch(&arr1, &arr2);

	end = chrono::steady_clock::now();
	timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

	cout << "Code duration for Sorted Search:\t" 
		 << timeElapsed.count() << endl << endl;

	//clear the input stream and wait for user input to quit the application
	cout << "Press any key to quit...";

	cin.clear();
    cin.get();

	return 0;
}


