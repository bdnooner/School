/************************************
 * Week 4 Ex3
 * Harmonic number function
************************************/

#include <iostream>

using namespace std;

double harmonicNum(int n)
{
    if (n == 1) return 1;
    else return 1.0/n + harmonicNum(n-1);
}

int main() 
{
    int n;  //The nth harmonic that the user would like to find

    cout << "--------------------------\n"
         << "Harmonic number calculator\n"
         << "--------------------------\n\n"
         << "What value in the harmonic sequence would you like to find:\t";
    cin >> n;

    cout << "Harmonic number for H" << n << ":\t" << harmonicNum(n) << endl;

    cout << "Press any key to quit...";
    cin.clear();
    cin.ignore();
    cin.get();

    return 0;
}