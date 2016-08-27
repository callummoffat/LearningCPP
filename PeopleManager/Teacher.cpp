#include "stdafx.h"
#include "Teacher.h"


int Teacher::nextId = 0;
Teacher::Teacher()
	: Teacher("Stukkinn D. Amudd", 45, "English")

{
	
}

Teacher::Teacher(std::string name,
	int age,
	std::string specialistSubject)
	: Person(name, age)
{
	this->specialistSubject = specialistSubject;
	teacherID = nextId;
	nextId++;
}


Teacher::~Teacher()
{
}


void Teacher::display()
{
	std::cout << "\nDisplaying information for a teacher...\n"
		<< "Name: " << getName() << "\n"
		<< "Age: " << getAge() << "\n"
		<< "Teacher ID: " << getTeacherID() << "\n"
		<< "Specialist subject: " << getSpecialistSubject() << "\n";
}


int Teacher::getTeacherID()
{
	return teacherID;
}


std::string Teacher::getSpecialistSubject()
{
	return specialistSubject;
}
