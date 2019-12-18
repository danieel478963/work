#pragma once
#include "Student.h"
Student::Student() { //def ctor
	institute = "null" ;
	average = 0 ;
}

Student::Student( int average , string institute , string name , long id , int age ) : Person( name , id , age ) {//value ctor
	set_average( average ) ;
	set_institute( institute ) ;
}

string Student::get_institute() { //get last name
	return institute ;
}

int Student::get_average() { //get id
	return average ;
}

void Student::set_institute( string institute ) { //set last name
	this->institute = institute ;
}

void Student::set_average( int average ) { //set id
	this->average = average ;
}

Student::~Student() { //dtor
	cout << "Student dtor" << endl;
}

void Student::print() { //Method of print
	cout << endl << "Student info: " << endl << endl;
	Person::print() ;
	cout << "The institute is:" << institute << endl ;
	cout << "The average is:" << average << endl << endl;
}
