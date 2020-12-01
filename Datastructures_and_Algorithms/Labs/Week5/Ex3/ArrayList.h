/********************************************
*  Week 5 lesson:                           *
*   ArrayList class with search algorithms  *
*********************************************/

/*
 * Class implementing an array based list. Sequential search, sorted search, and
 * binary search algorithms are implemented also.
*/
class ArrayList
{
	public:
		ArrayList ();
		ArrayList(int size);
		~ArrayList();
		bool isEmpty();
		bool sequentialSearch(int);
		bool sortedSearch(int);
		bool binarySearch(int);
		void display();
		void add(int);
		void bubbleSort();
		void quicksort();
		void populate();
		int getSize();
		int getValue(int n);

		

	private:
		void quicksort(int, int);
		int findPivotLocation(int, int);
		int SIZE;		//size of the array that stores the list items
		int  *list;		//array to store the list items
		int  length;	//amount of elements in the list
};