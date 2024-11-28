#include "Enrollment.h"
#include "db_connection.h"

using namespace System;

DataTable^ Enrollment::getEnrollmentDetails() {
	db^ conn = gcnew db();
	conn->openConnection();
	String^ query = "SELECT * FROM Enrollment WHERE enrollment_id = " + this->enrollmentID;
	conn->executeQuery(query);

	DataTable^ dt = conn->fillDataTable(query);
	conn->closeConnection();
	return dt;
}