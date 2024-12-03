#pragma once

#include "db_connection.h"
#include "GlobalVariable.h"
#include "updatePassword.h"

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for studentProfile
	/// </summary>
	public ref class studentProfile : public System::Windows::Forms::Form
	{
	public:
		studentProfile(void)
		{
			InitializeComponent();
			loadProfile();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~studentProfile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^ dtpEnrollmentDate;
	protected:

	protected:





	private: System::Windows::Forms::DateTimePicker^ dtpDOB;
	private: System::Windows::Forms::TextBox^ txtLName;
	private: System::Windows::Forms::TextBox^ txtFName;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label7;

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
			this->dtpEnrollmentDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtLName = (gcnew System::Windows::Forms::TextBox());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dtpEnrollmentDate
			// 
			this->dtpEnrollmentDate->Enabled = false;
			this->dtpEnrollmentDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpEnrollmentDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpEnrollmentDate->Location = System::Drawing::Point(255, 374);
			this->dtpEnrollmentDate->Margin = System::Windows::Forms::Padding(2);
			this->dtpEnrollmentDate->Name = L"dtpEnrollmentDate";
			this->dtpEnrollmentDate->Size = System::Drawing::Size(189, 34);
			this->dtpEnrollmentDate->TabIndex = 30;
			// 
			// dtpDOB
			// 
			this->dtpDOB->Enabled = false;
			this->dtpDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDOB->Location = System::Drawing::Point(253, 220);
			this->dtpDOB->Margin = System::Windows::Forms::Padding(2);
			this->dtpDOB->Name = L"dtpDOB";
			this->dtpDOB->Size = System::Drawing::Size(189, 34);
			this->dtpDOB->TabIndex = 29;
			this->dtpDOB->ValueChanged += gcnew System::EventHandler(this, &studentProfile::dtpDOB_ValueChanged);
			// 
			// txtLName
			// 
			this->txtLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLName->Location = System::Drawing::Point(255, 143);
			this->txtLName->Margin = System::Windows::Forms::Padding(2);
			this->txtLName->Multiline = true;
			this->txtLName->Name = L"txtLName";
			this->txtLName->ReadOnly = true;
			this->txtLName->Size = System::Drawing::Size(467, 30);
			this->txtLName->TabIndex = 28;
			// 
			// txtFName
			// 
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFName->Location = System::Drawing::Point(255, 69);
			this->txtFName->Margin = System::Windows::Forms::Padding(2);
			this->txtFName->Multiline = true;
			this->txtFName->Name = L"txtFName";
			this->txtFName->ReadOnly = true;
			this->txtFName->Size = System::Drawing::Size(467, 28);
			this->txtFName->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(7, 374);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(191, 29);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Enrollment Date:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 296);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 29);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 225);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 29);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Date of Birth:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(9, 145);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 29);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 69);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 29);
			this->label1->TabIndex = 19;
			this->label1->Text = L"First Name:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(907, 63);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(214, 188);
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &studentProfile::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(907, 279);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 35);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Upload";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &studentProfile::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(255, 296);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(467, 31);
			this->textBox1->TabIndex = 37;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(255, 449);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(467, 31);
			this->textBox2->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(7, 449);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 29);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Major:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(253, 509);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(334, 44);
			this->button2->TabIndex = 40;
			this->button2->Text = L"Update Password";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &studentProfile::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 524);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(126, 29);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Password:";
			// 
			// studentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 675);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dtpEnrollmentDate);
			this->Controls->Add(this->dtpDOB);
			this->Controls->Add(this->txtLName);
			this->Controls->Add(this->txtFName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"studentProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// upload profile picture
		OpenFileDialog^ dialog = gcnew OpenFileDialog();
		dialog->Filter = "Image Files|*.jpg;*.jpeg;*.png;*.gif;*.bmp";
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pictureBox1->ImageLocation =EscapeBackslashes(dialog->FileName);
		}

		// save the image to the database
		db^ con = gcnew db();
		con->openConnection();
		String^ user_id = GlobalVariables::currentUser->getId();
		String^ query = "UPDATE students SET profile_picture = '" + pictureBox1->ImageLocation + "' WHERE user_id = " + user_id;

		con->executeQuery(query);
		MessageBox::Show("Profile picture updated successfully.");
	}

		   private: void loadProfile() {
			   // get the student ID from the global variable
			   
			   String^ student_id = GlobalVariables::currentUser->getStudentID();

			   db^ con = gcnew db();
			   con->openConnection();

			   // get student data from the users table
			   String^ query = "SELECT * FROM users WHERE user_id = (SELECT user_id FROM students WHERE student_id = " + student_id + ")";
			   DataTable^ dt = con->fillDataTable(query);

			   // check if data exists
			   if (dt->Rows->Count > 0) {
				   // get the first row's data
				   DataRow^ row = dt->Rows[0];
				   txtFName->Text = row["first_name"]->ToString();
				   txtLName->Text = row["last_name"]->ToString();
				   textBox1->Text = row["email"]->ToString();
			   }
			   else {
				   MessageBox::Show("No data found for the given student ID.");
			   }

			   // load student details from student table
			   String^ sql = "SELECT date_of_birth, major, profile_picture, enrollment_date FROM students WHERE student_id = " + student_id;
			   DataTable^ student = con->fillDataTable(sql);

			   if (student->Rows->Count > 0) {
				   DataRow^ data = dt->Rows[0];
				   dtpDOB->Value = Convert::ToDateTime(data["date_of_birth"]);
				   textBox2->Text = data["major"]->ToString();
				   dtpEnrollmentDate->Value = Convert::ToDateTime(data["enrollment_date"]);
				   pictureBox1->ImageLocation = data["profile_picture"]->ToString();
			   }
			   else {
				   MessageBox::Show("No data found for the given student ID.");
			   }

			   con->closeConnection();
		   }
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: String^ EscapeBackslashes(String^ input) {
	// Replace single backslashes with double backslashes
	return input->Replace("\\", "\\\\");
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// redirect to update password form
	updatePassword^ update = gcnew updatePassword();
	update->ShowDialog();
}
private: System::Void dtpDOB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
