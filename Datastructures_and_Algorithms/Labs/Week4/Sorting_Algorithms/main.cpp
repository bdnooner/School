/********************************************
*  Week 4 lesson:                           *
*   ArrayList class with sorting algorithms *
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

	//creating a list of integers
	ArrayList numbersCopy1, numbersCopy2;


    //filling the list with random integers
    for (int i = 0; i<10; i++)
	{
		int number = rand()%100;
		numbersCopy1.add(number);
		numbersCopy2.add(number);
	}

    //printing the list
    cout << "Original list of numbers:" << endl <<"\t";
    numbersCopy1.display();

    //testing bubblesort
    cout << endl << "Bubble-sorted list of numbers:" << endl <<"\t";
    numbersCopy1.bubbleSort();
    numbersCopy1.display();

    //testing quicksort
    cout << endl << "Quick-sorted list of numbers:" << endl <<"\t";
	numbersCopy2.quicksort();
    numbersCopy2.display();

	return 0;
}

