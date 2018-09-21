#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
 {
 	
 	double price;
 	double total = 0;
 	
 	cout <<"Enter price of item or 0 to finish: " << endl;
 	cin >> price;
 	
 	while (price != 0){
 		total = total + price;
 		cout <<"Enter price of item or 0 to finish: " << endl;
 		cin >> price;
	 }
  	
 	double grandTotal = total + (total * .08); 	
 	
 	cout << setiosflags(ios::fixed);
   	cout << setprecision(2);
 		
 	cout << "The total cost before tax is: $ " << total << endl;	
 	cout << "The grand total with tax is: $ " << grandTotal << endl;
 	
 	system("PAUSE");
	return 0;
}
