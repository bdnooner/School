#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
    ArrayList myList; //Create a new ArrayList object

    //Populate the array with 1000 random values that are in the range of 0-500
    //NOTE THE DEFAULT SIZE OF THE ARRAY IS 100
    //The add() function calls the expand() function to double the size of the array once we hit capacity
    for (int i = 0; i < 1000; i++)
        myList.add(rand() % 500); // add some rand numbers to the myList


    //Print out the contents of the array 
    cout << "Contents of myList:  ";
    myList.display();

    //Print out the current lenght of the array and pause the program to wait for input before closing
    cout << "\nLength = " << myList.getLength() << endl
         << "Press any key to quit...";
    cin.get();
    
    return 0;
}