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
	/// Summary for editFaculty
	/// </summary>
	public ref class editFaculty : public System::Windows::Forms::Form
	{
	public:
		editFaculty(String^ faculty_id)
		{
			InitializeComponent();
			fillData(faculty_id);
			this->faculty_id = faculty_id;
			//
			//TODO: Add the constructor code here
			//
		}

	private:
		String^ faculty_id;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editFaculty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(185, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 78);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &editFaculty::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Computer Science and Information Systems", L"Business Administration",
					L"Engineering"
			});
			this->comboBox1->Location = System::Drawing::Point(207, 262);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 37);
			this->comboBox1->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(64, 262);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 29);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Department";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox3->Location = System::Drawing::Point(207, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(311, 36);
			this->textBox3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(64, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Email";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(207, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(311, 36);
			this->textBox2->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(64, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 29);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Last Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(207, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 36);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(64, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"First Name";
			// 
			// editFaculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 486);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"editFaculty";
			this->Text = L"editFaculty";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// save the changes made to the faculty
		db^ connect = gcnew db();
		connect->openConnection();
		String^ query = "UPDATE users u "
			"JOIN faculty f ON u.user_id = f.user_id "
			"SET "
			"u.first_name = '" + textBox1->Text + "', "
			"u.last_name = '" + textBox2->Text + "', "
			"u.email = '" + textBox3->Text + "', "
			"f.department = '" + comboBox1->Text + "' "
			"WHERE f.faculty_id = " + faculty_id;
		connect->executeQuery(query);
		connect->closeConnection();
		MessageBox::Show("Faculty details updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->Close();
	}

	private: void fillData(String^ faculty_id) {
		   // fill the data of the faculty edit form
		   db^ connect = gcnew db();
		   connect->openConnection();

		   String^ query = "SELECT "
			   "u.first_name, "
			   "u.last_name, "
			   "u.email, "
			   "f.department "
			   "FROM users u "
			   "JOIN faculty f ON u.user_id = f.user_id "
			   "WHERE u.user_id = " + faculty_id;

		   DataTable^ dt = connect->fillDataTable(query);
		   connect->closeConnection();

		   textBox1->Text = dt->Rows[0]->ItemArray[0]->ToString();
		   textBox2->Text = dt->Rows[0]->ItemArray[1]->ToString();
		   textBox3->Text = dt->Rows[0]->ItemArray[2]->ToString();
		   comboBox1->Text = dt->Rows[0]->ItemArray[3]->ToString();

	}
};
}
