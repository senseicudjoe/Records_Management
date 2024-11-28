#include "Users.h"
#include <iostream>
#include "db_connection.h"

bool Users::registerUser(String^ email, String^ username, String^ password) {
	// check whether the user already exists using the email, return false [redirect to login page if exists]
	db^ conn = gcnew db(); // create a databse instance
	conn->openConnection(); // open the connection
	conn->executeQuery("SELECT username FROM users WHERE email = '" + email + "'"); // execute the query

	if (conn->dr->Read()) {
		// if the user exists, return false
		return false;
	}
	
	// if the user does not exist, register the user, return true
	conn->executeQuery("INSERT INTO users (email, username, password) VALUES ('" + email + "', '" + username + "', '" + password + "')");
	conn->closeConnection();
	return true;
}

bool Users::loginUser(String^ email, String^ password) {
	// check whether the user exists using the email
	db^ conn = gcnew db(); // create a databse instance
	conn->openConnection(); // open the connection
	conn->executeQuery("SELECT * FROM users WHERE email = '" + email + "' AND password = '" + password + "'"); // execute the query

	if (!conn->dr->Read()) {
		// if the user does not exist, return false
		return false;
	}
	// if exists log user in and store the user datails in SESSION VARIBALES (CLASS), return true
	
	// check if the password is correct
	// if correct, return true
	// if not correct, return false
	if (conn->dr->GetString(3) != password) {
		return false;
	}

	conn->closeConnection();
	return true;
}