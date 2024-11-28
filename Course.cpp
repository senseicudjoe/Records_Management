#include "Course.h"
#include "db_connection.h"

bool Course::assignFaculty(int facultyID) {
	// assign faculty to the course

	db^ conn = gcnew db();
	conn->openConnection();
	String^ query = "INSERT INTO FacultyCourses (course_id, faculty_id) VALUES ("
		+ this->courseID + ", " + facultyID + ")";
	conn->executeQuery(query);
	conn->closeConnection();

	return true;
}

bool Course::registerStudent(int studentID) {
	// register student to the course
	db^ conn = gcnew db();
	conn->openConnection();
	String^ query = "INSERT INTO Enrollment (course_id, student_id) VALUES ("
		+ this->courseID + ", " + studentID + ")";
	conn->executeQuery(query);
	conn->closeConnection();
	return true;
}