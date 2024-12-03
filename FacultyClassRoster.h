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
	/// Summary for FacultyClassRoster
	/// </summary>
	public ref class FacultyClassRoster : public System::Windows::Forms::Form
	{
	public:
		FacultyClassRoster(void)
		{
			InitializeComponent();
			FillCourse();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyClassRoster()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ courses;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->courses = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(445, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course: ";
			// 
			// courses
			// 
			this->courses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->courses->FormattingEnabled = true;
			this->courses->Location = System::Drawing::Point(601, 58);
			this->courses->Name = L"courses";
			this->courses->Size = System::Drawing::Size(407, 50);
			this->courses->TabIndex = 1;
			this->courses->SelectedIndexChanged += gcnew System::EventHandler(this, &FacultyClassRoster::courses_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(97, 146);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1384, 932);
			this->dataGridView1->TabIndex = 2;
			// 
			// FacultyClassRoster
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1586, 1137);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->courses);
			this->Controls->Add(this->label1);
			this->Name = L"FacultyClassRoster";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FacultyClassRoster";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void FillCourse(void) {
		String^ facultyId = GlobalVariables::currentUser->getFacultyID();
		// get the semester
		db^ con = gcnew db();
		con->openConnection();

		String^ query = "SELECT DISTINCT c.course_name FROM FacultyCourses fc JOIN Courses c ON fc.course_id = c.course_id WHERE fc.faculty_id =" + facultyId;
		DataTable^ dt = con->fillDataTable(query);
		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ course = dt->Rows[i]->ItemArray[0]->ToString();
			courses ->Items->Add(course);
		}

		con->closeConnection();
	}
	private: System::Void courses_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ courseName = courses->Text;

		String^ facultyId = GlobalVariables::currentUser->getFacultyID();
		// get the semester
		db^ con = gcnew db();
		con->openConnection();
		String^ query = "SELECT s.student_id,CONCAT(u.first_name, ' ', u.last_name) AS student_name,s.major,s.enrollment_date,c.course_name,fc.semester FROM Faculty f JOIN FacultyCourses fc ON f.faculty_id = fc.faculty_id JOIN Courses c ON fc.course_id = c.course_id JOIN Enrollment e ON c.course_id = e.course_id AND fc.semester = e.semester JOIN Students s ON e.student_id = s.student_id JOIN Users u ON s.user_id = u.user_id WHERE f.faculty_id = " + facultyId + " AND c.course_name = '" + courseName + "' AND e.status = 'enrolled';";
		DataTable^ dt = con->fillDataTable(query);
		con->closeConnection();
		if (dt != nullptr) {
			dataGridView1->DataSource = dt;
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
		}
		else {
			MessageBox::Show("Error loading data");
		}
	}
};
}
