#pragma once

#include "db_connection.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentEnrollment
	/// </summary>
	public ref class StudentEnrollment : public System::Windows::Forms::Form
	{
	public:
		StudentEnrollment(void)
		{
			InitializeComponent();
			FillYear();
			FillSemester();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentEnrollment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ EnrollCourse;
	protected:

	protected:














	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ Semester;






	private: System::Windows::Forms::DataGridView^ courses;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ YearGroup;
	private: System::Windows::Forms::Button^ button1;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->EnrollCourse = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Semester = (gcnew System::Windows::Forms::ComboBox());
			this->courses = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->YearGroup = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses))->BeginInit();
			this->SuspendLayout();
			// 
			// EnrollCourse
			// 
			this->EnrollCourse->AccessibleName = L"enrollCourse";
			this->EnrollCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnrollCourse->Location = System::Drawing::Point(263, 452);
			this->EnrollCourse->Margin = System::Windows::Forms::Padding(2);
			this->EnrollCourse->Name = L"EnrollCourse";
			this->EnrollCourse->Size = System::Drawing::Size(237, 41);
			this->EnrollCourse->TabIndex = 2;
			this->EnrollCourse->Text = L"Submit";
			this->EnrollCourse->UseVisualStyleBackColor = true;
			this->EnrollCourse->Click += gcnew System::EventHandler(this, &StudentEnrollment::EnrollCourse_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(35, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Semester";
			// 
			// Semester
			// 
			this->Semester->AccessibleName = L"semester";
			this->Semester->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->Semester->FormattingEnabled = true;
			this->Semester->Location = System::Drawing::Point(177, 44);
			this->Semester->Name = L"Semester";
			this->Semester->Size = System::Drawing::Size(121, 37);
			this->Semester->TabIndex = 5;
			this->Semester->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentEnrollment::comboBox1_SelectedIndexChanged);
			// 
			// courses
			// 
			this->courses->AccessibleName = L"courses";
			this->courses->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->courses->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->courses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->courses->Location = System::Drawing::Point(31, 89);
			this->courses->Name = L"courses";
			this->courses->RowHeadersWidth = 51;
			this->courses->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->courses->RowTemplate->Height = 24;
			this->courses->Size = System::Drawing::Size(777, 296);
			this->courses->TabIndex = 8;
			this->courses->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StudentEnrollment::courses_CellContentClick);
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleName = L"YearGroup";
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(469, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 37);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentEnrollment::comboBox1_SelectedIndexChanged_1);
			// 
			// YearGroup
			// 
			this->YearGroup->AutoSize = true;
			this->YearGroup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->YearGroup->Location = System::Drawing::Point(327, 44);
			this->YearGroup->Name = L"YearGroup";
			this->YearGroup->Size = System::Drawing::Size(141, 29);
			this->YearGroup->TabIndex = 9;
			this->YearGroup->Text = L"Year Group";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(666, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 36);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Filter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentEnrollment::button1_Click);
			// 
			// StudentEnrollment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(835, 569);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->YearGroup);
			this->Controls->Add(this->courses);
			this->Controls->Add(this->Semester);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EnrollCourse);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentEnrollment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentEnrollment";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->courses))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void courses_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void EnrollCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	// take the selected courses from the datagridview
	int count = 0;
	for (int i = 0; i < courses->Rows->Count; i++) {
		if (courses->Rows[i]->Cells[0]->Value != nullptr) {
			count++;
		}
	}

	if (count == 0) {
		MessageBox::Show("Please select a course to enroll");
		return;
	}

	// get the student id
	String^ student_id = "1";
	String^ semester = Semester->Text;
	String^ year_group = comboBox1->Text;

	// check if the selected course credits add up to 5 or 4.5
	float credits = 0;
	for (int i = 0; i < courses->Rows->Count; i++) {
		if (courses->Rows[i]->Cells[0]->Value != nullptr) {
			String^ course_id = courses->Rows[i]->Cells[0]->Value->ToString();
			db^ con = gcnew db();
			con->openConnection();
			String^ query = "SELECT credits FROM courses WHERE course_id = '" + course_id + "'";
			DataTable^ dt = con->fillDataTable(query);
			con->closeConnection();

			// convert to float
			credits += Convert::ToSingle(dt->Rows[0]->ItemArray[0]->ToString());
		}
	}

	// check if credits add up to 5 or 4.5
	if (credits != 5.0 || credits != 4.5) {
		MessageBox::Show("Please select courses that add up to 5 or 4.5 credits");
		return;
	}

	// get the selected courses
	for (int i = 0; i < courses->Rows->Count; i++) {
		if (courses->Rows[i]->Cells[0]->Value != nullptr) {
			String^ course_id = courses->Rows[i]->Cells[0]->Value->ToString();
			db^ con = gcnew db();
			con->openConnection();

			// loop through the selected courses and insert them into the enrollment table
			String^ query = "INSERT INTO Enrollment(student_id, course_id, semester) VALUES('" + student_id + "', '" + course_id + "', '" + semester + "')";
			con->executeQuery(query);
			con->closeConnection();
		}
	}
}
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// get the year and semester
	String^ semester = Semester->Text;
	String^ year_group = comboBox1->Text;

	// check if the year and semester are selected
	if (semester == "" || year_group == "") {
		MessageBox::Show("Please select the semester and year group");
		return;
	}

	// get the selected course from the database
	db^ con = gcnew db();
	con->openConnection();
	String^ query = "SELECT * FROM courses WHERE semester = '" + semester + "' AND year_group = '" + year_group + "'";
	DataTable^ dt = con->fillDataTable(query);
	con->closeConnection();
	courses->DataSource = dt;
}

	private: void FillYear(void) {
		db^ con = gcnew db();
		con->openConnection();

		// get the year group
		String^ query = "SELECT DISTINCT(year_group) FROM courses";

		DataTable^ dt = con->fillDataTable(query);

		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ year = dt->Rows[i]->ItemArray[0]->ToString();
			comboBox1->Items->Add(year);
		}

		con->closeConnection();
	}

	private: void FillSemester(void) {
		// get the semester
		db^ con = gcnew db();
		con->openConnection();

		String^ query = "SELECT DISTINCT(semester) FROM courses";
		DataTable^ dt = con->fillDataTable(query);
		MessageBox::Show(dt->Rows[0]->ItemArray[0]->ToString());
		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ sem = dt->Rows[i]->ItemArray[0]->ToString();
			Semester->Items->Add(sem);
		}

		con->closeConnection();
	}
};
}
