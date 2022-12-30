#include <iostream>

using namespace std;

int main()
{
	int begInv, 	//Beginning inventory
		sold, 		//Widgets sold
		store1, 	//Store 1 inventory
		store2,		//Store 2 inventory
		store3;		//Store 3 inventory
		
	//Get beginning inventory
	cout << "What is the beginning inventory: ";
	cin >> begInv;
	
	//Set beginning inventory for all stores
	store1 = store2 = store3 = begInv;
	
	//Get number of widgets sold at each store
	cout << "How many widgets has Store 1 sold: ";
	cin >> sold;
	store1 -= sold; //Functionally equivalent to store1 = store1 - sold
	
	cout << "How many widgets has Store 2 sold: ";
	cin >> sold;
	store2 -= sold;
	
	cout << "How many widgets has Store 3 sold: ";
	cin >> sold;
	store3 -= sold;

	//Display current inventory of each store
	cout << "\n~~~ Current Store Inventories ~~~\n";
	cout << "Store 1: " << store1 << endl;
	cout << "Store 2: " << store2 << endl;	
	cout << "Store 3: " << store3 << endl << endl;
	
	system("Pause");
	return 0;
}




