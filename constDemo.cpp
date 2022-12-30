
/* 
	Author: Brian Moye
	Date: January 27, 2020
	Purpose: 	Calculate the circumference and area
				of a pool.
*/

#include <iostream>

using namespace std;

int main ()
{
	const double PI = 3.14159;
	double radius;
	double circum;
	double area;
	
	//Get radius from user
	cout << "Enter a radius: ";
	cin >> radius;
	
	//Calculate circumference and area
	circum = 2 * PI * radius;
	area = PI * radius * radius;
	
	//Display result to user
	cout << "The circumference of the pool is " 
		 << circum << endl;
	cout << "The area of the pool is "
		 << area << endl;
}
