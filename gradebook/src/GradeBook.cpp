#include"GradeBook.h"
#include<stdio.h>
GradeBook::GradeBook() 
{
	_counter = 0;
};
/*void GradeBook::insert(Grade *next)
{
	_counter++;
	const Grade **OldList = _GradeList;
	_GradeList = new const Grade *[_counter];
	for (int i = 0; i < _counter-1; i++)
	{
		_GradeList[i] = OldList[i];
	}
	if (_counter-1 > 0)
		delete[] OldList;
	_GradeList[_counter - 1] = next;
}*/
void GradeBook::insert(const Grade *next)
{
	_counter++;
	const Grade **OldList = _GradeList;
	_GradeList = new const Grade *[_counter];
	for (int i = 0; i < _counter - 1; i++)
	{
		_GradeList[i] = OldList[i];
	}
	if (_counter - 1 > 0)
		delete[] OldList;
	_GradeList[_counter - 1] = next;
}
void GradeBook::print() 
{
	printf("Grades in the book: \n");
	for (int i = 0; i < _counter; i++)
	{
		_GradeList[i]->print();
	}
}
void GradeBook::addGrade(float grade)
{
	Grade *next = new Grade(grade);
	insert(next);
}
GradeBook::~GradeBook()
{
	for (int i = 0; i < _counter; i++)
	{
		delete _GradeList[i];
	}
	delete[] _GradeList;
}