#pragma once

struct Node
{
	int info; //element stored in this node

	Node *next; //link to next node
	Node *prev; //link to next node

};


class Bag
{
    public:
        Bag();
        ~Bag();
        bool isEmpty();
        void print();
        int getLength();
        void clear();
        void add(int);
        void remove(int);
        int count(int);

    private:
        int SIZE;
        int* list;
        int length; 
		Node *first; //pointer to header (dummy) node
		Node *last;

};
