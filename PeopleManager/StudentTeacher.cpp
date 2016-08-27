#include "stdafx.h"
#include "StudentTeacher.h"


StudentTeacher::StudentTeacher()
	: Person("Stu Dent Teacha", 22), Teacher("Stu Dent Techa", 22, "English")
	, Student("Stu Dent Teacha", 22, 2836, 'E', 13)
{
}


StudentTeacher::~StudentTeacher()
{
}

void StudentTeacher::display()
{
	std::cout << "\nDisplaying information for a student teacher...\n"
		<< "Name: " << getName() << "\n"
		<< "Student ID: " << getStudentID() << "\n"
		<< "Teacher ID: " << getTeacherID() << "\n"
		<< "Age: " << getAge() << "\n"
		<< "Average grade: " << getAverageGrade() << "\n"
		<< "Specialist subject: " << getSpecialistSubject() << "\n";
}
