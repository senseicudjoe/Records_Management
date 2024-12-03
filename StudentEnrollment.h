#pragma once

#include "db_connection.h"
#include "GlobalVariable.h"

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
			this->label1->Location = System::Drawing::Point(196, 29);
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
			this->Semester->Location = System::Drawing::Point(338, 29);
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
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(484, 29);
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
			this->Controls->Add(this->courses);
			this->Controls->Add(this->Semester);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->EnrollCourse);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StudentEnrollment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentEnrollment";
			this->Load += gcnew System::EventHandler(this, &StudentEnrollment::StudentEnrollment_Load);
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
	// Validate selected courses
	int count = 0;
	for (int i = 0; i < courses->Rows->Count; i++) {
		if (courses->Rows[i]->Cells[0]->Value != nullptr) {
			count++;
		}
	}

	if (count == 0) {
		MessageBox::Show("Please select a course to enroll.");
		return;
	}

	String^ student_id = GlobalVariables::currentUser->getStudentID();
	String^ semester = Semester->Text;

	if (String::IsNullOrWhiteSpace(semester)) {
		MessageBox::Show("Please select a valid semester.");
		return;
	}

	db^ con = gcnew db();

	// Validate course credits
	float credits = 0;
	for (int i = 0; i < courses->Rows->Count; i++) {
		if (courses->Rows[i]->Cells[0]->Value != nullptr) {
			String^ course_id = courses->Rows[i]->Cells[0]->Value->ToString();
			con->openConnection();
			String^ query = "SELECT credits FROM courses WHERE course_id = '" + course_id + "'";
			DataTable^ dt = con->fillDataTable(query);
			con->closeConnection();

			if (dt->Rows->Count > 0 && dt->Rows[0]->ItemArray[0] != nullptr) {
				credits += Convert::ToSingle(dt->Rows[0]->ItemArray[0]->ToString());
			}
			else {
				MessageBox::Show("Invalid credit value for course: " + course_id);
				return;
			}
		}
	}

	// Check enrolled credits
	con->openConnection();
	String^ query = "SELECT SUM(credits) FROM courses WHERE course_id IN (SELECT course_id FROM Enrollment WHERE student_id = '" + student_id + "') AND semester = '" + semester + "'";
	DataTable^ dt = con->fillDataTable(query);
	con->closeConnection();

	float enrolled_credits = 0;
	if (dt->Rows->Count > 0 && dt->Rows[0]->ItemArray[0] != nullptr && dt->Rows[0]->ItemArray[0]->ToString() != "") {
		enrolled_credits = Convert::ToSingle(dt->Rows[0]->ItemArray[0]->ToString());
	}

	if (enrolled_credits + credits > 3.0) {
		MessageBox::Show("You cannot enroll in more than 3 credits.");
		return;
	}

	if (credits <= 2.0) {
		MessageBox::Show("Please select courses that add up to 2.0 or more credits.");
		return;
	}

	// Enroll courses
	for (int i = 0; i < courses->Rows->Count; i++) {
		if (courses->Rows[i]->Cells[0]->Value != nullptr) {
			String^ course_id = courses->Rows[i]->Cells[0]->Value->ToString();
			con->openConnection();
			query = "INSERT INTO Enrollment(student_id, course_id, semester) VALUES('" + student_id + "', '" + course_id + "', '" + semester + "')";
			con->executeQuery(query);
			con->closeConnection();
		}
	}

	MessageBox::Show("Enrollment successful!");

	// Refresh the courses
	filterTable(semester);
}

private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// get the year and semester
	String^ semester = Semester->Text;

	// check if the year and semester are selected
	if (semester == "") {
		MessageBox::Show("Please select the semester.");
		return;
	}

	filterTable(semester);
}

	   private: void filterTable(String^ semester) {
		   db^ con = gcnew db();
		   // get the courses the student is already enrolled in (Enrollment Table)
		   con->openConnection();
		   String^ query = "SELECT course_id FROM Enrollment WHERE student_id = '" + GlobalVariables::currentUser->getStudentID() + "'";
		   DataTable^ dt = con->fillDataTable(query);
		   con->closeConnection();

		   // get the courses the student is not enrolled in
		   con->openConnection();
		   query = "SELECT `course_id` ,`course_name`, `credits`, `semester`, `description` FROM courses WHERE semester = '" + semester + "'";
		   DataTable^ dt2 = con->fillDataTable(query);
		   con->closeConnection();

		   // remove the courses the student is already enrolled in
		   for (int i = 0; i < dt->Rows->Count; i++) {
			   for (int j = 0; j < dt2->Rows->Count; j++) {
				   if (dt->Rows[i]->ItemArray[0]->ToString() == dt2->Rows[j]->ItemArray[0]->ToString()) {
					   dt2->Rows->RemoveAt(j);
				   }
			   }
		   }

		   courses->DataSource = dt2;
	 }
	
	private: void FillSemester(void) {
		// get the semester
		db^ con = gcnew db();
		con->openConnection();

		String^ query = "SELECT DISTINCT(semester) FROM courses";
		DataTable^ dt = con->fillDataTable(query);
		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ sem = dt->Rows[i]->ItemArray[0]->ToString();
			Semester->Items->Add(sem);
		}

		con->closeConnection();
	}
private: System::Void StudentEnrollment_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
