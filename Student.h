#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include "Users.h"

public ref class Student:public Users {
private:
	String^ studentID;
	DateTime^ dateOfBirth;
	String^ picture;
	String^ major;
	DateTime^ dateOfEnrollment;
public:
	bool enrollInCourse(int CourseID);
	DataTable^ viewGrades();
};

#endif // STUDENT_H