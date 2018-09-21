#include<stdio.h>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
 {
 	
 	int number = 1;
 	int min = 1;
 	int max = 99;
 	int sum = 0;
 	

	for (number = min; number <= max; number++)	
	 	if (number % 2 == 0 )
	 		sum = sum + 0;
	 		
	 	else
	 		sum = sum + number;
						
	cout << "The sum of numbers 1 - 99 is " << sum << endl;		
 	
 	system("PAUSE");
	return 0;
}
