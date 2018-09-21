#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
 {
 	
 	double rweight = 0.0;
  	double sum = 0.0;
  	double average;
  	double largest = 0.0;
  	double count = 0.0;
  	double min;
  	double max;
 	

	cout <<"Enter weight of rabbit by pound: " << endl;
 	cin >> rweight;
 	
 
	 	
 	while (rweight != 0)
	 {
 		sum = sum + rweight;
		count = count + 1;
		if (rweight > largest && rweight!= 0)
		{
			largest = rweight;
		}
		cout << "Enter weight of rabbit: or 0 to finish: " << endl;
 		cin >> rweight;
 		
	 }
  	
 	average = sum / count;
 	
		
 	cout << setiosflags(ios::fixed);
   	cout << setprecision(2);
							
	cout << "The average weight of rabbits is " << average << " pounds. " << endl;	
	cout << "The largest weight is " << largest	<< " pounds. " << endl;
	
	cout << setiosflags(ios::fixed);
   	cout << setprecision(0);
	
	cout << "There are " << count << " rabbits. " << endl;
 	
 	system("PAUSE");
	return 0;
}
