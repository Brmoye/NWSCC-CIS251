#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

double presentValue(double, double, int);

int main()
{
	double value, futureValue, annualInterestRate;
	int numOfYears;
	
	cout << "Amount desired: " << endl;
	cin >> futureValue;
	
	cout << "Interest rate: " << endl;
	cin >> annualInterestRate;
	
	cout << "Years to invest: " << endl;
	cin >> numOfYears;
	
	
	annualInterestRate = annualInterestRate / 100;
	
	value = presentValue(futureValue, annualInterestRate, numOfYears);
	
	cout << value << endl;
	
	system("Pause");
	main();
}

double presentValue(double futureValue, double annualInterestRate, int numOfYears) 
	{
		return futureValue / pow((1 + annualInterestRate), numOfYears);
	}
