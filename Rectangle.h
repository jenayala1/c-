// Specification file for Rectangle derived class
// Specification file for BasicShape base class
//ITSE 2331-003--Jennifer Ayala--10/26/2019--Lab # 15-13 PG 986
// This class defines the Rectangle class--Rectangle.h


#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape
{
private:
    // length, width
    long length;
    long width;
    
public:
    // functions: constructor, width, length, area
    Rectangle (long l, long w){
		length = l;
		width = w;
		
		setArea();
	}
	
	//getter functions:
	virtual void setArea() {
		area = length * width;
	}
    
};

#endif
