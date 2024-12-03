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
	/// Summary for studentSchedule
	/// </summary>
	public ref class studentSchedule : public System::Windows::Forms::Form
	{
	public:
		studentSchedule(void)
		{
			InitializeComponent();
			loadClassSchedule(GlobalVariables::currentUser->getStudentID(), "SEM1");
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentSchedule()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(45, 33);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(1079, 619);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &studentSchedule::dataGridView1_CellContentClick);
			// 
			// studentSchedule
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1169, 675);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"studentSchedule";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentSchedule";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: void loadClassSchedule(String^ student_id, String^ current_semester) {
		db^ con = gcnew db();

		con->openConnection();
		String^ query = "SELECT " +
			"cs.schedule_id, " +
			"c.course_name, " +
			"CONCAT(u.first_name, ' ', u.last_name) AS faculty_name, " +
			"cs.day, " +
			"TIME_FORMAT(cs.start_time, '%h:%i %p') AS start_time, " +
			"TIME_FORMAT(cs.end_time, '%h:%i %p') AS end_time, " +
			"cs.room_number " +
			"FROM " +
			"ClassSchedule cs " +
			"JOIN " +
			"Courses c ON cs.course_id = c.course_id "
			"JOIN " +
			"Faculty f ON cs.faculty_id = f.faculty_id " +
			"JOIN " +
			"Users u ON f.user_id = u.user_id " +
			"JOIN " +
			"Enrollment e ON e.course_id = cs.course_id " +
			"WHERE " +
			"e.student_id = " + student_id + " " +
			"AND cs.semester = " + "'" + current_semester + "'" + " " +
			"ORDER BY "
			"FIELD(cs.day, 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday'), " +
			"cs.start_time ASC;";
		DataTable^ dt = con->fillDataTable(query);
		if (dt != nullptr) {
			dataGridView1->DataSource = dt;
		}
		else {
			MessageBox::Show("Error loading data");
		}
	}

	};
}
