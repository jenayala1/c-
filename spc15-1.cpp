// Chapter 15, Programming Challenge 1: Employee and ProductionWorker classes
#include <iostream>
#include <iomanip>
#include <string>
#include "ProductionWorker.h"

using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
    // Create ProductionWorker object using default constructor
    ProductionWorker worker1;
    worker1.setEmployeeName("John Doe");
	worker1.setEmployeeNum(87653);
	worker1.setHireDate(10, 27, 2005);
	worker1.setShiftNumber(2);
	worker1.setPayRate(23.56);
	
	// Call displayInfo to print ProductionWorker's contents
	displayInfo(worker1);

    // Create ProductionWorker object by passing all the employee's data as arguments to the constructor
    ProductionWorker worker2 ("Jane Smith", 23901, 5, 10, 2015, 1, 18.78);
    
	// Call displayInfo to print ProductionWorker's contents
	displayInfo(worker2);
	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	//cout << "Shift: " 
	//	 << e.getShiftName() << endl; // optional
	cout << "Shift number: " 
		 << e.getShiftNumber() << endl;
	cout << "Pay rate: " 
		 << e.getPayRate() << endl << endl;
}
