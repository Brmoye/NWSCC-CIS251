#include <iostream>

using namespace std;

int main()
{
	double regularWages;
	double basePayRate;
	double hoursWorked;
	double overtimeWages;
	double overtimePayRate;
	double overtimeHours;
	double totalWages;
	
	cout << "Enter the hours worked: ";
	cin >> hoursWorked;
	cout << "Enter the pay rate: ";
	cin >> basePayRate;
	
	//Calculate overtime pay rate 
	overtimePayRate = basePayRate * 1.5;
	
	//Calculate overtime hours
	overtimeHours = hoursWorked - 40;
	overtimeWages = overtimePayRate * overtimeHours;
	
	//Calculate total wages
	totalWages = 40 * basePayRate + overtimeWages;
	
	//Display results
	cout << "Regular pay: " << 40 * basePayRate << endl;
	cout << "Overtime pay: " << overtimeWages << endl;
	cout << "Total pay: " << totalWages << endl;
	
	
	return 0;
}
