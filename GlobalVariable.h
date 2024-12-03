#pragma once

public ref class UserInfo {
public:
    System::String^ Id;
    System::String^ Role;
    System::String^ studentID; // is nullable
	System::String^ facultyID; // is nullable

    // Constructor to initialize user info
    UserInfo(System::String^ id, System::String^ role, System::String^ studentID, System::String^ facultyID) {
        Id = id;
        Role = role;
		this->studentID = studentID;
		this->facultyID = facultyID;
    }

	// access the user's role
	System::String^ getRole() {
		return Role;
	}

	// access the user's ID
	System::String^ getId() {
		return Id;
	}

	// access the student ID
	System::String^ getStudentID() {
		return studentID;
	}

	// access the faculty ID
	System::String^ getFacultyID() {
		return facultyID;
	}
};

// Global managed variable
public ref class GlobalVariables {
public:
    static UserInfo^ currentUser = nullptr;
};
