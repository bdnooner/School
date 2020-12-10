#pragma once
/********************************************
*  Week 6 lesson:                           *
*   implementation of a binary search tree  *
*********************************************/
#include <string>
/*
* Binary search tree node.
*/
struct TreeNode
{
	int info;			//element stored in this node
	TreeNode *left;		//link to left child
	TreeNode *right;	//link to right child
};

/*
* Class implementing a binary search tree.
*/
class BinarySearchTree
{
public:
	BinarySearchTree();
	bool isEmpty();
	void display();
	bool search(int);
	void add(int);
	int getMinimum();
	std::string to_string();
	~BinarySearchTree();

private:
	TreeNode* root;

	void inorderDisplay(TreeNode*);
	void inorderDisplay(TreeNode*, std::string *);
	bool search(int, TreeNode*);
	void add(int, TreeNode* &);
	TreeNode* getMinimum(TreeNode*);
	void deallocateMemory(TreeNode* &);
};