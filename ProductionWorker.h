//ITSE 2331-003--Jennifer Ayala--10/25/2019--Lab #15-1 
//Programming Challenge #1 - Employee & ProductionWorker Class PG #981-982 
// Design a class named ProductionWorker derived from Employee -- ProductionWorker.h


// Specification file for the ProductionWorker Class
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"
#include <string> //access string library
#include <cstdlib>
#include <iostream>

using namespace std;

//derived from the Employee class
class ProductionWorker : public Employee
{
private:
    // The worker's shift
    int shift;
      
    // The worker's hourly pay rate
    double payRate;
    

public:
	// Default constructor
	ProductionWorker() : Employee() {
		shift = 1;
		payRate = 0.0;
	}

	// Constructor - call overloaded constructor of the base class, arguments of both classes
	ProductionWorker(string n, int num, int d, int m, int y, int s, double pr) : Employee(n, num, d, m, y)
	{	
		//check validity
		if((s != 1 && s != 2) || pr < 0){
			cout << "Invalid entry for shift or pay rate" << endl;
			
		} else {
			//set data if passes validation
			shift = s;
			payRate = pr;
		}
	}

	// 2 Mutators - setter function
	void setShiftNumber(int s){
		shift = s;		
		
	}

	void setPayRate(double pr){
		payRate = pr;		
	}

	// 2 Accessors - getter function
	int getShiftNumber() const {
		return shift;
	}
	
	double getPayRate() const {
		return payRate;
	}
	
	
};

#endif
