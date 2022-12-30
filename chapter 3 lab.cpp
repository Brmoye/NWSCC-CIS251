#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	double adultTickets, childTickets, grossProfit, netProfitPercent, profitKept;
	string movieName;
	
	netProfitPercent = 0.2;
	
	cout << "Movie Name: ";
	getline(cin, movieName);
	cout << "Adult Tickets Sold: ";
	cin >> adultTickets;
	cout << "Child Tickets Sold: ";
	cin >> childTickets;
	
	grossProfit = adultTickets * 10 + childTickets * 6;
	
	profitKept = grossProfit * netProfitPercent;
	
	cout << setprecision(2) << showpoint << fixed << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~ Profit ~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << setw(30) << left << "Movie Name: " << setw(10) << right << "\"" << movieName << "\"" << endl;
	cout << "Gross Box Office Profit: " << setw(15) << right  << "$" << grossProfit << endl;
	cout << "Net Box Office Profit: " << setw(18) << right << "$" <<  profitKept << endl;
	cout << "Amount Paid to Distributor: " << setw(12) << right << "$" <<  grossProfit - profitKept << endl;
	
	system("Pause");
 	return 0;
}

