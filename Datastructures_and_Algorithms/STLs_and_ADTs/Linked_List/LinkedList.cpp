#include "LinkedList.h"
#include <algorithm>
#include <iostream>

using namespace std;

//Constructor
LinkedList::LinkedList()
{
    first = new Node;
    first->next = NULL;
}

//Destructor
LinkedList::~LinkedList()
{
    Node *temp;
    while(first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
}

bool LinkedList::isEmpty()
{
    return first->next == NULL;
}

void LinkedList::display()
{
    Node *current = first->next;
    while(current != NULL)
    {
        cout << current->info << " ";
        current = current->next;
    }

    cout << endl;
}

void LinkedList::add(int x)
{
    Node *p = new Node;

    p->info = x;
    p->next = first->next;

    first->next = p;
}

void LinkedList::remove(int x)
{
    Node *old = first->next, *p = first;

    //Finding the address of the node before the one to be deleted
    bool found = false;
    while(old != NULL && !found)
    {
        if(old->info == x) found = true;
        else
        {
            p = old;
            old = p->next;
        }
    }

    //If x is in the list, remove it
    if(found)
    {
        p->next = old->next;
        delete old;
    }
}
