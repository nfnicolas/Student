#include "GradeBook.h"

GradeBook::GradeBook(const string&name,array<array<int,test>,student>&gradeArray):
	CourseName(name),grades(gradeArray)
	
{
}

void GradeBook::SetCourseName(const string &name)
{
	CourseName = name;
}

string GradeBook::GetCourseName() const
{
	return CourseName;
}

void GradeBook::Display() const
{
	cout << "Welcom to the grade book\n"<<GetCourseName();

}

void GradeBook::processGrades() const
{

	outputGrades();
	cout << "\nLowest is grade bokk is " << GetMin();
	cout << "\nHighest is grade is " << GetMax();
	outputBarChart();
}

int GradeBook::GetMin() const
{
	int lowerGrade = 100;
	for (auto const&student : grades)
	{
		for (auto const&grade : student)
		{
			if (grade < lowerGrade)
				lowerGrade = grade;
		}
	}
	return lowerGrade;
}

int GradeBook::GetMax() const
{
	int highGrade = 0;
	for (auto const&student : grades)
	{
		for (auto const&grade : student)
		{
			if (grade > highGrade)
				highGrade = grade;
		}
	}
	return highGrade;
}

int GradeBook::Avarage(const array<int, test>&setOfGrage) const
{
	int total = 0;
	for (int grade : setOfGrage)
		total += grade;
	return static_cast<double>(total) / setOfGrage.size();
}

void GradeBook::outputBarChart() const
{
	cout << "\nOverall grade distribution\n";
	const size_t frequencySize = 11;
	array<unsigned int, frequencySize>frequency{};
	for (auto const&student : grades)
		for (auto const&test : student)
			frequency[test / 10];

	for (size_t count = 0; count < frequencySize; ++count)
	{
		if (0 == count)
			cout << "0-9 :";
		else if (10 == count)
			cout << "100 :";
		else
			cout << count * 10 << "-" << (count * 10) + 9 << ":";
		for (unsigned int star = 0; star < frequency[count]; ++star)
			cout << "*";
		cout << endl;
	}
}
void GradeBook::outputGrades() const
{
	cout << "\nThe Grade are : \n\n";
	cout << "             ";
	for (size_t tests = 0; tests < test; ++tests)
		cout << "Test " << tests + 1 << "          ";
	cout << " Average\n";
	for (size_t student = 0; student < grades.size(); ++student)
	{
		cout << "Student " << student + 1 << endl;
		for (size_t test = 0; test < grades[student].size(); ++test)
			cout <<"        "<<internal<<setw(8)<< grades[student][test];
		double avarage = Avarage(grades[student]);
		cout << "           "<<setw(9) << setprecision(2) << fixed << avarage << endl;
	}
}
GradeBook::~GradeBook()
{
}
