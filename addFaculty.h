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
	/// Summary for addFaculty
	/// </summary>
	public ref class addFaculty : public System::Windows::Forms::Form
	{
	public:
		addFaculty(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addFaculty()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(71, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(214, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 36);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(214, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(311, 36);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(71, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Last Name";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox3->Location = System::Drawing::Point(214, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(311, 36);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(71, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(71, 237);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 29);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Department";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Computer Science and Information Systems", L"Business Administration",
					L"Engineering"
			});
			this->comboBox1->Location = System::Drawing::Point(214, 237);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 37);
			this->comboBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(192, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 78);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add Faculty";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addFaculty::button1_Click);
			// 
			// addFaculty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 453);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"addFaculty";
			this->Text = L"addFaculty";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = textBox1->Text;
		String^ lastName = textBox2->Text;
		String^ email = textBox3->Text;
		String^ department = comboBox1->Text;
		if (firstName == "" || lastName == "" || email == "" || department == "") {
			MessageBox::Show("Please fill all the fields");
		}
		else {
			db^ conn = gcnew db();

			conn->openConnection();

			// insert first_name, last_name, and email into users table
			// set default password to "password"
			String^ query = "INSERT INTO users (first_name, last_name, email, password, role) VALUES ('" + firstName + "', '" + lastName + "', '" + email + "'" + ", 'password', 'faculty')";
			conn->executeQuery(query);
			conn->closeConnection();

			// get the user_id of the user that was just inserted
			conn->openConnection();
			query = "SELECT user_id FROM users WHERE email = '" + email + "'";
			conn->executeQuery(query);

			String^ user_id;
			while (conn->dr->Read()) {
				user_id = conn->dr->GetString(0);
			}
			conn->closeConnection();

			// insert user_id and department into faculty table
			conn->openConnection();
			query = "INSERT INTO faculty (user_id, department) VALUES ('" + user_id + "', '" + department + "')";
			conn->executeQuery(query);
			conn->closeConnection();

			MessageBox::Show("Faculty added successfully");
			this->Close();
		}
	}
};
}
