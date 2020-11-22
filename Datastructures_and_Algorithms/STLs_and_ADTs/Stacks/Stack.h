#pragma once

///currently an array implementation

class Stack
{
    public:
        Stack();
        bool isEmpty();
        void push(char);
        void pop();
        char peek();
        int getSize();
    
    private:
        static const int SIZE = 10; //Size of the queue array
        char list[SIZE];             //array to store the stack items
        int top;                    //amount of elements in the array
};