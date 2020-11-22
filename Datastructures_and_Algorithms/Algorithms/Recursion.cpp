/*
The factorial of a natural number n, n!, is usually defined as follows.

n ! = n(n-1)(n-2)(n-3) . . . 2×1.

Or to put it another way, it is the multiplication of all consecutive numbers between 1 and n.

There is another way of describing n!. Notice that (n - 1)! = (n -1)(n - 2)(n - 3) . . . 2×1. Therefore, n! = n × (n - 1)! This way, the factorial of a number is expressed in terms of the factorial of the predecessor of the number. In order to complete the definition, we would need to specify the factorial of 1. See the following.

n! = n x (n - 1)!
1! = 1

This is called the recursive definition of n!. In math, recursive definitions (also called recurrence relations or recurrences) are common. We have already used the Fibonacci sequence, 0, 1, 1, 2, 3, 5, 8, 13, 21, . . . , which is obtained by defining the first two terms of the sequence as 0 and 1 and then forming any other term by adding the two terms of the sequence that precede it. The Fibonacci sequence can be expressed as a recurrence.

Fn = Fn - 1 + Fn - 2
F1 = 1
F0 = 0

These two examples illustrate the idea of recursion in programming. A recursive function is a function that calls itself. And like mathematical expressions, the function should be called with smaller values for the arguments. In order not to have an infinite sequence of function calls, the function should provide initial or stopping conditions by handling the base cases separately; for example, defining 1! = 1 in the recursive definition of the factorial of a number. The recursive function that calculates the factorial of a number is illustrated as follows.

*/

//A Recursive Implementation of the Factorial of a Number

#include <iostream>

using namespace std;

long factorial(int n)
{
    if(n == 1) return 1;           //When we hit 1 is passed in, return 1 and the recursion will resolve all of the way
    else return n*factorial(n - 1);//Else return n multiplied by n-1, which would occur until we hit (n == 1) being true in which case the final value multiplied would be 1
}

int main()
{
    int n = 10;

    cout << "Factorial of " << n << ":\t" << factorial(n) << endl;

    cout << "Press any key to quit...";
    cin.get();

    return 0;
}