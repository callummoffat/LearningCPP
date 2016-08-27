#pragma once
#include "Person.h"
class Teacher :
	virtual public Person
{
public:
	Teacher();
	Teacher(std::string name,
		int age,
		std::string specialistSubject);
	~Teacher();
	virtual void display();
	int getTeacherID();
	std::string getSpecialistSubject();
	
private:
	static int nextId;
	int teacherID;
	std::string specialistSubject;
};

