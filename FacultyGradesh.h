#pragma once
#include "db_connection.h"
#include "FacultyAddGrade.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyGradesh
	/// </summary>
	public ref class FacultyGradesh : public System::Windows::Forms::Form
	{
	public:
		FacultyGradesh(void)
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
		~FacultyGradesh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Course:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(199, 62);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(524, 50);
			this->comboBox1->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(46, 133);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1772, 817);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FacultyGradesh::dataGridView1_CellClick);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(831, 1004);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(350, 79);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Add Grade";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FacultyGradesh::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(831, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(350, 60);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Filter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FacultyGradesh::button1_Click);
			// 
			// FacultyGradesh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1867, 1129);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"FacultyGradesh";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"FacultyGrades";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void FillCourse(void) {
		String^ facultyId = "1";
		// get the semester
		db^ con = gcnew db();
		con->openConnection();

		String^ query = "SELECT DISTINCT c.course_name FROM FacultyCourses fc JOIN Courses c ON fc.course_id = c.course_id WHERE fc.faculty_id =" + facultyId;
		DataTable^ dt = con->fillDataTable(query);
		MessageBox::Show(dt->Rows[0]->ItemArray[0]->ToString());
		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ course = dt->Rows[i]->ItemArray[0]->ToString();
			comboBox1->Items->Add(course);
		}

		con->closeConnection();
	}

	private: void FillYear(void) {
		String^ facultyId = "1";
		// get the semester
		db^ con = gcnew db();
		con->openConnection();

		String^ query = "SELECT DISTINCT c.course_name FROM FacultyCourses fc JOIN Courses c ON fc.course_id = c.course_id WHERE fc.faculty_id =" + facultyId;
		DataTable^ dt = con->fillDataTable(query);
		MessageBox::Show(dt->Rows[0]->ItemArray[0]->ToString());
		for (int i = 0; i < dt->Rows->Count; i++) {
			String^ course = dt->Rows[i]->ItemArray[0]->ToString();
			comboBox1->Items->Add(course);
		}

		con->closeConnection();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ course = comboBox1->Text;
		// get the semester
		db^ con = gcnew db();
		con->openConnection();
		String^ query = "SELECT S.student_id AS ID, CONCAT(U.first_name, ' ', U.last_name) AS student_name, S.major, S.year_group, G.grade FROM Enrollment E JOIN Students S ON E.student_id = S.student_id JOIN Users U ON S.user_id = U.user_id JOIN Grades G ON S.student_id = G.student_id JOIN Courses C ON E.course_id = C.course_id WHERE C.course_name = '"+ course +"' AND E.status = 'Enrolled';";
		MessageBox::Show(query);
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
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
	

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// get course_id from the selected row
	int selectedRow = dataGridView1->CurrentRow->Index;
	DataGridViewRow^ row = dataGridView1->Rows[selectedRow];
	String^ student_id = row->Cells["ID"]->Value->ToString();
	FacultyAddGrade^ grade = gcnew FacultyAddGrade(student_id);
	grade->ShowDialog();
	button1->PerformClick();

}
};
}
