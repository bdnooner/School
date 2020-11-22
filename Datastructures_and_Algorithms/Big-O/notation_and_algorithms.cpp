/*
To describe the running time, we will use O-notation in order to simplify the analysis when the most important elements of the time complexity of the algorithm are expressed.

Let us consider this example. Suppose that we are given a collection of n numbers stored in an array A and we want to write a function that returns the minimum; that is, the smallest value in the array. A simple algorithm consists of n iterations where in the i-th iteration, the minimum for the sequence A[0], A[1], . . . , A[i] is found by comparing the minimum of iteration i - 1 with A[i].
*/

The Minimum Algorithm

int minimum(int A[], int n) 
{
    int min = A[0];                     //one operation '=' that occurs once

    for (int i=1; i<n; i++)             //three operations, '=' once, '<' and '++' n-1 times 
        if (min > A[i]) min = A[i];     //two operations, '>' and '=' that can happen n-1 times

    return min;                         //one operation, "return" that occurs once  
}
/**
 * We have 4 operations that can occur n-1 times: 4(n-1)
 * We also have 5 operations that occur once no matter what: +5
 * This makes our Big-O notation: 4(n-1) + 5 = O(n)
 * Simplified ^^ is 4n + 1 = O(n)    
/

/*
To analyze the running time, observe that in the worst case, the total number of basic operations is n times a constant factor. It is not difficult to see why—there is a for loop that executes n - 1 iterations, and at most, four operations are executed in each iteration: the comparison i < n, incrementing i by 1, the comparison min > A[i], and possibly the assignment min = A[i]. Passing the arguments to the function, the assignment min = A[0], the return statement, and the initialization i = 1 are just five basic operations that are executed, once each. In summary, the total number of basic operations is 4(n - 1) + 5 = 4n + 1. Because 4n + 1 = O(n), the running time of the algorithm to find the minimum is O(n). This idea can be applied to other known algorithms to demonstrate that their running time is linear (that is, O(n)), also: finding the maximum, computing the sum of n values, computing the average of a list of numbers, and so forth.
*/
