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
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for FacultyManageCourses
	/// </summary>
	public ref class FacultyManageCourses : public System::Windows::Forms::Form
	{
	public:
		FacultyManageCourses(void)
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
		~FacultyManageCourses()
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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button2;



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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(42, 165);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1758, 728);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Courses: ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(548, 962);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 74);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Enroll";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FacultyManageCourses::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(232, 66);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(359, 50);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FacultyManageCourses::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1020, 962);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(228, 74);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Complete";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FacultyManageCourses::button2_Click);
			// 
			// FacultyManageCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1846, 1082);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"FacultyManageCourses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Enrollment Management";
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
				comboBox1->Items->Add(course);
			}

			con->closeConnection();
		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		Reload();
	}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	List<String^>^ selectedIDs = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView1->SelectedRows) {
		if (row->Cells["ID"]->Value != nullptr) {
			selectedIDs->Add(row->Cells["ID"]->Value->ToString());
		}
	}

	String^ ids = String::Join(",", selectedIDs);
	if (ids->Length == 0) {
		MessageBox::Show("No valid IDs found in selected rows.");
		return;
	}

	db^ con = gcnew db();
	con->openConnection();
	String^ query = "UPDATE `enrollment` SET `status`='enrolled' WHERE student_id IN (" + ids + ")";
	con->executeQuery(query);
	MessageBox::Show("Enrolled Successfully");
	con->closeConnection();
	Reload();
	/*int selectedRow = dataGridView1->CurrentRow->Index;
	DataGridViewRow^ row = dataGridView1->Rows[selectedRow];
	String^ student_id = row->Cells["ID"]->Value->ToString();
	db^ con = gcnew db();
	con->openConnection();
	String^ query = "UPDATE `enrollment` SET `status`='enrolled' WHERE student_id = " + student_id + ";";
	con->executeQuery(query);
	MessageBox::Show(" Enrolled Successfully");
	con->closeConnection();
	Reload();*/
}

private: void Reload(void) {
	String^ courseName = comboBox1->Text;

	String^ facultyId = "1";
	// get the semester
	db^ con = gcnew db();
	con->openConnection();
	String^ query = "SELECT s.student_id AS ID,CONCAT(u.first_name, ' ', u.last_name) AS student_name,s.major,e.status,c.course_name,fc.semester FROM Faculty f JOIN FacultyCourses fc ON f.faculty_id = fc.faculty_id JOIN Courses c ON fc.course_id = c.course_id JOIN Enrollment e ON c.course_id = e.course_id AND fc.semester = e.semester JOIN Students s ON e.student_id = s.student_id JOIN Users u ON s.user_id = u.user_id WHERE f.faculty_id = " + facultyId + " AND e.status = 'pending' AND c.course_name = '" + courseName + "';";
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

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	List<String^>^ selectedIDs = gcnew List<String^>();
	for each (DataGridViewRow ^ row in dataGridView1->SelectedRows) {
		if (row->Cells["ID"]->Value != nullptr) { 
			selectedIDs->Add(row->Cells["ID"]->Value->ToString());
		}
	}

	String^ ids = String::Join(",", selectedIDs); 
	if (ids->Length == 0) {
		MessageBox::Show("No valid IDs found in selected rows.");
		return;
	}

	db^ con = gcnew db();
	con->openConnection();
	String^ query = "UPDATE `enrollment` SET `status`='compeleted' WHERE student_id IN (" + ids + ")";
	con->executeQuery(query);
	MessageBox::Show("Marked as completed Successfully");
	con->closeConnection();
	Reload();


	/*int selectedRow = dataGridView1->CurrentRow->Index;
	DataGridViewRow^ row = dataGridView1->Rows[selectedRow];
	String^ student_id = row->Cells["ID"]->Value->ToString();
	db^ con = gcnew db();
	con->openConnection();
	String^ query = "UPDATE `enrollment` SET `status`='compeleted' WHERE student_id = " + student_id + ";";
	con->executeQuery(query);
	MessageBox::Show("Marked as completed Successfully");
	con->closeConnection();
	Reload();*/

}
};
}
