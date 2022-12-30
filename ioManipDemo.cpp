#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double day1, day2, day3, total, projSales;
	
	//Get sales data for each day
	cout << "Enter sales for day 1: ";
	cin >> day1;
	cout << "Enter sales for day 2: ";
	cin >> day2;
	cout << "Enter sales for day 3: ";
	cin >> day3;
	
	//Calculate total sales
	total = day1 + day2 + day3;
	projSales = total * 30;
	
	//Display sales info
	cout << setprecision(2) << showpoint << fixed;
	cout << "\n~~~ Sale Info ~~~\n";
	cout << "-----------------\n";
	cout << "Day 1: $" << setw(12) << right << day1 << endl;
	cout << "Day 2: $" << setw(12) << right << day2 << endl;
	cout << "Day 3: $" << setw(12) << right << day3 << endl;
	cout << "-----------------\n";
	cout << "Total: $" << setw(12) << right << total << endl;
	cout << "Projected Sales: $" << setw(12) << right << projSales << endl << endl;
	
	system("Pause");
	return 0;
}

