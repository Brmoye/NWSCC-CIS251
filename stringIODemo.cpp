#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	string city;
	
	cout << "Please enter your full name: ";
	getline(cin, name);
	cout << "Enter the city in which you live: ";
	getline(cin, city);
	
	cout << "Welcome, " << name << " from the city of " 
		 << city << endl;

	system("Pause");
	return 0;
}

