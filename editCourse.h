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
	/// Summary for editCourse
	/// </summary>
	public ref class editCourse : public System::Windows::Forms::Form
	{
	public:
		editCourse(String^ course_id)
		{
			InitializeComponent();
			fillFacultyComboBox();

			fillFields(course_id);
			fillListView(course_id);
			fillPrerequisitesComboBox();
			this->course_id = course_id;
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label8;
	public:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBoxPrerequisites;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;

	private:
		String^ course_id;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBoxPrerequisites = (gcnew System::Windows::Forms::ListBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(803, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 36);
			this->textBox2->TabIndex = 27;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(455, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 58);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editCourse::button1_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(769, 110);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(275, 37);
			this->comboBox4->TabIndex = 25;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &editCourse::comboBox4_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(220, 247);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(399, 104);
			this->richTextBox1->TabIndex = 24;
			this->richTextBox1->Text = L"";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SEM1", L"SEM2" });
			this->comboBox2->Location = System::Drawing::Point(220, 179);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 37);
			this->comboBox2->TabIndex = 23;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1.0", L"0.5" });
			this->comboBox1->Location = System::Drawing::Point(220, 111);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 37);
			this->comboBox1->TabIndex = 22;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(220, 50);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(281, 36);
			this->textBox1->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(649, 113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 29);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Faculty:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(649, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 29);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Year Group:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(20, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 29);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Description:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(20, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 29);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Semester:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(20, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Credits:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(20, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 29);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Course Name:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label8->Location = System::Drawing::Point(682, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(302, 29);
			this->label8->TabIndex = 32;
			this->label8->Text = L"List of Prequisite Courses";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(570, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 37);
			this->button2->TabIndex = 31;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &editCourse::button2_Click);
			// 
			// listBoxPrerequisites
			// 
			this->listBoxPrerequisites->FormattingEnabled = true;
			this->listBoxPrerequisites->ItemHeight = 16;
			this->listBoxPrerequisites->Location = System::Drawing::Point(687, 237);
			this->listBoxPrerequisites->Margin = System::Windows::Forms::Padding(4);
			this->listBoxPrerequisites->Name = L"listBoxPrerequisites";
			this->listBoxPrerequisites->Size = System::Drawing::Size(384, 196);
			this->listBoxPrerequisites->TabIndex = 30;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(220, 385);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(343, 37);
			this->comboBox3->TabIndex = 29;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &editCourse::comboBox3_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label7->Location = System::Drawing::Point(20, 388);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 29);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Prerequisite:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(831, 452);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 37);
			this->button3->TabIndex = 33;
			this->button3->Text = L"REMOVE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &editCourse::button3_Click);
			// 
			// editCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 608);
			this->Controls->Add(this->button3);
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
			this->Name = L"editCourse";
			this->Text = L"editCourse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
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

	private: void fillFields(String^ course_id) {
		// Initialize database connection
		db^ conn = gcnew db();
		conn->openConnection();

		// Query to fetch course details
		String^ query = "SELECT " +
			"c.course_name, " +
			"c.credits, " +
			"c.semester, " +
			"c.description, " +
			"c.year_group, " +
			"f.faculty_id, " +
			"CONCAT(u.first_name, ' ', u.last_name) AS fullName " +
			"FROM courses c " +
			"JOIN facultyCourses fc ON c.course_id = fc.course_id " +
			"JOIN faculty f ON fc.faculty_id = f.faculty_id " +
			"JOIN users u ON f.user_id = u.user_id " +
			"WHERE c.course_id = " + course_id;

		// Fill a DataTable with the query result
		DataTable^ dt = conn->fillDataTable(query);
		conn->closeConnection();

		// Set the fields with the fetched data
		textBox1->Text = dt->Rows[0]->default["course_name"]->ToString();
		comboBox1->Text = dt->Rows[0]->default["credits"]->ToString();
		comboBox2->Text = dt->Rows[0]->default["semester"]->ToString();
		richTextBox1->Text = dt->Rows[0]->default["description"]->ToString();
		textBox2->Text = dt->Rows[0]->default["year_group"]->ToString();
		comboBox4->Text = dt->Rows[0]->default["fullName"]->ToString();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// get the course_id from the table

	updateCourse(course_id);
	this->Close();
}

	   private: void updateCourse(String^ course_id) {
		   // Initialize database connection
		   db^ conn = gcnew db();
		   conn->openConnection();

		   // Query to update course details
		   String^ query = "UPDATE courses c " +
			   "JOIN facultyCourses fc ON c.course_id = fc.course_id " +
			   "SET " +
			   "c.course_name = '" + textBox1->Text + "', " +
			   "c.credits = '" + comboBox1->Text + "', " +
			   "c.semester = '" + comboBox2->Text + "', " +
			   "c.description = '" + richTextBox1->Text + "', " +
			   "c.year_group = '" + textBox2->Text + "', " +
			   "fc.faculty_id = '" + ((KeyValuePair<String^, String^>^)comboBox4->SelectedItem)->Value + "' " +
			   "WHERE c.course_id = " + course_id;

		   // Execute the query
		   conn->executeQuery(query);
		   conn->closeConnection();

		   // Update the course prerequisites
		   updatePrerequisites(course_id);

		   // Show a success message
		   MessageBox::Show("Course details updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	   }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   private: void fillListView(String^ course_id) {
		   db^ conn = gcnew db();
		   conn->openConnection();

		   // Query to fetch course_id prerequisites
		   String^ query = "SELECT " +
			   "cp.course_id, " +
			   "c.course_name " +
			   "FROM coursePrerequisites cp " +
			   "JOIN courses c ON cp.prerequisite_course_id = c.course_id " +
			   "WHERE cp.course_id = " + course_id;
		   listBoxPrerequisites->Items->Clear();

		   // Fill a DataTable with the query result
		   DataTable^ dt = conn->fillDataTable(query);

		   // Loop through the DataTable rows to populate the ListBox with the course_name (only show course_name)
		   for (int i = 0; i < dt->Rows->Count; i++) {
			   listBoxPrerequisites->Items->Add(gcnew KeyValuePair<String^, String^>(
				   dt->Rows[i]->default["course_name"]->ToString(),
				   dt->Rows[i]->default["course_id"]->ToString()
			   ));
		   }

		   // set the listBox to only show the Key
		   listBoxPrerequisites->DisplayMember = "Key";
		   listBoxPrerequisites->ValueMember = "Value";
		   
		   conn->closeConnection();
	   }

	   private: void fillPrerequisitesComboBox(void) {
		   // Initialize database connection
		   db^ conn = gcnew db();
		   conn->openConnection();
		   // Query to fetch course details
		   String^ query = "SELECT " +
			   "course_id, " +
			   "course_name " +
			   "FROM courses";

		   // Fill a DataTable with the query result
		   DataTable^ dt = conn->fillDataTable(query);
		   conn->closeConnection();

		   // only add courses that are not the current course and its prerequisites
		   for (int i = 0; i < listBoxPrerequisites->Items->Count; i++) {
			   String^ course_name = ((KeyValuePair<String^, String^>^)listBoxPrerequisites->Items[i])->Key;

			   // add the current course to the list of prerequisites
			   if (i == 0) {
				   comboBox3->Items->Add(gcnew KeyValuePair<String^, String^>(
					   course_name,
					   course_id
				   ));
			   }

			   for (int j = 0; j < dt->Rows->Count; j++) {
				   if (dt->Rows[j]->default["course_name"]->ToString() == course_name) {
					   dt->Rows->RemoveAt(j);
					   break;
				   }
			   }
		   }

		   // Loop through the DataTable rows to populate the ComboBox
		   for (int i = 0; i < dt->Rows->Count; i++) {
			   // Create a ComboBoxItem to store both the display name and course_id
			   comboBox3->Items->Add(gcnew KeyValuePair<String^, String^>(
				   dt->Rows[i]->default["course_name"]->ToString(),
				   dt->Rows[i]->default["course_id"]->ToString()
			   ));
		   }
		   // Set the ComboBox to display only the course name
		   comboBox3->DisplayMember = "Key";
		   comboBox3->ValueMember = "Value";
	   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Add the selected prerequisite course to the list
	listBoxPrerequisites->Items->Add(comboBox3->Text);

	// Remove the selected prerequisite course from the ComboBo
	comboBox3->Items->Remove(comboBox3->SelectedItem);
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Remove the selected prerequisite course from the list
	comboBox3->Items->Add(listBoxPrerequisites->SelectedItem);
	listBoxPrerequisites->Items->Remove(listBoxPrerequisites->SelectedItem);
}

	   private: void updatePrerequisites(String^ course_id) {
		   // Initialize database connection
		   db^ conn = gcnew db();
		   conn->openConnection();

		   // Query to delete all the prerequisites for the course
		   String^ query = "DELETE FROM coursePrerequisites WHERE course_id = " + course_id;
		   conn->executeQuery(query);
		   conn->closeConnection();

		   // Loop through the ListBox items to insert the prerequisites
		   for (int i = 0; i < listBoxPrerequisites->Items->Count; i++) {
			   conn->openConnection();
			   // Get the course_id of the prerequisite course
			   String^ prerequisite_course_id = ((KeyValuePair<String^, String^>^)listBoxPrerequisites->Items[i])->Value;

			   // Query to insert the prerequisite course
			   query = "INSERT INTO coursePrerequisites (course_id, prerequisite_course_id) VALUES (" + course_id + ", " + prerequisite_course_id + ")";
			   conn->executeQuery(query);
			   conn->closeConnection();
		   }
	   }
};
}
