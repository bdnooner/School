/********************************
*  Week 4 lesson:               *
*   finding the smallest number *
*********************************/

#include <iostream>

using namespace std;

/*
* Returns the smallest element in the range [0, n-1] of array a
*/
int minimum(int a[], int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++)
		if (min > a[i]) min = a[i];

	return min;
}

int main()
{
	int a[10];

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand()%100;
		cout << a[i] << " ";
	}

	cout << endl << "Min =  " << minimum(a, 10) << endl;

	return 0;

}