#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
    
        v.push_back(rand()%100);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    cout << endl;
    return 0;
}

/* 
    push_back() method is used to insert and element at the end of the list
    size() is used to get the number of elements in the vector
    [] is still used to get the index
    The vector is instantiated to be filled with int values
*/