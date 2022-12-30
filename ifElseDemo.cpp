#include <iostream>

using namespace std;

int main()
{
	double numerator, denominator, quotient;
	
	cout << "Enter a numerator: ";
	cin >> numerator;
	cout << "Enter a denominator: ";
	cin >> denominator;
	
	if (denominator == 0) {
		cout << "Division by 0 is not possible. \n"
		 	 << "Please enter any number except 0\n\n";
		main();
	}
	else {
		
		quotient = numerator / denominator;
		cout << endl;
		cout << numerator << " / " << denominator 
		 	 << " equals " << quotient << endl << endl;
	}
		
	
	system("Pause");
	return 0;
}
