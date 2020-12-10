/*******************************
*  Week 2 lesson:              *
*   a simple LinkedList class  *
*******************************/

#include <iostream>
#include "SimpleBag.h"

using namespace std;

/*
* Initializes the list to empty creating a dummy header node.
*/
SimpleBag::SimpleBag()
{
	root = NULL;
}

/*
* Destructor. Deallocates all the nodes of the linked list,
* including the header node.
*/
SimpleBag::~SimpleBag()
{
	deallocateMemory(root);
}

//methods
bool SimpleBag::isEmpty()
{
	return root == NULL;
}

void SimpleBag::print()
{
	print(root);
	cout << endl;
}

void SimpleBag::clear()
{
	deallocateMemory(root);
}

void SimpleBag::add(int x)
{
	add(x, root);
}

int SimpleBag::count(int x)
{
	int numFound = 0;
	count(x, numFound, root);
	return numFound;
}



// Private Functions

void SimpleBag::deallocateMemory(TreeNode* & p)
{
	if (p != NULL)
	{
		deallocateMemory(p->left);
		deallocateMemory(p->right);
		delete p;

		p = NULL;
	}
}

void SimpleBag::add(int x, TreeNode* & p)
{
	if (p == NULL)
	{
		p = new TreeNode;
		p->info = x;
		p->left = p->right = NULL;
	}
	else
	{
		if (x <= p->info) add(x, p->left);
		else add(x, p->right);
	}
}

void SimpleBag::print(TreeNode *p)
{
	if (p != NULL)
	{
		cout << p->info << " ";
		print(p->left);
		print(p->right);
	}
}

void SimpleBag::count(int x, int &numFound, TreeNode *p)
{
	if(p != NULL)
	{
		if (x == p->info)
			numFound++;

	count(x, numFound, p->left);
	count(x, numFound, p->right);
	}

}