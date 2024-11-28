#pragma once

#ifndef ENROLLMENT_H
#define ENROLLMENT_H

using namespace System;

public ref class Enrollment {
private:
	int enrollmentID;
	int studentID;
	int courseID;
	String^ semester;
	String^ grade;

public:
	DataTable^ getEnrollmentDetails();
};

#endif // !ENROLLMENT_H