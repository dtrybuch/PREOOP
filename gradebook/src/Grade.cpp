#include "Grade.h"

int Grade::GradeIndex;

Grade::Grade(float grade)
{
	_grade = grade;
	_GradeID=++GradeIndex;
}
void Grade::set_GradeID(int gradeID)
{
	_GradeID = gradeID;
}
int Grade::get_GradeID() const
{
	return _GradeID;
}
float  Grade::get_Grade() const
{
	return _grade;
}
void Grade::print() const
{
	printf("Grade ID=%d value=%.1f \n", _GradeID, _grade);
}