//ITSE 2331-003--Jennifer Ayala--11/29/2019--Lab #20-1 
//Programming Challenge #20-1 Iterative Factoriaal PG #1255 
// Use iterative functions instead of recursive, to calculate a factorial--iterative_factorial.cpp

#include <iostream>
using namespace std;

/*this file runs the program and defines the functions */

//Function prototype
unsigned long factorial(int);

int main() 
{
	int number;
	
	//retrieve number from user input:
	cout << "Enter an integer value to calculate its factorial: " << endl;
	cin >> number;
	
	// display the factorial of user input:	
	cout << "The factorial of " << number << " is " ;
	cout << factorial(number) << endl;
	
	return 0;
}

//************************************************************************//
// Definition of factorial, using an iterative function to calculate the  //
// factorial of the parameter n										      //
//************************************************************************//

unsigned long factorial(int n)
{
	unsigned long fact = 1;
	for (int i = 1; i <= n; i++)
		fact =  fact * i;	
	return fact;
}	
