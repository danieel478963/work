#pragma once
#include "Person.h"
class Student : public virtual Person {
private:
	int average ;
	string institute ;
public :
	Student() ; //def ctor 
	Student( int average , string institute , string name , long id , int age ) ; //value ctor
	void set_average( int average ) ; //set average
	void set_institute( string institute ); //set institute
	int get_average() ; //get average
	string get_institute() ; //get insititute
	virtual ~Student() ;//dtor 
	virtual void print() ; //Method of print 
} ; //end class Student
