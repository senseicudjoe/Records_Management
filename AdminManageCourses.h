#pragma once

#include "db_connection.h"
#include "addCourses.h"
#include "editCourse.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminManageCourses
	/// </summary>
	public ref class AdminManageCourses : public System::Windows::Forms::Form
	{
	public:
		AdminManageCourses(void)
		{
			InitializeComponent();
			loadCourses();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminManageCourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(845, 627);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 35);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminManageCourses::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(581, 627);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 35);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminManageCourses::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(333, 627);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 35);
			this->button1->TabIndex = 7;
			this->button1->Text = L"New";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminManageCourses::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(542, 63);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 29);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Courses: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(35, 99);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1172, 466);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminManageCourses::dataGridView1_CellContentClick);
			// 
			// AdminManageCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1242, 675);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AdminManageCourses";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminManageCourses";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}

		   private: void loadCourses(void) {
			   db^ database = gcnew db();
			   database->openConnection();

			   // get all the courses and display in the Grid
			   String^ query = "SELECT "
				   "c.course_id,"
				   "c.course_name,"
				   "c.credits,"
				   "c.semester,"
				   "CONCAT(u.first_name, ' ', u.last_name) AS Faculty,"
				   " GROUP_CONCAT(prereq.course_name SEPARATOR ', ') AS Prerequisites "
				   "FROM courses c "
				   "JOIN facultyCourses fc ON c.course_id = fc.course_id "
				   "LEFT JOIN coursePrerequisites cp ON c.course_id = cp.course_id "  
				   "LEFT JOIN courses prereq ON cp.prerequisite_course_id = prereq.course_id "
				   "JOIN Faculty f ON fc.faculty_id = f.faculty_id "
				   "JOIN users u ON f.user_id = u.user_id "
				   "GROUP BY c.course_id, c.course_name, c.credits, c.semester, u.first_name, u.last_name";

			   DataTable^ dt = database->fillDataTable(query);
			   dataGridView1->DataSource = dt;

			   dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			   dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
			   database->closeConnection();
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//  open the addCourses form
	  addCourses^ addCourse = gcnew addCourses();
	  addCourse->ShowDialog();
	  loadCourses();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// get course_id from the selected row
	int selectedRow = dataGridView1->CurrentRow->Index;
	DataGridViewRow^ row = dataGridView1->Rows[selectedRow];
	String^ course_id = row->Cells["course_id"]->Value->ToString();

	// open the editCourses form
	editCourse^ editCourseForm = gcnew editCourse(course_id);
	editCourseForm->ShowDialog();
	loadCourses();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// open the delete confirmation dialog
	int selectedRow = dataGridView1->CurrentRow->Index;
	DataGridViewRow^ row = dataGridView1->Rows[selectedRow];
	String^ course_id = row->Cells["course_id"]->Value->ToString();
	String^ course_name = row->Cells["course_name"]->Value->ToString();

	String^ message = "Are you sure you want to delete " + course_name + "?";
	String^ title = "Delete Course";
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	System::Windows::Forms::DialogResult result = MessageBox::Show(message, title, buttons);

	if (result == System::Windows::Forms::DialogResult::Yes) {
		// delete the course
		db^ database = gcnew db();
		database->openConnection();
		String^ query = "DELETE FROM courses WHERE course_id = " + course_id;
		database->executeQuery(query);
		database->closeConnection();
	}

	// reload the courses
	loadCourses();
}
};
}
