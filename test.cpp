#include <iostream>
#include <string>
#include "db_connection.h"

using namespace System;
using namespace std;


int main() {
	db db;
	db.openConnection();
	db.executeQuery("SELECT * FROM students");
	String^ studentInfo;

	while (db.dr->Read()) {
		studentInfo = db.dr->GetString(1);
		Console::WriteLine(studentInfo);
	}
	db.closeConnection();
	return 0;
}