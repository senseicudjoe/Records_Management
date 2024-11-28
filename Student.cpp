#include "Student.h"
#include "db_connection.h"
#include <iostream>

bool Student::enrollInCourse(int CourseID) {
	// check if the student is already enrolled in the course
	db^ conn = gcnew db(); // create a databse instance

	conn->openConnection(); // open the connection
	conn->executeQuery("SELECT * FROM Enrollment WHERE student_id = '" + studentID + "' AND courseID = '" + CourseID + "'"); // execute the query

	if (conn->dr->Read()) {
		// if the student is already enrolled in the course, return false
		std::cout << "You are already enrolled in this course." << std::endl;
		return false;
	}

	// if the student is not enrolled in the course, enroll the student in the course, return true
	conn->executeQuery("INSERT INTO Enrollment (student_id, course_id) VALUES ('" + studentID + "', '" + CourseID + "')");
	conn->closeConnection();
	std::cout << "Enrolling in course..." << std::endl;
	return true;
}

DataTable^ Student::viewGrades() {
	// view the grades of the student
	
	// get the grades of the student
	db^ conn = gcnew db(); // create a databse instance

	conn->openConnection(); // open the connection
	System::String^ query = "SELECT course_id,semester, grade FROM Enrollment WHERE student_id = " + "'" + studentID + "'";
	DataTable^ dt = conn->fillDataTable(query); // execute the query

	// return the grades to be displayed in the gridview
	return dt;
}
