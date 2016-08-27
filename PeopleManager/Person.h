#pragma once
#include <string>
#include <iostream>
class Person
{
public:
	Person();
	Person(std::string name,
		int age);
	~Person();
	virtual void display();
private:
	int age;
	std::string name;
public:
	int getAge();
	void setAge(int age);
	std::string getName();
	void setName(std::string name);
};

