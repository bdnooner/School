/* 
A method that performs very well in practice, even though its worst-case running time is also quadratic, is quicksort. In quicksort, we start by selecting a distinguished element: the pivot. After the correct location of the pivot is found, it is moved there, generating two sublists of elements: the list of values smaller than the pivot (now at smaller locations than the pivot's) and the list of values greater than the pivot (now at greater locations than the pivot's). The algorithm proceeds recursively with the left and the right sublists.

To find the correct location of the pivot, two integer variables i and j are used that contain locations in the array. At any time during the algorithm, all of the elements to the left of i will be smaller than the pivot, and all of the elements to the right of j will be greater than the pivot. The pivot is first swapped with the last element in the array, and then variables i and j are set to point to the first element in the array and the one before the pivot, respectively. The variable i is moved to the right, skipping over the elements that are smaller than the pivot. Similarly, j is moved to the left, skipping over elements that are larger than the pivot. We stop moving i and j when i is pointing to a larger element and j is pointing to a smaller element than the pivot. These two elements are swapped and the process is repeated. Eventually, i and j will cross in their movement, indicating that no more swaps are necessary. Finally, the pivot is swapped with the element pointed to by i. Next, the procedure is applied recursively to the list of elements to the left of the pivot and to the list of elements to the right of the pivot.

The selection of the pivot in each iteration is important to the efficiency of the algorithm. Ideally, the best choice is an element that has n / 2 smaller elements. This is known as finding the median of a list of objects. Although there are good algorithms to find the median, they would increase the running time of quicksort by too much. Different strategies, such as always selecting a random element within the list, may be used instead.
*/

/*
* Quick-sorts this ArrayList. his is for a member function of an ArrayList, you could also pass in the array/list for a stand alone function
*/
void ArrayList::quicksort()
{
	quicksort(0, length - 1);
}

/*
* Recursive quicksort algorithm.
* 
* begin: initial index of sublist to be quick-sorted.
* end: last index of sublist to be quick-sorted.
*/
void ArrayList::quicksort(int begin, int end)
{
	int temp;
	int pivot = findPivotLocation(begin, end);

	// swap list[pivot] and list[end]
	temp = list[pivot];
	list[pivot] = list[end];
	list[end] = temp;

	pivot = end;

	int i = begin,
		j = end - 1;

	bool iterationCompleted = false;
	while (!iterationCompleted)
	{
		while (list[i] < list[pivot])
			i++;
		while ((j >= 0) && (list[pivot] < list[j]))
			j--;

		if (i < j)
		{
			//swap list[i] and list[j]
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;

			i++;
			j--;
		} else
			iterationCompleted = true;
	}

	//swap list[i] and list[pivot]
	temp = list[i];
	list[i] = list[pivot];
	list[pivot] = temp;

	if (begin < i - 1)
		quicksort(begin, i - 1);
	if (i + 1 < end)
		quicksort(i + 1, end);
}

/*
* Computes the pivot location.
*/
int ArrayList::findPivotLocation(int b, int e)
{
	return (b + e) / 2;
}