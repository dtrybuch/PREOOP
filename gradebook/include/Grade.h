#pragma once
#include<stdio.h>
class Grade {
private:
	int _GradeID;
	float _grade;
public:
	static int GradeIndex;
	Grade(float grade);
	void set_GradeID(int gradeID);
	int get_GradeID()const;
	float get_Grade()const;
	void print()const;
};