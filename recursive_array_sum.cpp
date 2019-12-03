//ITSE 2331-003--Jennifer Ayala--11/30/2019--Lab #20 
//Programming Challenge #20-4 Recursive Array Sum PG #1255 
//this program accepts an array of integers & recursively calculates the sum -- recursive_array_sum.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int sum(int[], const int);
 
int main() 
{
	const int SIZE = 5;
	int array[SIZE]= {23, 5, 8, 11, 3};

	cout << "There are " << SIZE << " numbers in the array. " << endl;
	cout << "The numbers in the array are: " ;
	for (int i = 0; i < SIZE; i++){
		cout << array[i] << ", " ;
	}
	cout << endl;
	cout << "The sum of the array is: ";
	cout << sum(array, SIZE) << endl;

	return 0;
}

//******************* Array Sum Function ********************** //
//  Accept an array of integers & a number indicating the       //
//  number of elements as arguments.  Function recursively      //
// calculates the sum of all elements in the array              //
//**************************************************************//

int sum(int array[], const int SIZE){
	//1st ensure there array is more than 0
	
	if (SIZE > 0){
		// Sum the first <SIZE> -1 & add the sum with the last item
		return (sum(array, SIZE - 1) + array[SIZE - 1]);
	} else {
		return 0;
	}
	
}


 
