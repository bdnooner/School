/************************************
 * Week 4 Ex4                   
 * Sorting
************************************/
//Could also have #include <fstream> to output the timing tests to a file for
//further out-of-program manipulation 
#include <iostream>
#include <chrono>
#include <time.h>
#include "ArrayList.h"

using namespace std;

/*
* Program to test the ArrayList class.
*/
int main()
{
	srand((unsigned)time(0));

	//creating randomly sized Array lists of integers
	ArrayList array1(5), array2(10), array3(15), array4(25), array5(50), 
        array6(100), array7(300), array8(600), array9(900), array10(1000);

    ArrayList *arrayPtrs[10] ={&array1, &array2, &array3, &array4, &array5, &array6, &array7, &array8, &array9, &array10};

    //populating the array lists with random integers
    for(int i = 0; i < 10; i++)
    {
        arrayPtrs[i]->populate();
    }

    

    
    //Printing the lists:
    //Uncomment this when testing if you wish to output the values in the arrays
    
    /*
    cout << "Original lists of numbers:\n"    
         << "--------------------------\n\t"; 
    for (int i = 0; i < 10; i++)
    {
        arrayPtrs[i]->display();
    }
    */

    chrono::steady_clock::time_point start = chrono::steady_clock::now();
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    chrono::duration<double> timeElapsed = chrono::duration_cast<chrono::duration<double>>(end - start);

    for(int i = 0; i < 10; i++)
    {
    cout << "\nBubble-sorted Array " << i + 1 << " with " 
         << arrayPtrs[i]->getSize() << " entries\n";
    start = chrono::steady_clock::now();
    
    arrayPtrs[i]->bubbleSort();
    
    end = chrono::steady_clock::now();
    timeElapsed = chrono::duration_cast<chrono::duration<double>>(end-start);
    cout << "Code duration: "  << timeElapsed.count() << " seconds" << endl;     

    //testing quicksort
    cout << endl << "Quick-sorted Array " << i + 1 << " with " 
         << arrayPtrs[i]->getSize() << " entries\n";
    start = chrono::steady_clock::now();
    
    arrayPtrs[i]->quicksort();
    
    end = chrono::steady_clock::now();
    timeElapsed = chrono::duration_cast<chrono::duration<double>>(end-start);
    cout << "Code duration: "  << timeElapsed.count() << " seconds" << endl;

    }


    // Wait for user input to quit application
    cout << "Press any key to exit...\n";
    
    cin.clear();
    cin.get();
   
	return 0;
}

