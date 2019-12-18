#pragma once
#include "Student.h"
#include "Employee.h"
class WorkingStudent : public Employee,Student{
private:
	bool same_institute ;
public:
	WorkingStudent() ; //def ctor 
	WorkingStudent( int same_institute , int average , string institute , float salary , string name , long id , int age ) ; //value ctor
	void set_same_institute( bool same_institute ) ; //get same institute
	bool get_same_institute() ; //set same institute
	virtual ~WorkingStudent() ; //dtor 
	virtual void print() ; //Method of print 
} ; //end class Employee
