#include <iostream>
#include "Stack.h"

using namespace std;
int main()
{
	Stack s;
	cout << "Insertion of 10 characters in s" << endl;
	for (int i = 0; i < s.getSize(); i++)
	{
		char x = 32 + rand() % 95;
		cout << x << endl;
		s.push(x);
	}
	cout << endl
		<< "Displaying and deleting elements from s" << endl;
	while (!s.isEmpty())
	{
		cout << "Item at the top: " << s.peek() << endl;
		s.pop();
	}

	for (int i = 0; i < s.getSize() + 3; i++)
	{
		cout << "Item at the top: " << s.peek() << endl;

		s.pop();

	}

	cout << "Press any key to quit...";
    cin.get();
	return 0;
}