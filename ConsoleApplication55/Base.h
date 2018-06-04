#pragma once
#include <iostream>
#include <string>

using namespace std;

class Base
{
private:
	string name;
public:
	Base();

	string GetName() { return name; };
	void SetName(string name) { this->name = name; };

	virtual ~Base();
};

class child1 : public Base
{
public:
	child1();

	string group;
	int raiting[10];

	void fillInfoAboutStudent();
	void printInfoAboutStudent();

	virtual ~child1();
};

class child2 :public Base
{
public:
	child2();

	string subject;
	short int experience;

	void fillInfoAboutProfessor();
	void printInoAboutProfessor();

	virtual ~child2();
};