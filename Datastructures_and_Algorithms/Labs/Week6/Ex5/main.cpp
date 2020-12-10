/********************************************
*  Week 6 lab ex5:                          *
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

	cout << "Preorder display of the BST:\n";
	bst.displayPreorder();

	cout << "\nPostorder display of the BST:\n";
	bst.displayPostorder();

	cout <<"\nInorder display of the BST:\n";
	bst.display();

	cout << "\n\nPress any key to quit...\n";
	cin.clear();
	cin.get();

	return 0;
}