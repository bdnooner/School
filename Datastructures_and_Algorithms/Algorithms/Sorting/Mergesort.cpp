/*
The algorithm merge sort is based on the following observation: If we are given two sorted lists, A and B, with n elements in each, then the list C made up of the elements of both A and B can be sorted in linear time by using the fact that A and B are sorted. This is known as the merge of A and B. For example, if A, B, and C are arrays, we need three counters: a_ptr, b_ptr, and c_ptr, one for each array. Elements pointed by a_ptr and b_ptr are compared. If, for example, A[a_ptr] <= B[b_ptr], then A[a_ptr] is copied into C[c_ptr] and both a_ptr and c_ptr are incremented by 1. Similarly, when A[a_ptr] > B[b_ptr], B[b_ptr] is copied into C[c_ptr] and both b_ptr and c_ptr are incremented by 1. When either A or B is exhausted, the remaining elements of the other array are copied into C.

The merge sort method proceeds by dividing the array to be sorted into two parts of equal size if the array size is greater than 1, and then recursively, merge sorts the two halves. The next step is to merge the two parts just sorted with an algorithm similar to the one described above. Merge sort is also an efficient algorithm with a running time of O(n log n).
*/

// C++ program for Merge Sort
#include <iostream>
using namespace std;
 
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Create temp arrays
    int L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[],int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m = (l+r-1)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}