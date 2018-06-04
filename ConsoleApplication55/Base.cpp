#include "stdafx.h"
#include "Base.h"

Base::Base()
{
	name = "";
}

Base::~Base()
{
}

child1::child1()
{
	group = "";
}

void child1::fillInfoAboutStudent()
{
	group = "Orion";


	for (short int i = 0; i < 10; i++)
		raiting[i] = 2 + rand() % 3;
}

void child1::printInfoAboutStudent()
{
	system("cls");

	cout << "Info about student: " << endl;
	cout << "---- ---- ---- ---- ----" << endl;

	cout << "Name: " << GetName() << endl;
	cout << "Group: " << group << endl;

	cout << "Raiting: ";

	for (short int i = 0; i < 10; i++)
		cout << raiting[i] << " ";
	cout << endl;
}

child1::~child1()
{
}

child2::child2()
{
	subject = "";
	experience = NULL;
}

void child2::fillInfoAboutProfessor()
{
	subject = "Mathmatics";
	experience = 10 + rand() % 40;
}

void child2::printInoAboutProfessor()
{
	cout << "Info about professor: " << endl;
	cout << "---- ---- ---- ---- ----" << endl;

	cout << "Name: " << GetName() << endl;
	cout << "Subject: " << subject << endl;
	cout << "Experience: " << experience << " years." << endl;
}

child2::~child2()
{
}