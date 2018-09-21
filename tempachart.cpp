#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   	double celcius = 0.0;   
   	double min = 0.0;
	double max = 100.0;
 	double csum;
 	double farenheit = ((9.0/5.0) * celcius) + 32.0;
 	
  	cout << "Celcius " << celcius << " = " << farenheit << " Farenheit" << endl;
 	
 	while (csum < max){
 		
 		celcius = celcius;
	 	csum = csum + (celcius + 10);
	 	farenheit = ((9.0/5.0) * csum) + 32.0;
	 		
	 	cout << "Celcius " << csum << " = " << farenheit << " Farenheit" << endl;
 		
	 }
 	
	 
	 	
	 		
	 		
			  		 
   system("PAUSE");
   return 0;
}
