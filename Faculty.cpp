#include "db_connection.h"
#include "Faculty.h"

using namespace System;

void Faculty::enterGrades(int courseID, int studentID, String^ grade) {
	// enter the grades for the student
	db^ conn = gcnew db(); // create a databse instance
	conn->openConnection(); // open the connection
	conn->executeQuery("INSERT INTO grades (courseID, studentID, grade) VALUES (" + courseID + ", " + studentID + ", '" + grade + "')");
	conn->closeConnection();
}

DataTable^ Faculty::viewRoster(int courseID) {
	// view the roster for the course
	db^ conn = gcnew db(); // create a databse instance
	conn->openConnection(); // open the connection
	
    System::String^ query = "SELECT" +
        "s.student_id," +
        "CONCAT(u.first_name, ' ', u.last_name) AS student_name," +
        "s.major," +
        "s.enrollment_date," +
        "c.course_name," +
        "fc.semester" +
        "FROM" +
        "Faculty f" +
        "JOIN" +
        "FacultyCourses fc ON f.faculty_id = fc.faculty_id" +
        "JOIN" +
        "Courses c ON fc.course_id = c.course_id" +
        "JOIN" +
        "Enrollment e ON c.course_id = e.course_id AND fc.semester = e.semester" +
        "JOIN" +
        "Students s ON e.student_id = s.student_id" +
        "JOIN" +
        "Users u ON s.user_id = u.user_id" +
        "WHERE" +
        "f.faculty_id =" + facultyID + ";";

	DataTable^ dt = conn->fillDataTable(query);
	conn->closeConnection();
	return dt;
}