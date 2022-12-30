#include <iostream>

using namespace std;

int main()
{
	const int A_SCORE = 90,
			  B_SCORE = 80,
			  C_SCORE = 70,
			  D_SCORE = 60;
			  
	int testScore;
	
	cout << "Enter your test score: ";
	cin >> testScore;
	
	if (testScore < 0 || testScore > 100) {
		cout << "ERROR: Invalid test score. Please re-enter score.\n";
		main();
	}
	else {
		if (testScore >= A_SCORE) 
			cout << "Your grade is A.\n";
		else if (testScore >= B_SCORE) 
				cout << "Your grade is B.\n";
		else if (testScore >= C_SCORE) 
			cout << "Your grade is C.\n";	
		else if (testScore >= D_SCORE) 
				cout << "Your grade is D.\n";
		else
			cout << "Your grade is F.\n";
	}

	system("Pause");
	return 0;
}

