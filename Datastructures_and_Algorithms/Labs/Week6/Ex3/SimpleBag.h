#pragma once

#include <string>

struct TreeNode
{
	int info; //element stored in this node

	TreeNode *right; //link to next node
	TreeNode *left; //link to next node

};


class SimpleBag
{
    public:
        SimpleBag();
        ~SimpleBag();
        bool isEmpty();
        void print();
        void clear();
        void add(int);
        int count(int);

    private:
        TreeNode* root;

        void deallocateMemory(TreeNode* &);
        void print(TreeNode*);
        void add(int, TreeNode*&);
        void count(int, int &, TreeNode *);

};
