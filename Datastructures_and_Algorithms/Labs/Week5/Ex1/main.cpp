/********************************************
*  Week 5 lesson:                           *
*   ArrayList class with search algorithms  *
*********************************************/

#include <iostream>
#include <time.h>
#include <chrono>
#include "ArrayList.h"

using namespace std;

/*
* Program to test the ArrayList class.
*/
int main()
{
	srand((unsigned)time(0));

	//list creation
	ArrayList numbers;
	
	/*
	populate the array list with random values, takes into account the 
	possibility for differntly sized arrays if the application needs that functional
	*/
	numbers.populate(); 
	

	//printing the list of integers
	cout << "List of numbers:" << endl <<"\t";
	numbers.display();



	/*
	 * Sequential search test
	 * loop through to perform a sequential search 1000 times
	 * randomly assing a value to x each iteration for the search
	 * use <chrono> library to time these 
	
	*/

	//set up the starting time
	chrono::steady_clock::time_point start = chrono::steady_clock::now();

	int x;

	for(int i = 0; i < 1000; i++)
	{
		x = rand() % 100;

		if (numbers.sequentialSearch(x)) cout << "Found!" << endl;
		else cout << "Not found!" << endl;
	}

	//record the end time and calculate the difference between end and start
	chrono::steady_clock::time_point end = chrono::steady_clock::now();
	chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

	//output the time that it took to perform the batch of searches to the istream
	cout << "Code duration for Sequential search:\t" << timeElapsed.count() << endl;

	

	//Sorting the list
	numbers.quicksort();



	/*
	 * Sequential search test WITH SORTED ARRAY
	 * loop through to perform a sequential search 1000 times
	 * randomly assing a value to x each iteration for the search
	 * use <chrono> library to time these 
	
	*/

	//set up the starting time
	start = chrono::steady_clock::now();

	int x;

	for(int i = 0; i < 1000; i++)
	{
		x = rand() % 100;

		if (numbers.sequentialSearch(x)) cout << "Found!" << endl;
		else cout << "Not found!" << endl;
	}

	//record the end time and calculate the difference between end and start
	end = chrono::steady_clock::now();
	timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

	//output the time that it took to perform the batch of searches to the istream
	cout << "Code duration for Sequential search:\t" << timeElapsed.count() << endl;




	/*
	 * Binary search test
	 * loop through to perform a sequential search 1000 times
	 * randomly assing a value to x each iteration for the search
	 * use <chrono> library to time these 
	
	*/

	//set up the starting time
	start = chrono::steady_clock::now();

	int x;

	for(int i = 0; i < 1000; i++)
	{
		x = rand() % 100;

		if (numbers.binarySearch(x)) cout << "Found!" << endl;
		else cout << "Not found!" << endl;
	}

	//record the end time and calculate the difference between end and start
	end = chrono::steady_clock::now();
	timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

	//output the time that it took to perform the batch of searches to the istream
	cout << "Code duration for Sequential search:\t" << timeElapsed.count() << endl;

	//clear the input stream and wait for user input to quit the application
	cin.ignore();
	cin.clear();
    cin.get();

	return 0;
}
