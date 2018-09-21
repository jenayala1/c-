#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   double american_dollars;
   double canadian_dollars;
   
   cout << "Enter the amount of American dollars" ;
   cin >> american_dollars; 
   
   canadian_dollars = american_dollars * 1.27;
   
   cout << "The amount of Candian Dollars is " <<  canadian_dollars << endl; 
   system("PAUSE");
   return 0;
}
