/*
In order to declare an object of type queue, it is necessary to first include 
the definition file, which is called “queue.” As with the STL vector, 
the class queue is part of the std namespace, so it is necessary either to use 
“std::queue” or to provide an appropriate “using” statement. 
The queue class is templated with the base type of the individual elements. 
For example, the code fragment below declares a queue of floats.
*/

// Vector implementations from the STL libraries use vectors and allow for 
// dynamic resizing

#include <queue>
 
using std::queue;       // make queue accessible

queue <float> myQueue;  //a queue of floats


/*
principal member functions. Let q be declared to be an STL queue, 
and let e denote a single object whose type is the same as the base type 
of the queue. (For example, q is a queue of floats, and e is a float.)
*/

size():
Return the number of elements in the queue.
empty():
Return true if the queue is empty and false otherwise.
push(e):
Enqueue e at the rear of the queue.
pop():
Dequeue the element at the front of the queue.
front():
Return a reference to the element at the queue’s front.
back():
Return a reference to the element at the queue’s rear.

    /*
    Similar to the STL stack, the result of applying any of the operations front, back, or pop to an empty STL queue is undefined. Unlike our interface, no exception is thrown, but it may very likely result in the program aborting. It is up to the programmer to be sure that no such illegal accesses are attempted.

    */

//Implimentation of a queue using a circularly linked list

typedef string Elem;        // queue element type
class LinkedQueue           // queue as doubly linked list
{
    public:
         LinkedQueue();         // constructor
         int size() const;      // number of items in the queue
         bool empty() const;    //is the queue empty?
         const Elem& front() const throw(QueueEmpty); // the front element
         void enqueue (const Elem& e);  // enqueue element at rear
         void dequeue() throw(QueueEmpty);  // dequeue element at front
        
    private:        // member data
         CircleList C;  // circular list of elements
         int n;         // number of elements
};

