#pragma once
#include "Person.h"
class Employee : public virtual Person {
private:
	float salary ;
public:
	Employee() ; //def ctor 
	Employee( float salary , string name , long id , int age ) ; //value ctor
	void set_salary( float salary ) ; //get salary
	float get_salary() ; //set salary
	virtual ~Employee() ; //dtor 
	virtual void print() ; //Method of print 
}; //end class Employee
