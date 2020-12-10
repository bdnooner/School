/********************************************
*  Week 6 lesson:                           *
*   implementation of a binary search tree  *
*********************************************/

#include <iostream>
#include "BinarySearchTree.h"
#include "time.h"

using namespace std;

int main()
{
	BinarySearchTree bst;

	int x;

	srand((unsigned int)time(0));

	for (int i=0; i < 10; i++)
		bst.add(rand()%20);


	cout << "Contents of BST as a string concatenation:\n";
	cout << bst.to_string() << endl;

	cout << "Press any key to quit...\n";
	cin.clear();
	cin.get();


	return 0;
}