#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Patient
{
	private:
		string firstName;
		string middleName;
		string lastName;
		string address;
		string city;
		string state;
		string zip;
		string phone;
		string emergencyContactName;
		string emergencyTelephone;
	
	public:
		// constructor
		Patient(); // default constructor
		Patient(string, string, string, string, string, string, string, string, string, string);
		
		// accessor methods
		string getFirstName() const 	// an inline method
			{ return firstName; }
			
		string getMiddleName() const 	// an inline method
			{ return middleName; }
		
		string getLastName() const 	// an inline method
			{ return lastName; }
			
		string getAddress() const 	// an inline method
			{ return address; }
			
		string getCity() const 	// an inline method
			{ return city; }
			
		string getState() const 	// an inline method
			{ return state; }
			
		string getZip() const 	// an inline method
			{ return zip; }
			
		string getPhone() const 	// an inline method
			{ return phone; }
			
		string getEmergencyContactName() const 	// an inline method
			{ return emergencyContactName; }
			
		string getEmergencyTelephone() const 	// an inline method
			{ return emergencyTelephone; }
			
		// mutator method prototypes - not inline
		
		void setFirstName(string);
		void setMiddleName(string);
		void setLastName(string);
		void setAddress(string);
		void setCity(string);
		void setState(string);
		void setZip(string);
		void setPhone(string);
		void setEmergencyContactName(string);
		void setEmergencyTelephone(string);
};

class Procedure
{
	private:
		string operationName;
		string date;
		string doctorName;
		double cost;
		
	public:
		// constructor
		Procedure(); // default constructor
		Procedure(string, string, string, double);
		
		// accessor methods
		string getOperationName() const 	// an inline method
			{ return operationName; }
			
		string getDate() const 	// an inline method
			{ return date; }
			
		string getDoctorName() const 	// an inline method
			{ return doctorName; }
			
		double getCost() const 	// an inline method
			{ return cost; }
			
		// mutator method prototypes - not inline
		void setOperationName(string);
		void setDate(string);
		void setDoctorName(string);
		void setCost(double);
};

int main()
{
	string firstName, middleName, lastName, address, city, state, zip, phone, emergencyContactName, emergencyTelephone; // variable declaration
	double totalCost = 0.00;
	
	
	Patient patient1("John", "Nameless", "Doe", "123 Some St.", "Florence", "AL", "35633", "256-555-1234", "No Emergency Contact", "No Emergency Number");
	Procedure procedure1("Physical Exam", "2020-04-27", "Dr. Irvine", 250.00);
	Procedure procedure2("X-ray", "2020-04-27", "Dr. Jamison", 500.00);
	Procedure procedure3("Blood test", "2020-04-27", "Dr. Smith", 200.00);
	
	
	cout << patient1.getFirstName() << " " << patient1.getMiddleName() << " " << patient1.getLastName() << endl;
	cout << patient1.getAddress() << endl;
	cout << patient1.getCity() << ", " << patient1.getState() << " " << patient1.getZip() << endl;
	cout << patient1.getPhone() << endl << patient1.getEmergencyContactName() << endl << patient1.getEmergencyTelephone()
	 << endl << endl;
	
	cout << "Procedure #1: \n";
	cout << "Procedure Name: " << procedure1.getOperationName() << endl 
	<< "Date of procedure: " << procedure1.getDate() << endl 
	<< "Attending Physician: " << procedure1.getDoctorName() << endl 
	<< "Cost of procedure: " << procedure1.getCost() << endl << endl;
	
	cout << "Procedure #2: \n";
	cout << "Procedure Name: " << procedure2.getOperationName() << endl 
	<< "Date of procedure: " << procedure2.getDate() << endl 
	<< "Attending Physician: " << procedure2.getDoctorName() << endl 
	<< "Cost of procedure: " << procedure2.getCost() << endl << endl;
	
	cout << "Procedure #3: \n";
	cout << "Procedure Name: " << procedure3.getOperationName() << endl 
	<< "Date of procedure: " << procedure3.getDate() << endl 
	<< "Attending Physician: " << procedure3.getDoctorName() << endl 
	<< "Cost of procedure: " << procedure3.getCost() << endl << endl;

	totalCost += procedure1.getCost();
	totalCost += procedure2.getCost();
	totalCost += procedure3.getCost();
	
	cout << "The total cost for all procedures: " << totalCost << endl;
}

Patient::Patient() 	//default constructor
{
	firstName = "Unknown";
	middleName = "Unknown";
	lastName = "Unknown";
	address = "Unknown";
	city = "Unknown";
	state = "Unknown";
	zip = "Unknown";
	phone = "Unknown";
	emergencyContactName = "Unknown";
	emergencyTelephone = "Unknown";
}

Patient::Patient(string newFirstName, string newMiddleName, string newLastName, string newAddress, string newCity, string newState, string newZip, string newPhone, string newEmergencyContactName, string newEmergencyTelephone)
{
	firstName = newFirstName;
	middleName = newMiddleName;
	lastName = newLastName;
	address = newAddress;
	city = newCity;
	state = newState;
	zip = newZip;
	phone = newPhone;
	emergencyContactName = newEmergencyContactName;
	emergencyTelephone = newEmergencyTelephone;
}

void Patient::setFirstName(string newName)
{
	firstName = newName;
}

void Patient::setMiddleName(string newName)
{
	middleName = newName;
}

void Patient::setLastName(string newName)
{
	lastName = newName;
}

void Patient::setAddress(string newAddress)
{
	address = newAddress;
}

void Patient::setCity(string newCity)
{
	city = newCity;
}

void Patient::setState(string newState)
{
	state = newState;
}

void Patient::setZip(string newZip)
{
	zip = newZip;
}

void Patient::setPhone(string newPhone)
{
	phone = newPhone;
}

void Patient::setEmergencyContactName(string newEmergencyContactName)
{
	emergencyContactName = newEmergencyContactName;
}

void Patient::setEmergencyTelephone(string newEmergencyTelephone)
{
	emergencyTelephone = newEmergencyTelephone;
}

Procedure::Procedure() // default constructor
{
	operationName = "Unknown";
	date = "Unknown";
	doctorName = "Unknown";
	cost = 0.00;
}

Procedure::Procedure(string newOperationName, string newDate, string newDoctorName, double newCost)
{
	operationName = newOperationName;
	date = newDate;
	doctorName = newDoctorName;
	cost = newCost;
}

void Procedure::setOperationName(string newOperationName)
{
	operationName = newOperationName;
}

void Procedure::setDate(string newDate)
{
	date = newDate;
}

void Procedure::setDoctorName(string newDoctorName)
{
	doctorName = newDoctorName;
}

void Procedure::setCost(double newCost)
{
	cost = newCost;
}

