#include "Queue.h"

using namespace std;

///currently an array implementation

/*
    Constructor. Initializes the queue.
*/
Queue::Queue()
{
	front = 0;
	back = SIZE-1;
	count = 0;
}

/*
    Determines whether the queue is empty.

    Returns true if the queue is empty, false otherwise.
*/
bool Queue::isEmpty()
{
	return count == 0;
}

/*
    Adds an element to the back of the queue.

    x: element to be added to the queue.
*/
void Queue::enqueue(char x)
{
	back = (back+1)%SIZE;
	list[back] = x;
	count++;
}

/*
    Removes the element in the front of the queue.
*/
void Queue::dequeue()
{
	front = (front+1)%SIZE;
	count--;
}

/*
    Returns the element in the front of the queue. Does not remove it.
*/
char Queue::getFront()
{
	return list[front];
}

/*
    Returns the size of the queue.
*/
int Queue::getSize()
{
	return SIZE;
}
