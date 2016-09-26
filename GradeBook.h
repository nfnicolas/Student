#pragma once
#include<iostream>
#include<string>
#include<array>
#include<iomanip>
using namespace std;
static const size_t student = 10;
static const size_t test = 3;
class GradeBook
{
	string nameStudent;
	string CourseName;
	array<array<int, test>, student>grades;
public:
	GradeBook(const string&,array<array<int,test>,student>&);
	static const size_t student = 10;
	static const size_t test = 3;
	void SetCourseName(const string&);
	string GetCourseName()const;
	void Display()const;
	void processGrades()const;
	int GetMin()const;
	int GetMax()const;
	int Avarage(const array<int, test>&)const;
	void outputBarChart()const;
	void outputGrades()const;
	~GradeBook();
};

