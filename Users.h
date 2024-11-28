// Users.h
#ifndef USERS_H
#define USERS_H

using namespace System;

public ref class Users abstract {
protected:
    int userID;
    String^ firstname;
	String^ lastname;
	String^ email;
    String^ password;

public:
    virtual bool loginUser(String^ email, String^ password);
    virtual bool registerUser(String^ email, String^ username, String^ password);

    virtual bool logoutUser() {
		Console::WriteLine("Logging out user...");
		return true;
    };
};

#endif // USERS_H
