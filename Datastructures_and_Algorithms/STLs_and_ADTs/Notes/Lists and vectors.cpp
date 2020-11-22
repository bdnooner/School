#include <iostream>
#include <list>


//LISTS ADT
/**
 * In order to define an object to be of type list, it is necessary to first 
 * include the appropriate system definition file, which is simply called “list.” 
 * As with the STL vector, the list class is a member of the std namespace, 
 * it is necessary either to preface references to it with the namespace resolution
 *  operator, as in “std::list”, or to provide an appropriate using statement. 
 * The list class is templated with the base type of the individual elements. 
 * For example, the code fragment below declares a list of floats. 
 * By default, the initial list is empty.
 * */
#include <list>
 
using std::list;

list<float> myList;


/*
Below is a list of the principal member functions of the list class. 
Let L be declared to be an STL list of some base type, and let x denote a 
single object of this same base type. (For example, L is a list of integers, 
and e is an integer.)
*/
list(n):
Construct a list with n elements; if no argument list is given, 
an empty list is created.
size():
Return the number of elements in L.
empty():
Return true if L is empty and false otherwise.
front():
Return a reference to the first element of L.
back():
Return a reference to the last element of L.
push_front(e):
Insert a copy of e at the beginning of L.
push_back(e):
Insert a copy of e at the end of L.
pop_front():
Remove the fist element of L.
pop_back():
Remove the last element of L.

/*
The following code fragment demonstrates the use of the list class. 
The push_back method adds an element at the end of the list, 
empty determines if the list still contains elements, 
and pop_front removes the first element.
*/

    list<int> numbers;

	for (int i=0; i<10; i++)
		numbers.push_back(rand()%100);

	while(!numbers.empty())
	{
		int x = numbers.front();
		cout << x << " ";
		
		numbers.pop_front();
	}


/*
An important element of the C++ STL is the concept of an iterator. 
An iterator works like a pointer and it helps us to traverse a container, 
such as list. Given an iterator it for a container, 
at any time it is pointing to an element of the container and like with pointers, 
we can dereference it using the * operator, *it. 
One of the advantages of iterators is that we can use them without having to 
understand how containers are implemented internally.
*/
	list<int>::iterator it;

	for (it = numbers.begin(); it!=numbers.end(); ++it)
	{
		cout << *it << " ";
	}
    /*
    The call to numbers.begin() returns an iterator pointing to the first element 
    of numbers. The value returned by numbers.end() is an iterator pointing past 
    the end of the list. This represents a fictitious element, so the value returned 
    by end() cannot be dereferenced. Note the use of the operator ++ in ++it 
    to advance the value of it forward.
    */

//VECTORS
/*
The definition of class vector is given in the system include file named “vector.”
 The vector class is part of the std namespace, so it is necessary either to use
“std::vector” or to provide an appropriate using statement. 
The vector class is templated with the class of the individual elements.
For example, the code fragment below declares a vector containing 100 integers.
*/

#include <vector>

using namespace vector;

vector<int>myV(100);
 
/*
Here are the principal member functions of the vector class. 
Let V be declared to be an STL vector of some base type, and let e denote a single 
object of this same base type. 
(For example, V is a vector of integers, and e is an integer.)
*/

vector(n):Construct a vector with space for n elements; 
	if no argument is given, create an empty vector.

size():
Return the number of elements in V.
empty():
Return true if V is empty and false otherwise.
resize(n):
Resize V, so that it has space for n elements.
reserve(n):
Request that the allocated storage space be large enough to hold n elements.
operator [i]:
Return a reference to the ith element of V.
at(i):
Same as V[i], but throw an out_of_range exception if i is out of bounds,
that is, if i < 0 or i > V.size().	
front():
Return a reference to the first element of V.
back():
Return a reference to the last element of V.
push_back(e):
Append a copy of the element e to the end of V, thus increasing its size by one.
pop_back():
Remove the last element of V, thus reducing its size by one.

/*
Vector functions that take Iterators as arguements
When presenting a range of iterator values (as we have done above with the 
constructor V(p, q), assign(p, q), and erase(p, q)), the iterator range is 
understood to start with p and end just prior to q. Borrowing from interval 
notation in mathematics, this iterator range is often expressed as [p, q), 
implying that p is included in the range, but q is not. 
This convention holds whenever dealing with iterator ranges.
*/

vector( p, q):
Construct a vector by iterating between p and q, copying each of these elements into the new vector.
assign ( p, q):
Delete the contents of V, and assigns its new contents by iterating between p and q and copying each of these elements into V.
insert( p, e):
Insert a copy of e just prior to the position given by iterator p and shifts the subsequent elements one position to the right.
erase (p):
Remove and destroy the element of V at the position given by p and shifts the subsequent elements one position to the left.
erase( p, q):
Iterate between p and q, removing and destroying all these elements and shifting subsequent elements to the left to fill the gap.
clear():
Delete all these elements of V.


//POSITIONS
/*
A position is always defined in a relative manner, that is, 
in terms of its neighbors. Unless it is the first or last of the container,
a position q is always “after” some position p and “before” some position r 
A position q, which is associated with some element e in a container, 
does not change, even if the index of e changes in the container, 
unless we explicitly remove e. If the associated node is removed, 
we say that q is invalidated. Moreover, the position q does not change even 
if we replace or swap the element e stored at q with another element.
*/

	//ITERATORS
	/*
	An iterator is an extension of a position. It supports the ability to access 
	a node’s element, but it also provides the ability to navigate forwards 
	(and possibly backwards) through the container.
	There are a number of ways in which to define an ADT for an iterator object. 
	For example, given an iterator object p, we could define an operation p.next(),
	which returns an iterator that refers to the node just after p in the container. 
	Because of C++’s ability to overload operators, there is a more elegant way 
	to do this by overloading the increment operator (“++”). 
	In particular, the operation ++p advances p to the next position of the 
	container. By repeatedly applying this operation, we can step through all the 
	elements of the container. For some implementations of containers, such as a 
	doubly linked list, navigation may be possible both forwards and backwards. 
	If so, we can also overload the decrement operator (“−−”) to move the 
	iterator to the previous position in the container.
	*/

		/*
		The associated iterator type is denoted “vector<int>::iterator.” 
		In general, if C is an STL container of some type cont and the base 
		type is of type base, then the iterator type would be denoted 
		cont<base>::iterator
		*/	
		int vectorSum2(vector<int> V) 
		{
			typedef vector<int>::iterator Iterator;     // iterator type
			int sum = 0;
			for (Iterator p = V.begin(); p != V.end(); ++p)
				sum += *p;
			
			return sum;
		}

		/*
		 ^^^ We passed the vector V into the function by value. 
		 This can be quite inefficient, because the system constructs a complete 
		 copy of the actual argument. Since our function does not modify V, the best 
		 approach would be to declare the argument to be a constant reference instead, 
		 that is, “const vector <int>&.”

		A problem arises, however, if we declare an iterator for such a vector. 
		Many STL implementations generate an error message if we attempt to use a 
		regular iterator with a constant vector reference, since such an iterator 
		may lead to an attempt to modify the vector’s contents.
		The solution is a special read-only iterator, called a const iterator. 
		When using a const iterator, it is possible to read the values of the 
		container by dereferencing the iterator, but it is not possible to modify 
		the container’s values. For example, if p is a const iterator, 
		it is possible to read the value of *p, but you cannot assign it a value. 
		The const iterator type for our vector type is denoted 
		“vector<int>::const_iterator.” We make use of the typedef command to 
		rename this lengthy definition to the more concise ConstIterator. 
		*/

		int vectorSum3(const vector<int> &V) 
		{
			typedef vector<int>::const_iterator ConstIterator;   // iterator type
			int sum = 0;
			for (ConstIterator p = V.begin(); p != V.end(); ++p)
				sum += *p;
				
			return sum;
		}



/*

*/
