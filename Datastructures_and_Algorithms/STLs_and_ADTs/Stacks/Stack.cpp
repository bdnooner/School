#include "Stack.h"

using namespace std;

///currently an array implementation



/*
    Constructor. Initializes the stack.
*/
Stack::Stack()
{
	top = 0;
}

/*
    Determines whether the stack is empty.

    Returns true if the stack is empty, false otherwise.
*/
bool Stack::isEmpty()
{
	return top == 0;
}

/*
    Adds an element to the top of the stack.

    x: element to be added to the stack.
*/
void Stack::push(char x)
{
	list[top] = x;
	top++;
}

/* 
    Removes the element at the top of the stack.
*/
void Stack::pop()
{
	top--;
}

/*
    Returns the element at the top of the stack. Does not remove it.
*/
char Stack::peek()
{
	return list[top-1];
}

/*
    Returns the size of the stack.
*/
int Stack::getSize()
{
	return SIZE;
}