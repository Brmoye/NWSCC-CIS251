#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// constants for array size
const int NUM_SPEAKERS = 20;

// Speaker structure declaration
struct Speaker
{
	string name; 	// Speaker's name
	string phone; 	// Speaker's telephone number
	string topic;	// Speaker's speaking topic
	double fee; 	// Speaker's fee for speaking
};

// Function prototypes
void getInfo(Speaker &);
void showInfo(Speaker);

int main()
{
	int maxSpeaker = 0, choice, spk;
	Speaker list[NUM_SPEAKERS];
	
	do
	{
		cout << "~~~~~ Speakers' Bureau Menu ~~~~~";
		cout << "\n1. Enter new speaker information\n";
		cout << "2. Change speaker information\n";
		cout << "3. Display all speaker information\n";
		cout << "4. Exit the program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;
		
		// validate the menu choice
		while (choice < 1 || choice > 4)
		{
			cout << "Please Enter 1, 2, 3, or 4.\n";
			cin >> choice;
		}
		
		// process the user's choice
		switch (choice)
		{
			// enter new speaker information
			case 1:
				cin.get();
				getInfo(list[maxSpeaker]);
				cout << "You have enter information for speaker ";
				cout << "number " << maxSpeaker << endl << endl;
				maxSpeaker++;
				break;
			
			// change speaker information
			case 2:
				cout << "Speaker number: ";
				cin >> spk;
				
				// validate input
				while (spk < 0 || spk >= maxSpeaker)
				{
					cout << "ERROR: Invalid Speaker Number\n";
					cout << "Speaker number: ";
					cin >> spk;
				}
				
				cin.get();
				getInfo(list[spk]);
				cout << endl;
				break;
				
			//display speaker information
			case 3:
				cin.get();
				cout << endl;
				for (int count = 0; count < maxSpeaker; count++)
				{
					showInfo(list[count]);
					cout << "-------------------------\n";
				}
				cout << endl;
				break;
			
			// say goodbye to the user
			case 4:
				cout << "Thank you for using this program. \n";
				system("Pause");
		}
	} while (choice != 4);

 	return 0;
}

// function getInfo
// this function gets the speaker info from the user, validates it,
// and stores it in the reference parameter s.

void getInfo(Speaker &s)
{
	// get the speaker's name
	cout << "\nSpeaker name: ";
	getline(cin, s.name);
	while (s.name.empty())
	{
		cout << "Please enter a name: ";
		getline(cin, s.name);
	}
	
	// get the speaker's telephone number
	cout << "Telephone: ";
	getline(cin, s.phone);
	while (s.phone.empty())
	{
		cout << "Please enter a telephone number: ";
		getline(cin, s.phone);
	}
	
	// get the speaker's speaking topic
	cout << "Speaking topic: ";
	getline(cin, s.topic);
	while (s.topic.empty())
	{
		cout << "Please enter a speaking topic: ";
		getline(cin, s.topic);
	}
	
	// get the speaker's fee
	cout << "Fee required: ";
	cin >> s.fee;
	while (s.fee < 0)
	{
		cout << "Please enter a value of 0 or greater: ";
		cin >> s.fee;
	}
	cin.get();
}

// function showInfo
// this function displays the data stored in the parameter s.

void showInfo(Speaker s)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Speaker name: " << s.name << endl;
	cout << "Telephone: " << s.phone << endl;
	cout << "Speaking Topic: " << s.topic << endl;
	cout << "Required fee: $" << s.fee << endl;
}




