#include <iostream>
#include "Bag.h"

using namespace std;

int main()

{
	Bag bag;

	string s = "IPPISSISSIM";

	for (int j = 0; j<s.length(); j++)

	{

	    bag.add(s[j]);
	}

    cout << "Bag current contents:\t";

    for(int i = 0; i < bag.getLength(); i++)
    {
        if(bag.count(s[i]) > 1)
            bag.remove(s[i]);
    }

    cout << "Bag after removing duplicates:\t";
    bag.print();

    cout << "Press any key to continue...\n";
    
	getchar();
	return 0;
	
}