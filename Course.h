#pragma once

#ifndef COURSE_H
#define COURSE_H

using namespace System;

public ref class Course {
private:
	int courseID;
	String^ courseName;
	int courseCredits;
	String^ courseInstructor;
	String^ courseSchedule; // SEM1 or SEM2

public:
	bool assignFaculty(int facultyID);
	bool registerStudent(int studentID);
};

#endif // !COURSE_H