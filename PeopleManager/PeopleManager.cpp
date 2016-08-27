// PeopleManager.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "StudentTeacher.h"
#include <iostream>
int main()
{
	const int numPeople = 11;

	Person* people[numPeople];

	people[0] = new Person();
	people[1] = new Person("Jeff Bloggs", 64);
	people[2] = new Person("Jenny Bloggs", 16);
	people[3] = new Person("Jack Bloggs", 8);
	people[4] = new Person("John Bloggs", 128);
	people[5] = new Student();
	people[6] = new Student("Ba D. Influuence", 12, 1026, 'N', 6);
	people[7] = new Student("Topp O. DaClaz", 8, 1, 'E', 13);
	people[8] = new Teacher();
	people[9] = new Teacher("Cole F. Oggie", 67, "English");
	people[10] = new StudentTeacher();

	for (int x = 0; x < numPeople; x++)
	{
		people[x]->display();
		system("pause");
	}
    return 0;
}

