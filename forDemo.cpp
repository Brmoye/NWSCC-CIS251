#include <iostream>

using namespace std;

int main()
{
	unsigned int num, factorial = 1;
	
	cout << "Enter a number for which to calculate a factorial: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		factorial = factorial * i;
	}
	
	cout << "The factorial of " << num << " is " << factorial << endl;
	
	system("Pause");
	return 0;
}

