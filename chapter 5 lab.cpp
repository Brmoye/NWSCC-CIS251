#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double startingOrganisms, avgDailyIncrease, numDaysMultiply, finalOrganisms;
	
	cout << "Starting number of organisms: ";
	cin >> startingOrganisms;
	
	if (startingOrganisms < 2) {
		cout << "Starting organisms must be at least 2 or more: ";
		cin >> startingOrganisms;
	}
	
	cout << "Average daily population increase percentage: ";
	cin >> avgDailyIncrease;
	
	if (avgDailyIncrease < 0) {
		cout << "The population increase percentage cannot be negative: ";
		cin >> avgDailyIncrease;
	}
	
	cout << "Number of days to multiply: ";
	cin >> numDaysMultiply;
	
	if (numDaysMultiply < 1) {
		cout << "Number of days to multiply must be at least 1: ";
		cin >> numDaysMultiply;
	}
	finalOrganisms = startingOrganisms;
	avgDailyIncrease = avgDailyIncrease / 100;
	for (int days = 0; days != numDaysMultiply; days++) {
		finalOrganisms += startingOrganisms * avgDailyIncrease;
		cout << "Day " << days + 1 << " organisms: " << round(finalOrganisms) << endl;
	}
	
	
 	return 0;
}

