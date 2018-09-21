#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
   double meal_price;
   double tip;
   double total_charge;
   
   cout << "Enter the meal price ";
   cin >> meal_price; 
   
   tip = meal_price * .15;
   total_charge = meal_price + tip;
   
   cout << "The amount of the tip is $" <<  tip << endl; 
   cout << "The total meal charge is $" << total_charge << endl;
   system("PAUSE");
   return 0;
}
