//ITSE 2331-003--Jennifer Ayala--11/29/2019--Lab #20
//Programming Challenge #20-2 Recursive Conversion PG #1255 
// Convert while loop function to a recursive function-- recursive_conversion.cpp

#include <iostream>
using namespace std;

//************************************************************//
//********************Recursive Function*********************//
//
	void sign (int n)
	{
		if( n > 0){
			cout << "No Parking\n";
			sign(--n);
		}
	}

int main() 
{
	int number;
	cout << "Enter an integer " << endl;
	cin >> number;
	
	//call the sign function with user input & display :
	sign(number);
	
	return 0;
}


