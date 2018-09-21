#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   double celsius;
   double farenheit;
      
   cout << "Enter the celsius temperature ";
   cin >> celsius; 
   
   farenheit = (9.0/5.0) * celsius + 32;
   
   cout << "The farenheit temperature is " <<  farenheit << endl; 
  
   system("PAUSE");
   return 0;
}
