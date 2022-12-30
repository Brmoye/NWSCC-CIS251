#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

double calcArrayAvg(const int [], int);
double findHighest(const int [], int);
double findLowest(const int [], int);

int main()
{
	const int ARRAY_SIZE = 12;
	int numbers[ARRAY_SIZE];
	int count = 0;
	int lowest;
	int highest;
	int total;
	double avg;
	ifstream inFile;
	string fileName;
	
	//open the file
	inFile.open("numbers.txt");
	
	//test for errors
	if (!inFile)
	{
		cout << "Error opening the file.\n";
		return 0;
	}
	
	//read data into array
	while (count < ARRAY_SIZE && inFile >> numbers[count])
		count++;
		
	inFile.close();
	
	//display and average numbers
	cout << "*** Number Data ***\n";
	for (int i = 0; i < count; i++)
	{
		cout << "Number #" << i + 1 << ": "
			 << numbers[i] << endl;
	}
	
	//display temperature average
	cout << fixed << showpoint << setprecision(1);
	avg = calcArrayAvg(numbers, count);
	cout << "\nThe average number is " << avg << endl;
	cout << "The highest number is " << findHighest(numbers, count) << endl;
	lowest = findLowest(numbers, count);
	cout << "The lowest number is " << lowest << endl;
	
	return 0;
}

double calcArrayAvg(const int num[], int size)
{
	int sum;
	double avg;
	
	for (int i = 0; i < size; i++)
	{
		sum += num[i]; //add current temp to sum
	}
	avg = sum / static_cast<double>(size);
	return avg;
}

double findHighest(const int num[], int size)
{
	int highNum = num[0];
	
	//find and display the highest number in the array
	for (int i = 0; i < size; i++)
	{
		if (highNum <= num[i])
		{
			highNum = num[i];
		}
	}
	return highNum;
}

double findLowest(const int num[], int size)
{
	int lowNum = num[0];
	
	//find and display the lowest number in the array
	for (int i = 0; i < size; i++)
	{
		if (lowNum > num[i])
		{
			lowNum = num[i];
		}
	}
	return lowNum;
}





