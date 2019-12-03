// PersonData class
// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes PG #983
//ITSE 2331-003--Jennifer Ayala--10/26/2019--Lab # 15-7
//This file defines the PersonData class--PersonData.h

#ifndef PERSONDATA_H
#define PERSONDATA_H
#include <string>
using namespace std;

class PersonData
{
private:
    // The person's last name
    string lastName;
    
    // The person's first name
    string firstName;
    
    // The person's address
    string address;
    
    // The person's city
    string city;
    
    // The person's state
    string state;
    
    // The person's ZIP code
    string zip;
    
    // Person's phone #:
    string phone;
   
public:

   //**********************************************
   // Constructor - passes parameters             *
   //**********************************************
   PersonData(string ln, string fn, string a, string c, string s, string z, string p)
   {
   		lastName = ln;
    	firstName = fn;
 		address = a;
    	city = c;
  		state = s;
  		zip = z;
  		phone = p;  	
   }

   //*************************************************
   // Default Constructor - set with empty strings   *
   //*************************************************
   	PersonData()
	{
   		lastName = "";
    	firstName = "";
 		address = "";
    	city = "";
  		state = "";
  		zip = "";
  		phone = "";  	
   }

   //**********************************************
   // Mutator functions/setter                    *
   //**********************************************   	
   	void setLastName(string ln){
   		lastName = ln;
	}

	void setFirstName(string fn){
		firstName = fn;	
	}

	void setAddress(string a){
		address = a;
	}

	void setCity(string c){
		city = c;
	}
	
	void setState(string s){
		state = s;
	}
	
	void setZip(string z){
		zip = z;
	}
	
	void setPhone(string p){
		phone = p;
	}

   //**********************************************
   // Accessor functions / getter                 *
   //**********************************************
   string getLastName() const {
   		return lastName;
   }
   
   string getFirstName() const {
   		return firstName;
   }
   
   string getAddress() const {
   		return address; 
   }
   
   string getCity() const {
   		return city;
   }
   
   string getState() const {
   		return state;
   }
   
   string getZip() const {
   		return zip; 
   }
   
   string getPhone() const {
   		return phone;
   }   
};

#endif


