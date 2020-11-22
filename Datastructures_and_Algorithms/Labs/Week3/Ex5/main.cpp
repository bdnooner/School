/*******************************
*  Week 3 iLab:              *
*  Exercise 5 - An improved queue class  *
*******************************/

#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
	Queue q;

	cout << "Insertion of 10 characters in q" << endl;
	for (int i = 0; i < q.getSize(); i++)
	{
		char x = 32 + rand() % 95;
		cout << x << endl;
		q.enqueue(x);
	}

	cout << endl
		<< "Displaying and deleting elements from q" << endl;
	while (!q.isEmpty())
	{
		cout << "Item at the front: " << q.getFront() << endl;
		q.dequeue();
	}

	return 0;
}