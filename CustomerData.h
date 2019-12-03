// CustomerData class
// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes PG #983
//ITSE 2331-003--Jennifer Ayala--10/26/2019--Lab # 15-7
//This file is derived from the PersonData class & determines mailing list status by customer #--CustomerData.h


#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include <string>
// access the PersonData class:
# include "PersonData.h"
using namespace std;

//derive from PersonData class
class CustomerData : public PersonData
{
private:
    // Customer number
    int custNumber;
    
    // Include in mailing list?
   bool mailingList; 
   
public:

   //********************************************************
   // Constructor /overload with Parent Class & pass values *
   //********************************************************
   CustomerData(string ln, string fn, string a, string c, 
   		string s, string z, string p, int cn, bool ml) : 
		PersonData(ln, fn, a, c, s, z, p) 
   {
   		
   		//Customer Data:
   		custNumber = cn;
   		mailingList = ml; 	
   }

   //**********************************************
   // Default Constructor - set to 0/false        *
   //**********************************************
    CustomerData() : PersonData() 
	{
   	
   		custNumber = 0;
   		mailingList = false;
    }

   //**********************************************
   // Mutator functions/setter                    *
   //**********************************************
   	void setCustomerNumber(int cn){
   		custNumber = cn;
	   }

    void setMailingList(bool ml){
    	mailingList = ml;
	}
	  
   //**********************************************
   // Accessor functions /getter                  *
   //**********************************************
	int getCustomerNumber() const {
		return custNumber;
	}

	bool getMailingList() const {
		return mailingList;
	}

};

#endif


