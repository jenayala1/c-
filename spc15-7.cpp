// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes PG #983
//ITSE 2331-003--Jennifer Ayala--10/26/2019--Lab # 15-7
//Customer class for mailing list, this file runs the program--spc15-7.cpp

#include <iostream>
#include <iomanip>
#include "PersonData.h"
#include "CustomerData.h"

using namespace std;

// Function prototype
void displayCustomer(CustomerData);

int main()
{
   // Create a CustomerData object and pass arguments
   // to the constructor.
	CustomerData customer1;
	customer1.setLastName("Stark");
	customer1.setFirstName("Tony"); 
	customer1.setAddress("100 Main St");
	customer1.setCity("New York");
	customer1.setState("NY");
	customer1.setZip("12982"); 
	customer1.setPhone("212-299-1000");
	customer1.setCustomerNumber(101);
	customer1.setMailingList(true);		
   
   // Display the object's data.
   cout << "Customer #1\n"
        << "-----------\n";
   displayCustomer(customer1);
   
   // Create another CustomerData object using the default
   // constructor and mutator functions.
	CustomerData customer2;
	customer2.setLastName("Banner");
	customer2.setFirstName("Bruce"); 
	customer2.setAddress("1 Central Park West");
	customer2.setCity("New York");
	customer2.setState("NY");
	customer2.setZip("10023"); 
	customer2.setPhone("212-555-1212");
	customer2.setCustomerNumber(614);
	customer2.setMailingList(false);

   // Display the object's data.
   cout << "Customer #2\n"
        << "-----------\n";
   displayCustomer(customer2);
   return 0;
}

//******************************************************
// The displayCustomer function accepts a CustomerData *
// object as its argument and displays the object's    *
// data.                                               *
//******************************************************

void displayCustomer(CustomerData c)
{
   // Display all the data but mailing list...
   cout << "Last Name: " << c.getLastName() << endl
        << "First Name: " << c.getFirstName() << endl
        << "Address: " << c.getAddress() << endl
        << "City: " << c.getCity() << endl
        << "State: " << c.getState() << endl
        << "ZIP: " << c.getZip() << endl 
        << "Customer Number: " 
        << c.getCustomerNumber() << endl
        << "Mailing List? ";

   // Dispaly Yes or No for mailing list.
   if (c.getMailingList())
        cout << "Yes\n\n";
   else
         cout << "No\n\n";
}
