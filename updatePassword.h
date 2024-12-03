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
	/// Summary for updatePassword
	/// </summary>
	public ref class updatePassword : public System::Windows::Forms::Form
	{
	public:
		updatePassword(void)
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
		~updatePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(192, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(286, 36);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &updatePassword::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Old Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"New Password";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox2->Location = System::Drawing::Point(192, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(286, 36);
			this->textBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(84, 211);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Confirm New Password";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox3->Location = System::Drawing::Point(235, 197);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(243, 36);
			this->textBox3->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(144, 281);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(237, 60);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &updatePassword::button1_Click);
			// 
			// updatePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 414);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"updatePassword";
			this->Text = L"updatePassword";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// check if old password is correct
	String^ oldPassword = textBox1->Text;
	String^ newPassword = textBox2->Text;
	String^ confirmPassword = textBox3->Text;

	db^ con = gcnew db();
	con->openConnection();

	// get password from User Table
	String^ query = "SELECT password FROM users WHERE user_id = '" + GlobalVariables::currentUser->getId() + "'";
	con->executeQuery(query);
	con->dr->Read();
	if (!con->dr->HasRows) {
		MessageBox::Show("Error updating password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	String^ password = con->dr->GetString(0);
	con->closeConnection();

	if (password == oldPassword) {
		if (newPassword == confirmPassword) {
			// update password
			db^ conn = gcnew db();
			conn->openConnection();
			String^ newQuery = "UPDATE users SET password = '" + newPassword + "' WHERE user_id = '" + GlobalVariables::currentUser->getId() + "'";
			conn->executeQuery(newQuery);
			conn->closeConnection();
			MessageBox::Show("Password updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->Close();
		}
		else {
			MessageBox::Show("New password and confirm password do not match", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Old password is incorrect", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
