/***************************************
 Week 5 Lab Ex4
 Implementing Hash Functions
****************************************/
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int hashFunction(const string x, int seed)
{
    int hash = 0;
    for(int i = 0; i < x.length(); i++)
        hash += (int(x[i]) * seed);
    
    return hash;
}

int main()
{
    srand((unsigned)time(0));
    int x = rand();

    cout << "Implementing a has function for strings of C++ keywords\n"
         << "-------------------------------------------------------\n\n";
    
    cout << "Hash for \"return\":\t" << hashFunction("return", x) << endl << endl;
    cout << "Hash for \"bool\":\t" << hashFunction("bool", x) << endl << endl;
    cout << "Hash for \"include\":\t" << hashFunction("include", x) << endl << endl;

    cout << "Press any key to quit...\n";

    cin.clear();
    cin.get();

    return 0;
}