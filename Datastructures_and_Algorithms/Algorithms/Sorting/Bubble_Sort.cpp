/* 
he main idea of this algorithm is to move the elements to their positions by bringing the maximum to its position, then the second largest to its position, then the third largest, and so forth. To do this, n - 1 iterations are run, where in the k-th run, the k-th largest value will end up in its correct location. During each iteration, the algorithm simply compares all pairs of consecutive elements and swaps them if they are not sorted in increasing order. 

Bubble sort is not an efficient method; analyses of this method, as well as practical experiments, have shown this to be true. If the number of elements to sort is relatively small, it could be an option to consider, but if we want to sort elements in the order of the hundreds of thousands, it is better to use other methods.
*/

/*
* Bubble-sorts this ArrayList
    *this is for a member function of an ArrayList, you could also pass in the array/list for a stand alone function
*/
void ArrayList::bubbleSort()
{
	for (int i = 0; i < length - 1; i++)
		for (int j = 0; j < length - i - 1; j++)
			if (list[j] > list[j + 1])
			{
				//swap list[j] and list[j+1]
				int temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
}