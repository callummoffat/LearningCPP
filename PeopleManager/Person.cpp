#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person()
	: Person("Joe Bloggs", 32)
{
	
}

Person::Person(std::string name,
	int age)
{
	setName(name);
	setAge(age);
}


Person::~Person()
{
}

void Person::display()
{
	std::cout << "\nDisplaying information for a person...\n"
		<< "Name: " << name << "\n"
		<< "Age: " << age << "\n";
}

int Person::getAge()
{
	return age;
}


void Person::setAge(int age)
{
	if (age < 1)
	{
		std::cerr << "\nERROR: INVALID AGE!\n";
	}
	else
	{
		this->age = age;
	}
}


std::string Person::getName()
{
	return name;
}


void Person::setName(std::string name)
{
	if (name.empty())
	{
		std::cerr << "\nERROR: NAME CANNOT BE EMPTY!\n";
	}
	else
	{
		this->name = name;
	}
}
