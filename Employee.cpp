#pragma once
#include "Employee.h"
Employee::Employee() { //def ctor 
	salary = 0 ;
}

Employee::Employee( float salary , string name , long id , int age ) : Person( name , id , age ) { //value ctor
	set_salary( salary ) ;
}

void Employee::set_salary( float salary ) { //get same institute
	this->salary = salary ;
}

float Employee::get_salary() { //set same institute
	return salary ;
}

Employee::~Employee() { //dtor
	cout << "Employee dtor" << endl ;
}

void Employee::print() { //Method of print 
	cout << endl << "Employee info: " << endl << endl ;
	Person::print() ;
	cout << "The salary is:" << salary << endl << endl;
}