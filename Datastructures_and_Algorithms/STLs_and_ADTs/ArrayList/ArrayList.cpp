#include "ArrayList.h"
#include <iostream>

using namespace std;
//Constructor
ArrayList::ArrayList()
{
    SIZE = 100;
    list = new int[SIZE];
    length = 0;
}

//Destructor
ArrayList::~ArrayList()
{
    delete[] list;
    list = NULL;
}

//Methods
bool ArrayList::isEmpty()
{
    return length == 0;
}

void ArrayList::display()
{
    for (int i = 0; i < length; i++)
        cout << list[i] << ", ";

    cout << endl;
}

void ArrayList::expand()
{
    this->SIZE = this->SIZE * 2;
    int* tempArray = new int[this->SIZE];
    for (int i = 0; i < length; i++)
    {
        tempArray[i] = this->list[i];
    }
    delete[] this->list;
    this->list = tempArray;

}

void ArrayList::add(int x)
{
    if (length == SIZE)
    {
        expand();
        list[length] = x;
        length++;
    }
    else
    {
        list[length] = x;
        length++;
    }
}

void ArrayList::removeAt(int pos)
{
    if (pos < 0 || pos >= length)
        cout << "Removal Error: invalid position" << endl;
    else
    {
        for (int i = pos; i < length - 1; i++)
            list[i] = list[i + 1];
        length--;
    }
}

int ArrayList::getLength()
{
    return this->length;
}