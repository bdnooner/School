/*
In order to declare an object of type stack, it is necessary to first include 
the definition file, which is called “stack.” As with the STL vector, 
the class stack is part of the std namespace, so it is necessary either to use 
“std::stack” or to provide a “using” statement. The stack class is templated with 
the class of the individual elements. For example, the code fragment below 
declares a stack of integers.
*/

// Vector implementations from the STL libraries use vectors and allow for 
// dynamic resizing

#include <stack>
 
using std::stack;       // make stack accessible

stack <int> myStack;    // a stack of integers

 /*
 The STL stack class supports the same operators as our interface. 
 Below, we list the principal member functions. Let s be declared to be an 
 STL vector, and let e denote a single object whose type is the same as 
 the base type of the stack. (For example, s is a vector of integers, 
 and e is an integer.)
 */

size():
Return the number of elements in the stack.
empty():
Return true if the stack is empty and false otherwise.
push(e):
Push e onto the top of the stack.
pop():
Pop the element at the top of the stack.
top():
Return a reference to the element at the top of the stack.

    /*
    There is one significant difference between the STL 
    implementation and our own definitions of the stack operations. 
    In the STL implementation, the result of applying either of the 
    operations top or pop to an empty stack is undefined. 
    In particular, no exception is thrown. Even though no exception is thrown,
    it may very likely result in your program aborting. 
    thus, it is up to the programmer to be sure that no such illegal 
    accesses are attempted.
    */

//Implementation of a linked list stack
typedef string Elem;        // stack element type
class LinkedStack           // stack as a linked list 
{         
    public:
         LinkedStack();             // constructor
         int size() const;          // number of items in the stack
         bool empty() const;        // is the stack empty?
         const Elem& top() const throw(StackEmpty); // the top element
         void push(const Elem& e);  // push element onto stack
         void pop() throw(StackEmpty);// pop the stack

    private:            // member data
         SLinkedList<Elem> S;   // linked list of elements
         int n;             // number of elements
};