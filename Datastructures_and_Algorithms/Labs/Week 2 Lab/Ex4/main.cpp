/***************************************
*  Week 2 iLab:                        *
*  Exercise 4: Using the C++ STL List  *
***************************************/

#include <iostream>
#include <list>

using namespace std;

int main()

{
	list<int> numbers;

	for (int i = 0; i<10; i++) //generates 10 random numbers

		numbers.push_back(rand() % 21);

	int table[21];

	for (int i = 0; i<21; i++)

		table[i] = 0;

	list<int>::iterator it;

	for (it = numbers.begin(); it != numbers.end(); it++)

	{
		table[*it]++;
	}
	
	for (int it = 0; it<21; it++)

	{
		cout << it << " " << table[it] << endl;
	}
	system("PAUSE");
	return 0;

}
