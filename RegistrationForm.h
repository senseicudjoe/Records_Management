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
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ btnPicture;
	protected:


	private: System::Windows::Forms::ComboBox^ txtDepartment;

	private: System::Windows::Forms::DateTimePicker^ dtpDOB;
	private: System::Windows::Forms::TextBox^ txtLName;
	private: System::Windows::Forms::TextBox^ txtFName;
	private: System::Windows::Forms::Button^ btnSave;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ UploadPicture;









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
			this->btnPicture = (gcnew System::Windows::Forms::PictureBox());
			this->txtDepartment = (gcnew System::Windows::Forms::ComboBox());
			this->dtpDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtLName = (gcnew System::Windows::Forms::TextBox());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->UploadPicture = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// btnPicture
			// 
			this->btnPicture->Location = System::Drawing::Point(913, 77);
			this->btnPicture->Margin = System::Windows::Forms::Padding(2);
			this->btnPicture->Name = L"btnPicture";
			this->btnPicture->Size = System::Drawing::Size(218, 196);
			this->btnPicture->TabIndex = 34;
			this->btnPicture->TabStop = false;
			// 
			// txtDepartment
			// 
			this->txtDepartment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtDepartment->FormattingEnabled = true;
			this->txtDepartment->Location = System::Drawing::Point(267, 286);
			this->txtDepartment->Margin = System::Windows::Forms::Padding(2);
			this->txtDepartment->Name = L"txtDepartment";
			this->txtDepartment->Size = System::Drawing::Size(453, 33);
			this->txtDepartment->TabIndex = 31;
			this->txtDepartment->SelectedIndexChanged += gcnew System::EventHandler(this, &RegistrationForm::txtDepartment_SelectedIndexChanged);
			// 
			// dtpDOB
			// 
			this->dtpDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dtpDOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDOB->Location = System::Drawing::Point(267, 233);
			this->dtpDOB->Margin = System::Windows::Forms::Padding(2);
			this->dtpDOB->Name = L"dtpDOB";
			this->dtpDOB->Size = System::Drawing::Size(189, 30);
			this->dtpDOB->TabIndex = 29;
			// 
			// txtLName
			// 
			this->txtLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtLName->Location = System::Drawing::Point(267, 129);
			this->txtLName->Margin = System::Windows::Forms::Padding(2);
			this->txtLName->Multiline = true;
			this->txtLName->Name = L"txtLName";
			this->txtLName->Size = System::Drawing::Size(453, 25);
			this->txtLName->TabIndex = 28;
			// 
			// txtFName
			// 
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtFName->Location = System::Drawing::Point(267, 77);
			this->txtFName->Margin = System::Windows::Forms::Padding(2);
			this->txtFName->Multiline = true;
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(453, 25);
			this->txtFName->TabIndex = 27;
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnSave->Location = System::Drawing::Point(447, 497);
			this->btnSave->Margin = System::Windows::Forms::Padding(2);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(371, 48);
			this->btnSave->TabIndex = 26;
			this->btnSave->Text = L"Register";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &RegistrationForm::btnSave_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(19, 282);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Major";
			this->label4->Click += gcnew System::EventHandler(this, &RegistrationForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(19, 229);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 25);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Date of Birth:";
			this->label3->Click += gcnew System::EventHandler(this, &RegistrationForm::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(21, 125);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(21, 77);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 25);
			this->label1->TabIndex = 19;
			this->label1->Text = L"First Name:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(267, 184);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(453, 25);
			this->textBox1->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(21, 180);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 25);
			this->label8->TabIndex = 35;
			this->label8->Text = L"Email: ";
			this->label8->Click += gcnew System::EventHandler(this, &RegistrationForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(761, 79);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 25);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Profile Picture:";
			this->label9->Click += gcnew System::EventHandler(this, &RegistrationForm::label9_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(21, 346);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 25);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(19, 403);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 25);
			this->label6->TabIndex = 40;
			this->label6->Text = L"Confirm Password";
			this->label6->Click += gcnew System::EventHandler(this, &RegistrationForm::label6_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox4->Location = System::Drawing::Point(267, 346);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(453, 30);
			this->textBox4->TabIndex = 42;
			this->textBox4->UseSystemPasswordChar = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(267, 403);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(453, 30);
			this->textBox2->TabIndex = 43;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// UploadPicture
			// 
			this->UploadPicture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->UploadPicture->Location = System::Drawing::Point(958, 296);
			this->UploadPicture->Name = L"UploadPicture";
			this->UploadPicture->Size = System::Drawing::Size(131, 37);
			this->UploadPicture->TabIndex = 44;
			this->UploadPicture->Text = L"Upload";
			this->UploadPicture->UseVisualStyleBackColor = true;
			this->UploadPicture->Click += gcnew System::EventHandler(this, &RegistrationForm::UploadPicture_Click);
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 675);
			this->Controls->Add(this->UploadPicture);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnPicture);
			this->Controls->Add(this->txtDepartment);
			this->Controls->Add(this->dtpDOB);
			this->Controls->Add(this->txtLName);
			this->Controls->Add(this->txtFName);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"RegistrationForm";
			this->Text = L"RegistrationForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnPicture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the values from the form
	String^ firstName = txtFName->Text;
	String^ lastName = txtLName->Text;
	String^ email = textBox1->Text;
	String^ dob = dtpDOB->Text;
	String^ major = txtDepartment->Text;
	String^ password = textBox4->Text;
	String^ confirmPassword = textBox2->Text;
	String^ picture = btnPicture->ImageLocation;

	// check whether the user already exists using the email, return false [redirect to login page if exists]
	db^ conn = gcnew db(); // create a databse instance
	conn->openConnection(); // open the connection
	conn->executeQuery("SELECT email FROM users WHERE email = '" + email + "'"); // execute the query

	if (conn->dr->Read()) {
		// if the user exists, return false
		MessageBox::Show("User Already Exists");
	}

	// if the user does not exist, register the user, return true
	conn->executeQuery("INSERT INTO users (email, first_name, last_name, password, role) VALUES ('" + email + "', '" + firstName + "', '" + lastName + "', '" + password + "', student)");

	// insert user if student into student table

	// get the user_id of the user
	String^ query = "SELECT user_id FROM users WHERE email = '" + email + "'";
	conn->executeQuery(query);
	conn->dr->Read();
	String^ user_id = conn->dr->GetString(0);

	conn->executeQuery("INSERT INTO students (user_id, date_of_birth, major, profile_picture) VALUES ('" + user_id + "', '"  + email + "', '" + dob + "', '" + major + "', '" + picture + "')");
	conn->closeConnection();
	
	MessageBox::Show("User Registered Successfully");
}
private: System::Void txtDepartment_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void UploadPicture_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialog = gcnew OpenFileDialog();
	dialog->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp; *.png)|*.jpg; *.jpeg; *.gif; *.bmp; *.png";
	if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		btnPicture->ImageLocation = dialog->FileName;
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void roleDropdown_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
