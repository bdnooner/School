/********************************************
*  Week 6 lab ex4:                          *
*********************************************/

#include <iostream>
#include "BinarySearchTree.h"
#include "time.h"

using namespace std;

int main()
{
	BinarySearchTree bst;

	srand((unsigned int)time(0));

	cout << "Popluating the tree with 20 random integers...\n\n";
	for (int i=0; i < 20; i++)
		bst.add(rand()%1100);

	cout << "Total height of BST:\t" << bst.getHeight() << endl;

	cout << "Press any key to quit...\n";
	cin.clear();
	cin.get();

	return 0;
}