// Specification file for BasicShape base class
//ITSE 2331-003--Jennifer Ayala--10/26/2019--Lab # 15-13 PG 986
// This class defines a basic shape with functions/methods--BasicShape.h

#ifndef BASICSHAPE_H
#define BASICSHAPE_H

class BasicShape
{
protected:
    // area
    double area;
    
public:
    // functions: area
    virtual void setArea() = 0;
    
    double getArea() const {
    	return area;
	}
    
};

#endif
