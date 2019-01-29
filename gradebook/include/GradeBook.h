#pragma once
#include "Grade.h"
#include<stdio.h>
class GradeBook {
private:
	const Grade **_GradeList;
	int _counter;
public:
	friend Grade;
	GradeBook();
	//void insert( Grade *next);
	void insert(const Grade *next);
	void print();
	void addGrade(float grade);
	~GradeBook();
};