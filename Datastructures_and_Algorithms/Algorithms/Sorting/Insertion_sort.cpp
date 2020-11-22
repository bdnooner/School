/*
The principle behind the insertion method is this: If we assume that the list A[0], A[1], A[2], . . . , A[i-1] is already sorted, the list A[0], A[1], A[2], . . . , A[i-1], A[i] can be sorted by comparing A[i] with elements A[i-1], A[i-2], A[i-3] , . . . until its correct location is found. In the algorithm, after the comparison A[i]:A[j] is done, A[j] is copied to the position j + 1 if A[i] < A[j]. When the correct location is found, A[i] is inserted there. A total of n - 1 iterations is required, where n represents the size of the list.

The insertion-sort algorithm can be applied to both arrays and linked lists.

Although the theoretical running time of bubble sort and insertion sort are the same, O(n2), in practice we can expect that the insertion sort will perform better. This is because bubble sort always performs a quadratic number of comparisons, but in insertion sort, if some elements are already sorted, fewer comparisons are needed.
*/

void insertionSort(char*A, int n)   // sort an array of n characters 
{ 
    for (int i = 1; i < n; i++) 
    { 
        char cur = A[i];                // current character to insert
        int j = i - 1;                  // start at previous character
    
        while ((j >= 0) && (A[j] > cur))   // while A[j] is out of order 
        {          
            A[j + 1] = A[j];                // move A[j] right
            j--;                            // decrement j
        }
 
        A[j + 1] = cur;                   // this is the proper place for cur
    }
 
}