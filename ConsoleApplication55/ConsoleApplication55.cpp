#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <clocale>
#include "Base.h"

using namespace std;

int main()
{
	srand(__time64_t(NULL));
	setlocale(LC_ALL, "rus");

	child1 student;
	child2 professor;

	student.SetName("���������� ������� ���������");
	student.group = "Orion";
	student.fillInfoAboutStudent();
	student.printInfoAboutStudent();

	professor.SetName("������������ ������� ��������");
	professor.fillInfoAboutProfessor();
	professor.printInoAboutProfessor();

    return EXIT_SUCCESS;
}

