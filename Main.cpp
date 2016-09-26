/*Проект(недоделаный) с учебного курса,который должен вывести список студентов с отметками,а также все
записать это в файл*/

#include<iostream>
#include<array>
#include<string>
#include"GradeBook.h"
using namespace std;
int main(int argc, char*argv[])
{
	array<array<int, GradeBook::test>, GradeBook::student>grades{
		86,70,100,
		65,34,56,
		12,34,65,
		45,100,61,
		57,23,41,
		78,99,76,
		55,34,12,
		13,59,100,
	};
	GradeBook myGradeBook("BOOK", grades);
	myGradeBook.Display();
	myGradeBook.processGrades();
	return 0;
}


