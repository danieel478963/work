#pragma once
#define PERSON_H
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <string>
#include <iostream> 
using namespace std;
#define Size 10
class Person{
private:
	string name ;
	long id ; 
	int age ;
public:
	Person() ; //def ctor
	Person( string name , long id, int age) ; //value ctor
	string get_name() ; //get name
	long get_id() ; //get id
	int get_age() ; //get age
	void set_name( string name ) ; //set name
	void set_id( long id ) ; //set id
	void set_age( int last_name ) ; //set age
	virtual ~Person() ; //dtor
	virtual void print() ; //Method of print 
}; //end class Person
