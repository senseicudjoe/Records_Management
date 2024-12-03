#pragma once

#include "db_connection.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for addCourses
	/// </summary>
	public ref class addCourses : public System::Windows::Forms::Form
	{
	public:
		addCourses(void)
		{
			InitializeComponent();
			fillFacultyComboBox();
			fillPrequisiteCourses();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addCourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ListBox^ listBoxPrerequisites;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->listBoxPrerequisites = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(34, 89);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(34, 156);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Credits:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(34, 242);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Semester:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(34, 319);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Description:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(820, 85);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Year Group:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(820, 164);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Faculty:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(284, 85);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 36);
			this->textBox1->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1.0", L"0.5" });
			this->comboBox1->Location = System::Drawing::Point(284, 161);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(150, 37);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &addCourses::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SEM1", L"SEM2" });
			this->comboBox2->Location = System::Drawing::Point(284, 246);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(150, 37);
			this->comboBox2->TabIndex = 9;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(284, 331);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(498, 129);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &addCourses::richTextBox1_TextChanged);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(970, 160);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(343, 37);
			this->comboBox4->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(636, 936);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 72);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Add Course";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addCourses::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(1012, 76);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(218, 36);
			this->textBox2->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(55, 495);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 29);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Prerequisite:";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(284, 492);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(343, 37);
			this->comboBox3->TabIndex = 16;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &addCourses::comboBox3_SelectedIndexChanged);
			// 
			// listBoxPrerequisites
			// 
			this->listBoxPrerequisites->FormattingEnabled = true;
			this->listBoxPrerequisites->ItemHeight = 20;
			this->listBoxPrerequisites->Location = System::Drawing::Point(879, 331);
			this->listBoxPrerequisites->Margin = System::Windows::Forms::Padding(4);
			this->listBoxPrerequisites->Name = L"listBoxPrerequisites";
			this->listBoxPrerequisites->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBoxPrerequisites->Size = System::Drawing::Size(505, 444);
			this->listBoxPrerequisites->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(663, 492);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 37);
			this->button2->TabIndex = 18;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addCourses::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->Location = System::Drawing::Point(879, 292);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(302, 29);
			this->label8->TabIndex = 19;
			this->label8->Text = L"List of Prequisite Courses";
			// 
			// addCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1520, 1038);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBoxPrerequisites);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"addCourses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"addCourses";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   private: void fillFacultyComboBox(void) {
		   // Initialize database connection
		   db^ conn = gcnew db();
		   conn->openConnection();

		   // Query to fetch faculty details
		   String^ query = "SELECT " +
			   "u.user_id, " +
			   "CONCAT(u.first_name, ' ', u.last_name) AS full_name, " +
			   "f.faculty_id " +
			   "FROM users u " +
			   "JOIN faculty f ON u.user_id = f.user_id " +
			   "WHERE u.role = 'faculty'";

		   // Fill a DataTable with the query result
		   DataTable^ dt = conn->fillDataTable(query);
		   conn->closeConnection();

		   // Loop through the DataTable rows to populate the ComboBox
		   for (int i = 0; i < dt->Rows->Count; i++) {
			   // Combine first and last name for the display value
               String^ facultyName = dt->Rows[i]->default["full_name"]->ToString();

			   // Create a ComboBoxItem to store both the display name and faculty_id
			   comboBox4->Items->Add(gcnew KeyValuePair<String^, String^>(
				   facultyName,
				   dt->Rows[i]->default["faculty_id"]->ToString()
			   ));
		   }

		   // Set the ComboBox to display only the faculty name
		   comboBox4->DisplayMember = "Key";
		   comboBox4->ValueMember = "Value";
	   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Initialize database connection
	db^ conn = gcnew db();
	conn->openConnection();

	// Get the selected faculty_id from the ComboBox
	KeyValuePair<String^, String^>^ selectedFaculty = (KeyValuePair<String^, String^>^)comboBox4->SelectedItem;
	String^ faculty_id = selectedFaculty->Value;

	// Query to insert the new course into the database
	String^ query = "INSERT INTO courses (course_name, credits, semester, description, year_group) VALUES ('" +
		textBox1->Text + "', " +
		comboBox1->Text + ", '" +
		comboBox2->Text + "', '" +
		richTextBox1->Text + "', '" +
		textBox2->Text + "')";

	conn->executeQuery(query);
	conn->closeConnection();

	// Query to get the course_id of the newly inserted course
	conn->openConnection();
	query = "SELECT course_id FROM courses WHERE course_name = '" + textBox1->Text + "'";
	DataTable^ dt = conn->fillDataTable(query);
	conn->closeConnection();

	String^ course_id = dt->Rows[0]->default["course_id"]->ToString();

	// Query to insert the faculty_id and course into the facultyCourses table
	conn->openConnection();
	query = "INSERT INTO facultyCourses (faculty_id, course_id, semester) VALUES ('" + faculty_id + "', '" + course_id + "', '" + comboBox2->Text + "')";
	conn->executeQuery(query);
	conn->closeConnection();

	// Query to insert the prerequisite course into the prerequisiteCourses table
	for (int i = 0; i < listBoxPrerequisites->Items->Count; i++) {
		conn->openConnection();
		String^ prerequisiteCourseName = listBoxPrerequisites->Items[i]->ToString();
		query = "SELECT course_id FROM courses WHERE course_name = '" + prerequisiteCourseName + "'";
		dt = conn->fillDataTable(query);
		conn->closeConnection();

		conn->openConnection();
		String^ prerequisiteCourseId = dt->Rows[0]->default["course_id"]->ToString();
		query = "INSERT INTO coursePrerequisites (course_id, prerequisite_course_id) VALUES ('" + course_id + "', '" + prerequisiteCourseId + "')";
		conn->executeQuery(query);
		conn->closeConnection();
	}

	// Close the form
	this->Close();

	// Display a success message
	MessageBox::Show("Course added successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
	private: void fillPrequisiteCourses(void) {
		// Initialize database connection
		db^ conn = gcnew db();
		conn->openConnection();

		// Query to fetch course details
		String^ query = "SELECT course_id, course_name FROM courses";

		// Fill a DataTable with the query result
		DataTable^ dt = conn->fillDataTable(query);
		conn->closeConnection();

		// Loop through the DataTable rows to populate the ComboBox
		for (int i = 0; i < dt->Rows->Count; i++) {
			// Combine first and last name for the display value
			String^ courseName = dt->Rows[i]->default["course_name"]->ToString();
			// Create a ComboBoxItem to store both the display name and course_id
			comboBox3->Items->Add(gcnew KeyValuePair<String^, String^>(
				courseName,
				dt->Rows[i]->default["course_id"]->ToString()
			));
		}

		// Set the ComboBox to display only the course name
		comboBox3->DisplayMember = "Key";
		comboBox3->ValueMember = "Value";
	}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the selected course_id from the ComboBox
	KeyValuePair<String^, String^>^ selectedCourse = (KeyValuePair<String^, String^>^)comboBox3->SelectedItem;
	String^ course_id = selectedCourse->Value;

	// Add the selected course to the ListBox
	listBoxPrerequisites->Items->Add(selectedCourse->Key);
}
};
}
