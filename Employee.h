//ITSE 2331-003--Jennifer Ayala--10/25/2019--Lab #15-1 
//Programming Challenge #1 - Employee & ProductionWorker Class PG #981-982 
// Design a class named Employee-- Employee.h

// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using namespace std;

class Employee
{
	private:
	    // Employee name
		string employeeName;
		    
	    // Employee number
	    int employeeNum;
		
		// Hire date
		int hireYr;  	//int variable to define year hired
		int hireMo; 	// int variable to define month hired
		int hireDay; 	// int variable to define day hired

	public:
		// Default constructor
		Employee()
		{
			//assign empty value to each variable
			employeeName = "";
			employeeNum = 0;
			hireDay= 0;	
			hireMo = 0;	
			hireYr = 0;				
		}

	// Constructor - with parameters:
	Employee (string n, int num, int d, int m, int y){
		employeeName = n;
		employeeNum - num;
		hireDay = d;
		hireMo = m;
		hireYr = y;		
	}

	// 3 Mutators - setter functions
	void setEmployeeName(string n){
		employeeName = n;
	}
	
	void setEmployeeNum(int num){
		employeeNum = num;
	}
	
	void setHireDate (int d, int m, int y)
	{
			//set hire date to:
			hireDay = d;
			hireMo = m;
			hireYr = y;
	}
	
	// 3 Accessors -  getter functions
	string getName() const {
		return employeeName;
	}
	
	int getNumber() const {
		return employeeNum;
	}
	
	string getHireDate() const {
		//create empty string for later use to hold hire date
		string hDate = "";
		
		//convert int variable to string & concatenate into single variable
		hDate = to_string(hireDay) + "/" + to_string(hireMo) + "/" + to_string(hireYr);
		
		//return new string variable holding the hire date:
		return hDate;
		
	}
};

#endif
