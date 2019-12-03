// Specification file for Circle derived class
// Specification file for BasicShape base class
//ITSE 2331-003--Jennifer Ayala--10/26/2019--Lab # 15-13 PG 986
// This class defines the circle class--Circle.h

#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"

class Circle : public BasicShape
{
private:
    // x, y, radius
    long centerX;
    long centerY;
    double radius;
    
public:
    // functions: constructor, x, y, area
    Circle(long x, long y, double r){
    	centerX = x;
    	centerY = y;
    	radius = r;
    	
    	setArea();
	}
	
	//getter functions
    long getCenterX() const {
		return centerX;
	}

	long getCenterY() const {
		return centerY;
	}
	
	//setter function:
	virtual void setArea(){
		area = 3.14159 * radius * radius;
	}

};

#endif
