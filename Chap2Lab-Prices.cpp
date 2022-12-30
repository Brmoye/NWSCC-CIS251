/* 
	Author: Brian Moye
	Date: January 27, 2020
	Purpose: 	Calculate the subtotal, sales tax
				and total of a sale of five items.
*/

#include <iostream>

using namespace std;

int main()
{
	const double TAX = 0.07;
	double item1 = 15.95;
	double item2 = 24.95;
	double item3 = 6.95;
	double item4 = 12.95;
	double item5 = 3.95;
	double subtotal;
	double taxAmt;
	double total;
	
	//Calculate subtotal, tax amount, and total
	//subtotal is item1 + item2 + etc.
	subtotal = item1 + item2 + item3 + item4 + item5;
	//taxAmt is subtotal * tax constant
	taxAmt = subtotal * TAX;
	//total is subtotal + taxAmt
	total = subtotal + taxAmt;
	
	cout << "*** Sales Receipt ***\n";
	cout << "Item 1: $" << item1 << endl;
	//Output other four items prices here
	cout << "Item 2: $" << item2 << endl;
	cout << "Item 3: $" << item3 << endl;
	cout << "Item 4: $" << item4 << endl;
	cout << "Item 5: $" << item5 << endl;
	//Output subtotal
	cout << "Subtotal: " << subtotal << endl;
	//Output tax amount
	cout << "Tax amount: " << taxAmt << endl;
	//Output total
	cout << "Total: " << total << endl; 
}
