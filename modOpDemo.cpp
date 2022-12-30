#include <iostream>

using namespace std;

int main()
{
	int minutes, seconds, totalSeconds;
	
	cout << "Enter the total number of seconds you worked on the problem: ";
	cin >> totalSeconds;
	
	//Get number of minutes
	minutes = totalSeconds / 60;
	
	//Get number of left over seconds
	seconds = totalSeconds % 60;
	
	cout << "You worked on that problem for " << minutes 
		 << " minutes and " << seconds << " seconds." << endl;
	
	return 0;
}
