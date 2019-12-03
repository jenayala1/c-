//ITSE 2331-003--Jennifer Ayala--11/29/2019--Lab #20
//Programming Challenge #20-3 QuickSort Template PG #1255 
//this program demonstrates the QuickSort algorithm as a template to use any data type--quick_sort.cpp


#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes:
template<class T>
void quickSort(T [], int, int);

template<class T>
int partition(T[], int, int);

template<class T>
void Swap(T&, T&);


int main() 
{
	const int SIZE = 10;	 //array size
	int count; 				// loop counter
	int array[SIZE] = {7, 3, 9, 2, 0, 1, 8, 4, 6, 5};
	
	//Display the array contents:
	for (count = 0; count < SIZE; count++)
		cout << array[count] << " ";
	cout << endl;	
	
	//Sort the array:
	quickSort(array, 0, SIZE -1);
	
	for (count = 0; count < SIZE; count++)
		cout << array[count] << " ";
	cout << endl;	 
	
	return 0;
}

//***************** QUICKSORT ************************//
//	quickSort uses the quicksort algorithm to sort  //
//  set, from set[start] through set[end]          //
//************************************************//
template<class T>
void quickSort(T set[], int start, int end){
	int pivotPoint;
	
	if (start < end){
		//get the pivot point
		pivotPoint = partition(set, start, end);
		
		//sort 1st sublist:
		quickSort(set, start, pivotPoint - 1);
		
		//sort 2nd sublist:
		quickSort(set, pivotPoint + 1, end);
	}
}

//************** PARTITION FUNCTION *****************//
// partition selects the value in the middle of the //
// array set as the pivot. The list is rearranged  //
// so all the values less than the pivot are on   //
// its left & all the values greater than pivot  //
// are on its right                             //
//*********************************************//
template<class T>
int partition(T set[], int start, int end)
{
	//set pivot index:

	int mid = (start + end) / 2;
	Swap(set[start], set[mid]);
	int pivotIndex = start;
	int pivotValue = set[start];
	
	for(int scan = start + 1; scan <= end; scan++)
	{
		if(set[scan] < pivotValue){
			pivotIndex++;
			swap(set[pivotIndex], set[scan]);
		}	
	}	
	Swap(set[start], set[pivotIndex]);
	return pivotIndex;
	
}

//******************SWAP FUNCTION********************//
//	swap simply exchanges the contents of value 1  //
//  value2                                        //
//***********************************************//
template<class T>
void Swap(T &value1, T &value2){
	T temp = value1;
	value1 = value2;
	value2 = temp;
}



