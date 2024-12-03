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
	/// Summary for FacultyProfile
	/// </summary>
	public ref class FacultyProfile : public System::Windows::Forms::Form
	{
	public:
		FacultyProfile(void)
		{
			InitializeComponent();
			FillFields();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FacultyProfile()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textEmail;



	private: System::Windows::Forms::DateTimePicker^ dtpHireDate;

	private: System::Windows::Forms::TextBox^ txtLName;
	private: System::Windows::Forms::TextBox^ txtFName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;


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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textEmail = (gcnew System::Windows::Forms::TextBox());
			this->dtpHireDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtLName = (gcnew System::Windows::Forms::TextBox());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 616);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 42);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Department: ";
			// 
			// textEmail
			// 
			this->textEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textEmail->Location = System::Drawing::Point(426, 378);
			this->textEmail->Multiline = true;
			this->textEmail->Name = L"textEmail";
			this->textEmail->ReadOnly = true;
			this->textEmail->Size = System::Drawing::Size(698, 46);
			this->textEmail->TabIndex = 51;
			// 
			// dtpHireDate
			// 
			this->dtpHireDate->Enabled = false;
			this->dtpHireDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpHireDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpHireDate->Location = System::Drawing::Point(426, 499);
			this->dtpHireDate->Name = L"dtpHireDate";
			this->dtpHireDate->Size = System::Drawing::Size(273, 49);
			this->dtpHireDate->TabIndex = 48;
			// 
			// txtLName
			// 
			this->txtLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLName->Location = System::Drawing::Point(426, 245);
			this->txtLName->Multiline = true;
			this->txtLName->Name = L"txtLName";
			this->txtLName->ReadOnly = true;
			this->txtLName->Size = System::Drawing::Size(698, 45);
			this->txtLName->TabIndex = 46;
			// 
			// txtFName
			// 
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFName->Location = System::Drawing::Point(426, 130);
			this->txtFName->Multiline = true;
			this->txtFName->Name = L"txtFName";
			this->txtFName->ReadOnly = true;
			this->txtFName->Size = System::Drawing::Size(698, 42);
			this->txtFName->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(54, 499);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(294, 42);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Enrollment Date:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(54, 378);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 42);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Email:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 248);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 42);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 42);
			this->label1->TabIndex = 40;
			this->label1->Text = L"First Name:";
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Computer Science and Information Systems", L"Business Administration",
					L"Engineering"
			});
			this->comboBox1->Location = System::Drawing::Point(426, 616);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(698, 50);
			this->comboBox1->TabIndex = 53;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FacultyProfile::comboBox1_SelectedIndexChanged);
			// 
			// FacultyProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1486, 1075);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textEmail);
			this->Controls->Add(this->dtpHireDate);
			this->Controls->Add(this->txtLName);
			this->Controls->Add(this->txtFName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FacultyProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FacultyProfile";
			this->Load += gcnew System::EventHandler(this, &FacultyProfile::FacultyProfile_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void FillFields(void) {
			String^ facultyId = GlobalVariables::currentUser->getFacultyID();
			// get the semester
			db^ con = gcnew db();
			con->openConnection();

			String^ query = "SELECT users.first_name, users.last_name, users.email, faculty.date_of_appointment, faculty.department FROM users JOIN faculty ON users.user_id = faculty.user_id WHERE faculty.faculty_id = "+ facultyId +";";
			DataTable^ dt = con->fillDataTable(query);
			txtFName->Text = dt->Rows[0]->ItemArray[0]->ToString();
			txtLName->Text = dt->Rows[0]->ItemArray[1]->ToString();
			textEmail->Text = dt->Rows[0]->ItemArray[2]->ToString();
			dtpHireDate->Value = Convert::ToDateTime(dt->Rows[0]->ItemArray[3]);
			int index = comboBox1->Items->IndexOf(dt->Rows[0]->ItemArray[4]); // Find the index of the matching value

			if (index != -1) // If the value is found
			{
				comboBox1->SelectedIndex = index; // Select the matching value
			}
			else
			{
				MessageBox::Show("Value not found in ComboBox", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			/*comboBox1->Value = dt->Rows[0]->ItemArray[4]->ToString();*/
			con->closeConnection();
		}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FacultyProfile_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
