#include <iostream>

using namespace std;

int main()
{
	double weight, height, BMI;
	
	cout << "What is your current weight in pounds: " << endl;
	cin >> weight;
	
	cout << "What is your current height in inches: " << endl;
	cin >> height;
	
	BMI = weight * 703 / (height * height);
	
	if (BMI > 25) {
		cout << "You are overweight";
	}
	else if (BMI < 18.5) {
		cout << "You are underweight";
	}
	else {
		cout << "You have optimal weight";
	}

 	return 0;
}

