#include "stdafx.h"
#include "Student.h"


Student::Student()
	: Person("Goode P. Forma", 16)
{
	averageGrade = 'E';
	studentID = 123960;
	schoolYear = 12;
}

Student::Student(std::string name,
	int age, int studentID)
	: Person(name, age)
{
	this->studentID = studentID;
	averageGrade = 'N';
	schoolYear = 9;
}

Student::Student(std::string name,
	int studentID, char averageMark, int schoolYear)
	: Person(name, 13)
{
	this->studentID = studentID;
	this->averageGrade = averageMark;
	this->schoolYear = schoolYear;
}

Student::Student(std::string name,
	int age,
	int studentID,
	char averageMark,
	int schoolYear)
	: Person(name, age)
{
	this->studentID = studentID;
	this->averageGrade = averageMark;
	this->schoolYear = schoolYear;
}

Student::~Student()
{
}


int Student::getStudentID()
{
	return studentID;
}


char Student::getAverageGrade()
{
	return averageGrade;
}


int Student::getSchoolYear()
{
	return schoolYear;
}


void Student::setAverageGrade(char averageGrade)
{
	if (averageGrade == 0)
	{
		std::cerr << "\nERROR: AVERAGE GRADE CANNOT BE NULL\n";
	}
	else
	{
		this->averageGrade = averageGrade;
	}
}

void Student::display()
{
	std::cout << "\nDisplaying information for a student...\n"
		<< "Name: " << getName() << "\n"
		<< "Age: " << getAge() << "\n"
		<< "Student ID: " << getStudentID() << "\n"
		<< "Year at school: " << getSchoolYear() << "\n"
		<< "Average grade: " << getAverageGrade() << "\n";
		

}
