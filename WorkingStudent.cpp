#pragma once
#include "WorkingStudent.h"

WorkingStudent::WorkingStudent() { //def ctor
	same_institute = false ;
}

WorkingStudent::WorkingStudent( int same_institute , int average , string institute , float salary , string name , long id , int age ) : Person(name, id, age) , Employee(salary,name,id,age),Student(average,institute,name,id,age) { //value ctor
	set_same_institute( same_institute ) ;
}

void WorkingStudent::set_same_institute( bool same_institute ) { //get same institute
	this->same_institute = same_institute ;
}

bool WorkingStudent::get_same_institute() { //set same institute
	return same_institute ;
}

WorkingStudent::~WorkingStudent() { //dtor 
	cout << "WorkingStudent dtor" << endl ;
}

void WorkingStudent::print() { //Method of print 
	cout << endl << "WorkingStudent info: " << endl << endl;
	Person::print() ;
	cout << "The same institute is:" << same_institute << endl << endl ;
}