#pragma once

#ifndef FACULTY_H
#define FACULTY_H

#include "Users.h"

public ref class Faculty : public Users {
private:
	String^ facultyID;
	DateTime^ dateOfAppointment;
	String^ department;
	array<String^>^ coursesTaught;

public:
	void enterGrades(int courseID, int studentID, String^ grade);
	DataTable^ viewRoster(int courseID);
	 
};

#endif // !FACULTY_H


