#pragma once
#include "Student.h"
#include "Teacher.h"
class StudentTeacher :
	public Student,
	public Teacher
{
public:
	StudentTeacher();
	~StudentTeacher();
	void display();
};

