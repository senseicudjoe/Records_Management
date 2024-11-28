#pragma once

// Description: This file contains the code to connect to the database and execute queries.

#ifndef DB_CONNECTION_H
#define DB_CONNECTION_H

#include <iostream>
#include <string>

using namespace MySql::Data::MySqlClient;
using namespace System::Data;

public ref class db : public System::Windows::Forms::Form
{
	MySqlConnection^ conn = gcnew MySqlConnection();
	MySqlCommand^ cmd = gcnew MySqlCommand();
	DataTable^ dt = gcnew DataTable();
	MySqlDataAdapter^ da = gcnew MySqlDataAdapter();

public:
	MySqlDataReader^ dr;

	db() {
		// contructor to initialize the connection
		conn->ConnectionString = "server=localhost;port=3306;Database=records_management;user=root;pwd=;";
		cmd->Connection = conn;
	}

	void openConnection() {
		// open the connection
		if (conn->State == ConnectionState::Closed) {
			conn->Open();
		}
	}

	void closeConnection() {
		// close the connection
		if (conn->State == ConnectionState::Open) {
			conn->Close();
		}
	}

	void executeQuery(System::String^ query) {
		// execute the query
		cmd->CommandText = query;
		dr = cmd->ExecuteReader();
	}

	//fill a DataTable with the data from the database
	DataTable^ fillDataTable(System::String^ query) {
		try {
			dt->Clear();
			da->SelectCommand = cmd;
			cmd->CommandText = query;
			da->Fill(dt);
			return dt;
		}
		catch (MySqlException^ e) {
			System::Windows::Forms::MessageBox::Show(e->Message);
			return nullptr;
		}
	};
};
#endif // !DB_CONNECTION_H