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
	/// Summary for studentTranscript
	/// </summary>
	public ref class studentTranscript : public System::Windows::Forms::Form
	{
	public:
		studentTranscript(void)
		{
			InitializeComponent();
			loadTranscript(GlobalVariables::currentUser->getStudentID());
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentTranscript()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ label2;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(158, 45);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(850, 627);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &studentTranscript::dataGridView1_CellContentClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 45);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 29);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Transcript:";
			// 
			// studentTranscript
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1060, 675);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"studentTranscript";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"studentTranscript";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

		private: void loadTranscript(String^ student_id) {
			db^ con = gcnew db();
			con->openConnection();

			String^ query = "SELECT " +
				"s.student_id," +
				"c.course_name," +
				"c.credits," +
				"t.semester," +
				"t.final_grade AS grade_value " +
				"FROM " +
				"Transcripts t " +
				"JOIN " +
				"Students s ON t.student_id = s.student_id " +
				"JOIN " +
				"Users u ON s.user_id = u.user_id " +
				"JOIN " +
				"Courses c ON t.course_id = c.course_id " +
				"WHERE " +
				"t.student_id = " + student_id + " " +
				"ORDER BY t.date_issued DESC;";

			DataTable^ dt = con->fillDataTable(query);
			if (dt != nullptr) {
				dataGridView1->DataSource = dt;

				dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
				dataGridView1->AutoSizeRowsMode = DataGridViewAutoSizeRowsMode::AllCells;
			}
			else {
				MessageBox::Show("Error loading data");
			}

			con->closeConnection();
		}

	};
}
