#include <iostream>

using namespace std;

int main()
{
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;
	
	double income; 	//Annual income
	int years; 	   	//Years at current job
	
	//Get annual income and years at current job
	cout << "What is your annual income: ";
	cin >> income;
	cout << "Enter years worked at current job: ";
	cin >> years;
	
	//Determine if user is qualified for loan
	if (income >= MIN_INCOME || years > MIN_YEARS) {
		cout << "Congratulations! You qualify for a loan!\n\n";
	}
	else {
		cout << "You must earn at least $"
			 << MIN_INCOME << " or have been employed more than "
			 << MIN_YEARS << " years at your current job.\n\n";
	}
	
	system("Pause");
	return 0;
}
