//ITSE 2331-003--Jennifer Ayala--11/29/2019--Lab #20 
//Programming Challenge #20-5 Recursive Multiplication PG #1255 
//this program accepts 2 values & returns the product of each parameter --recursive_multiplication.cpp

#include <iostream>
#include <iomanip>

using namespace std;

//function prototype:
int multiplyVals(int, int);
	
int main()
{
	int x, y;
	
	cout << "Please enter two integers to multiply " << endl;
	cin >> x >> y;
	
	cout << "The product of " << x << " times " << y << " is: ";
	cout << multiplyVals(x, y) << endl;
	
	return 0;
}

//************** Recursive Multiplication Function *************//
//	This function takes in 2 parameters & returns the value of  //
// x times y - performed as repeated addition                   //
//*************************************************************//

int multiplyVals(int x, int y){
	// factor values of 0:
	if ( x == 0 || y ==0)
		return 0;
	if ( y > 0){
		//recursively return positive number for "y"
		return x + multiplyVals(x, --y);
	} else {
		return -multiplyVals(x, -y);
	}
	
}
