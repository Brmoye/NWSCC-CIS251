#include <iostream>
#include <string>

using namespace std;

//Class definition
class Room
{
	private:
		double width;
		double length;
	public:
		void setWidth(double);
		void setLength(double);
		double getWidth() const;
		double getLength() const;
		double getArea() const;
};

int main()
{
	Room room;	//Create an object from a class
	double roomWidth;
	double roomLength;
	
	cout << "This program calculates the area of a room.\n";
	cout << "Enter the width of the room: ";
	cin >> roomWidth;
	cout << "Enter the length of the room: ";
	cin >> roomLength;
	
	//Store data in room object
	room.setWidth(roomWidth);
	room.setLength(roomLength);
	
	//Use data in the object
	cout << "A room of " << room.getWidth() << " feet by " << room.getLength()
		<< " feet will have an area of " << room.getArea() << " square feet.\n\n";

	system("Pause");
	return 0;
}

//Class definitions
void Room::setWidth(double w)
{
	width = w;
}

void Room::setLength(double l)
{
	length = l;
}

double Room::getWidth() const
{
	return width;
}

double Room::getLength() const
{
	return length;
}

double Room::getArea() const
{
	return width * length;
}
