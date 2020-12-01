/*
Binary search

If the array is sorted, there is an especially efficient search algorithm we can use: the binary search. When using this method, we compare x with the element in the middle position, n/2, of the array. If x = list[n/2], then the algorithm is finished: report success.

If x ≠ list[n/2], compare x with the middle element. If x < list[n/2], search in the first half of the array utilizing the binary search method again. If x > list[n/2], search in the second half of the array utilizing the binary search method again. By depending on the result of the initial comparison of x with the middle element, the search was restricted to the first or the second half of the list, allowing us to conduct the search more efficiently.

This procedure is followed for each iteration of the algorithm, using the comparison of x to the middle element of the resulting portion of the list from the previous iteration. This restricts the search to the specific portion of the array that x may be found in, due to the outcome of the previous comparison. The algorithm is given below.
*/

int first = 0, last = n - 1, pivot;

bool found = false;
while (first <= last && !found)
{
    pivot = (first + last) / 2;
    
    if(list[pivot] == x)
        found == true;
    
    else 
        if(x < list[pivot]) 
            last = pivot - 1;

        else
            first = pivot + 1;
}

if (found) // x is in the array
{
    //code to take action based on x being found
}

else
{
    //code to take actions based on x not being found
}


/*
To understand why the algorithm is fast, note that the main loop executes at most log(n) times; the base of the logarithm is 2 (log2). The log(n) function grows quite slowly. For example, if the array list has 1,024 numbers stored, n = 1,024 and the loop executes at most log2(1024), which equals only 10 iterations. If the array list has 1 million values stored, then a maximum of only 20 iterations of the loop would be needed. Just observe that log2 106 < log2 220 = 20.
*/


