/*
    Sorted search
    * works if the list/array is sorted in non-decreasing order
    * Continue the search only if the current element < x
    * Worst case: iterate through n times
    * Array should be sorted in ascending order
    * if we hit a value that is greater than x then we break and continue as we did not find x in the array
    * 
*/
    for(int i = 0; i < n && list[i] < x; i++)
    {
        if (i < n && list[i] == x) //x is in the array
        {
            //code to take action if x is present
        }

        else //x is not in the array
        {
            //code to take action if x is not present
        }
    }
