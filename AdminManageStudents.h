#pragma once

#include "db_connection.h"
#include "RegistrationForm.h"
#include "editStudents.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for AdminManageStudents
	/// </summary>
	public ref class AdminManageStudents : public System::Windows::Forms::Form
	{
	public:
		AdminManageStudents()
		{
			InitializeComponent();
			loadStudent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminManageStudents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(41, 47);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1072, 524);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminManageStudents::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(493, 12);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Students: ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(136, 605);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"New";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminManageStudents::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(364, 605);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminManageStudents::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(612, 605);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 39);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminManageStudents::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(846, 605);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 39);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Generate Transcript";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminManageStudents::button4_Click);
			// 
			// AdminManageStudents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1157, 675);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AdminManageStudents";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminManageStudents";
			this->Load += gcnew System::EventHandler(this, &AdminManageStudents::AdminManageStudents_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

		   private: void loadStudent(void) {
			   // Load the data grid view with the faculty data
			   db^ connect = gcnew db();
			   connect->openConnection();

			   String^ query = "SELECT "
				   "u.user_id, "
				   "CONCAT(u.first_name, ' ', u.last_name) AS fullName, "
				   "u.email, "
				   "DATE_FORMAT(s.date_of_birth, '%d-%m-%Y') AS date_of_birth, "
				   "s.major, "
				   "s.profile_picture, "
				   "s.year_group "
				   "FROM users u "
				   "JOIN students s ON u.user_id = s.user_id";

			   DataTable^ dt = connect->fillDataTable(query);
			   dataGridView1->DataSource = dt;
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open addFaculty form
	RegistrationForm^ form = gcnew RegistrationForm();
	form->ShowDialog();
	 //Refresh the data grid view
	loadStudent();
}
private: System::Void AdminManageStudents_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the selected row
	DataGridViewRow^ row = dataGridView1->CurrentRow;
	if (row == nullptr) {
		MessageBox::Show("Please select a student to delete", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	// confirmation dialog
	String^ message = "Are you sure you want to delete " + row->Cells["fullName"]->Value->ToString() + "?";

	if (MessageBox::Show(message, "Delete Student", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		// Delete the student
		db^ connect = gcnew db();
		connect->openConnection();
		String^ query = "DELETE FROM users WHERE user_id = " + row->Cells["user_id"]->Value->ToString();
		connect->executeQuery(query);
		connect->closeConnection();

		// Refresh the data grid view
		loadStudent();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the selected row
	DataGridViewRow^ row = dataGridView1->CurrentRow;
	if (row == nullptr) {
		MessageBox::Show("Please select a student to edit", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// Open the edit form
	String^ user_id = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	editStudents^ form = gcnew editStudents(user_id);
	form->ShowDialog();
	// Refresh the data grid view
	loadStudent();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// get the student id and get their Transcript from the Transcripts Table
	DataGridViewRow^ row = dataGridView1->CurrentRow;
	if (row == nullptr) {
		MessageBox::Show("Please select a student to generate transcript", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	String^ user_id = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
	db^ connect = gcnew db();
	connect->openConnection();
	
	String^ query = "SELECT "
		"CONCAT(u.first_name, ' ', u.last_name) AS full_name, "
		"u.email, "
		"s.major, "
		"s.year_group, "
		"t.final_grade, "
		"t.semester, "
		"c.course_name "
		"FROM "
		"users u "
		"JOIN "
		"students s ON u.user_id = s.user_id "
		"JOIN "
		"transcripts t ON s.student_id = t.student_id "
		"JOIN "
		"courses c ON t.course_id = c.course_id "
		"WHERE u.user_id = " + user_id + " "
		"ORDER BY "
		"u.last_name, t.semester ";
		
	DataTable^ dt = connect->fillDataTable(query);
	connect->closeConnection();

	// Create a text file and write the transcript to it
	String^ path = "../adminReports/transcript_" + user_id + ".txt";
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(path);
	sw->WriteLine("Transcript for: " + dt->Rows[0]->ItemArray[0]->ToString());
	sw->WriteLine("Email: " + dt->Rows[0]->ItemArray[1]->ToString());
	sw->WriteLine("Major: " + dt->Rows[0]->ItemArray[2]->ToString());
	sw->WriteLine("Year Group: " + dt->Rows[0]->ItemArray[3]->ToString());
	sw->WriteLine("-------------------------------------------------");
	sw->WriteLine("Course Name | Semester | Final Grade");
	sw->WriteLine("-------------------------------------------------");
	for (int i = 0; i < dt->Rows->Count; i++) {
		sw->WriteLine(dt->Rows[i]->ItemArray[6]->ToString() + " | " + dt->Rows[i]->ItemArray[5]->ToString() + " | " + dt->Rows[i]->ItemArray[4]->ToString());
	}
	sw->Close();
	MessageBox::Show("Transcript generated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}	
};
}
