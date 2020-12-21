/************************************************
*  Week 4 lesson:                               *
*   implementing a recursive factorial function *
*************************************************/

#include <iostream>

using namespace std;

/*
* Returns the factorial of n
*/
long factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n;

	cout << "Enter a number: ";
	cin >> n;

	if (n > 0)
		cout << n << "!= " << factorial(n) << endl;
	else
		cout << "Input Error!" << endl;

	return 0;
}