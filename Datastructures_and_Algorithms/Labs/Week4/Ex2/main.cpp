/************************************
 * Week 4 Ex2
 * Finding the third smallest number
************************************/

#include <iostream>

using namespace std;

/*
* Returns the third smallest element in the range [0, n-1] of array a
*/
int thirdSmallest(int a[], int n)
{
    int min = a[0];
    int secondSml = a[0];
    int thirdSml = a[0];

    for (int i = 1; i < n; i++)
    {
        if (min > a[i]) 
        {
            thirdSml = secondSml;
            secondSml = min;
            min = a[i];
        }
        else if (secondSml > a[i])
        {
            thirdSml = secondSml;
            secondSml = a[i];
        }
        else if (thirdSml > a[i])
        {
            thirdSml = a[i];
        }
    }

    return thirdSml;
}

int main()
{
    const int ARRAY_SIZE = 10;
    int a[ARRAY_SIZE];

    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
        cout << a[i] << " ";
    }

    cout << endl << "Third smallest =  " << thirdSmallest(a, ARRAY_SIZE) << endl;

    cout << "Press any key to quit...";

    cin.get();

    return 0;

}