#pragma once
class ArrayList
{
    public:
        ArrayList ();
        ~ArrayList();
        bool isEmpty();
        void display();
        void expand();
        void add(int);
        void removeAt(int);
        int getLength();
    
    private:
        int SIZE;   //Size of the array that stores the list items
        int *list;  //array to the store the list items
        int length; //amount of elements in the list
};


