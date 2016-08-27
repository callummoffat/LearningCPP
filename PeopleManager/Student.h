#pragma once
#include "Person.h"
class Student :
	public virtual Person
{
public:
	Student();
	Student(std::string name,
		int age, int studentID);
	Student(std::string name, int studentID,
		char averageMark, int schoolYear);
	Student(std::string name,
		int age, int studentID, char averageMark, int schoolYear);
	~Student();
	int getStudentID();
	char getAverageGrade();
	int getSchoolYear();
	void setAverageGrade(char averageGrade);
	void display();
private:
	char averageGrade;
	int studentID;
	int schoolYear;
};

