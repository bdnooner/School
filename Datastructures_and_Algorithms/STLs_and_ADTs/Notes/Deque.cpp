/*
Deque (double ended queue)

Consider now a queue-like data structure that supports insertion and deletion at both the front and the rear of the queue. Such an extension of a queue is called a double-ended queue, or deque, which is usually pronounced “deck” to avoid confusion with the dequeue function of the regular queue ADT
*/
//Fucntions
insertFront(e):
Insert a new element e at the beginning of the deque.
insertBack(e):
Insert a new element e at the end of the deque.
eraseFront():
Remove the first element of the deque; an error occurs if the deque is empty.
eraseBack():
Remove the last element of the deque; an error occurs if the deque is empty.
front():
Return the first element of the deque; an error occurs if the deque is empty.
back():
Return the last element of the deque; an error occurs if the deque is empty.
size():
Return the number of elements of the deque.
empty():
Return true if the deque is empty and false otherwise.
/*
As with the stack and queue, the Standard Template Library provides an implementation of a deque. The underlying implementation is based on the STL vector class. The pattern of usage is similar to that of the STL stack and STL queue. First, we need to include the definition file “deque.” Since it is a member of the std namespace, we need to either preface each usage “std::deque” or provide an appropriate “using” statement. The deque class is templated with the base type of the individual elements. For example, the code fragment below declares a deque of strings.
*/


#include <deque>
 
using std::deque;       // make deque accessible

deque <string> myDeque; // a deque of strings

//STL fucntions
size():
Return the number of elements in the deque.
empty():
Return true if the deque is empty and false otherwise.
push_front(e):
Insert e at the beginning the deque.
push_back(e):
Insert e at the end of the deque.
pop_front():
Remove the first element of the deque.
pop_back():
Remove the last element of the deque.
front():
Return a reference to the deque’s first element.
back():
Return a reference to the deque’s last element.

    /*
    Similar to STL stacks and queues, the result of applying any of the operations front, back, push_front, or push_back to an empty STL queue is undefined. Thus, no exception is thrown, but the program may abort.
    */

//Deque with double linked lists

typedef string Elem;    // deque element type
class LinkedDeque       // deque as doubly linked list
{
    public:
         LinkedDeque();         // constructor
         int size() const;      // number of items in the deque
         bool empty() const;    // is the deque empty?
         const Elem& front() const throw(DequeEmpty);   // the first element
         const Elem& back() const throw(DequeEmpty);    // the last element
         void insertFront (const Elem& e);              // insert new first element
         void insertBack (const Elem& e);               // insert new last element
         void removeFront() throw(DequeEmpty);          // remove first element
         void removeBack() throw(DequeEmpty);           // remove last element
    
    private:    // member data
         DLinkedList D; // linked list of elements
         int n;         // number of elements
};
 