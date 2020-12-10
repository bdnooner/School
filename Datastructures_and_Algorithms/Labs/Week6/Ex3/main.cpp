#include <iostream>
#include "SimpleBag.h"
#include "time.h"

using namespace std;

int main()
{
	SimpleBag bst_bag;

	srand((unsigned int)time(0));

	cout << "Bag empty: " << bst_bag.isEmpty() << endl;

	//populate random values into the bag
	cout << "Populating bag...\n";
	for (int i=0; i < 40; i++) bst_bag.add(rand()%20);

	//check if bag still shows as empty
	cout << "\nBag empty: " << bst_bag.isEmpty() << endl;

	//Print contents of bag
	cout << "Contents of Bag:\n";
	bst_bag.print();

	//add item to bag
	int num;
	cout << "What integer do you want to add to the bag:\t";
	cin >> num;
	cout << endl;

	bst_bag.add(num);

	//Count the number times a value is in the bag
	num = rand()%20;
	cout << "Number of times that the value " << num << " is stored in the bag:\t" 		<< bst_bag.count(num) << endl;

	//Clear the bag
	cout << "Clearing the bag...\n";
	bst_bag.clear();

	//Checking if bag is empty
	cout << "Bag empty: " << bst_bag.isEmpty() << endl;

	cout << "\n\nPress any key to quit...\n";
	cin.ignore();
	cin.clear();
	cin.get();


	return 0;
}