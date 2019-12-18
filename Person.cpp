#pragma once
#include "Person.h"
Person::Person() { //def ctor
	name = "null" ;
	age = 0 ;
	id = 00000000 ;
}

Person::Person( string name , long id , int age ) { //value ctor
	set_name( name ) ;
	set_id( id ) ;
	set_age( age ) ;
}

string Person::get_name() { //get name
	return name ;
} 

int Person::get_age() { //get last name
	return age ;
}

long Person::get_id() { //get id
	return id ;
}

void Person::set_name( string name ) { //set name
	this->name = name ;
}

void Person::set_age( int last_name ) { //set last name
	this->age=last_name ;
}

void Person::set_id( long id ) { //set id
	this->id = id ;
}

Person::~Person() { //dtor
	cout << "Person dtor" << endl ;
} 

void Person::print() { //Method of print
	cout << endl << "Person info: " << endl << endl;
	cout << "The Name is:" << name << endl ;
	cout << "The Id is:" << id << endl ;
	cout << "The Age is:" << age << endl << endl;
}
