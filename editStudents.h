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
	/// Summary for editStudents
	/// </summary>
	public ref class editStudents : public System::Windows::Forms::Form
	{
	public:
		editStudents(String^ user_id)
		{
			InitializeComponent();
			fillStudentDetails(user_id);
			this->user_id = user_id;
			//
			//TODO: Add the constructor code here
			//
		}

	private:
		String^ user_id;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editStudents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ UploadPicture;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ btnPicture;
	private: System::Windows::Forms::ComboBox^ txtDepartment;
	private: System::Windows::Forms::DateTimePicker^ dtpDOB;
	private: System::Windows::Forms::TextBox^ txtLName;
	private: System::Windows::Forms::TextBox^ txtFName;
	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->UploadPicture = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(268, 323);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(453, 25);
			this->textBox2->TabIndex = 62;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(22, 319);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 25);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Year Group: ";
			// 
			// UploadPicture
			// 
			this->UploadPicture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->UploadPicture->Location = System::Drawing::Point(959, 261);
			this->UploadPicture->Name = L"UploadPicture";
			this->UploadPicture->Size = System::Drawing::Size(131, 37);
			this->UploadPicture->TabIndex = 60;
			this->UploadPicture->Text = L"Upload";
			this->UploadPicture->UseVisualStyleBackColor = true;
			this->UploadPicture->Click += gcnew System::EventHandler(this, &editStudents::UploadPicture_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(762, 44);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(137, 25);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Profile Picture:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(268, 149);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(453, 25);
			this->textBox1->TabIndex = 58;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(22, 145);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 25);
			this->label8->TabIndex = 57;
			this->label8->Text = L"Email: ";
			// 
			// btnPicture
			// 
			this->btnPicture->Location = System::Drawing::Point(914, 42);
			this->btnPicture->Margin = System::Windows::Forms::Padding(2);
			this->btnPicture->Name = L"btnPicture";
			this->btnPicture->Size = System::Drawing::Size(218, 196);
			this->btnPicture->TabIndex = 56;
			this->btnPicture->TabStop = false;
			// 
			// txtDepartment
			// 
			this->txtDepartment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtDepartment->FormattingEnabled = true;
			this->txtDepartment->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Computer Science", L"Business Administration",
					L"Engineering"
			});
			this->txtDepartment->Location = System::Drawing::Point(268, 251);
			this->txtDepartment->Margin = System::Windows::Forms::Padding(2);
			this->txtDepartment->Name = L"txtDepartment";
			this->txtDepartment->Size = System::Drawing::Size(453, 33);
			this->txtDepartment->TabIndex = 55;
			// 
			// dtpDOB
			// 
			this->dtpDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->dtpDOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDOB->Location = System::Drawing::Point(268, 198);
			this->dtpDOB->Margin = System::Windows::Forms::Padding(2);
			this->dtpDOB->Name = L"dtpDOB";
			this->dtpDOB->Size = System::Drawing::Size(189, 30);
			this->dtpDOB->TabIndex = 54;
			this->dtpDOB->ValueChanged += gcnew System::EventHandler(this, &editStudents::dtpDOB_ValueChanged);
			// 
			// txtLName
			// 
			this->txtLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtLName->Location = System::Drawing::Point(268, 94);
			this->txtLName->Margin = System::Windows::Forms::Padding(2);
			this->txtLName->Multiline = true;
			this->txtLName->Name = L"txtLName";
			this->txtLName->Size = System::Drawing::Size(453, 25);
			this->txtLName->TabIndex = 53;
			// 
			// txtFName
			// 
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtFName->Location = System::Drawing::Point(268, 42);
			this->txtFName->Margin = System::Windows::Forms::Padding(2);
			this->txtFName->Multiline = true;
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(453, 25);
			this->txtFName->TabIndex = 52;
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->btnSave->Location = System::Drawing::Point(499, 408);
			this->btnSave->Margin = System::Windows::Forms::Padding(2);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(371, 48);
			this->btnSave->TabIndex = 51;
			this->btnSave->Text = L"Save Changes";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &editStudents::btnSave_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(20, 247);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 25);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Major";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(20, 194);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 25);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Date of Birth:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(22, 90);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 25);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(22, 42);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 25);
			this->label1->TabIndex = 47;
			this->label1->Text = L"First Name:";
			// 
			// editStudents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1220, 512);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->UploadPicture);
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
			this->Name = L"editStudents";
			this->Text = L"editStudents";
			this->Load += gcnew System::EventHandler(this, &editStudents::editStudents_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnPicture))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void editStudents_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
    // Get the edited data
    String^ first_name = txtFName->Text;
    String^ last_name = txtLName->Text;
    String^ email = textBox1->Text;

    // Format the date to match the database's expected format (dd-MM-yyyy)
    String^ date_of_birth = dtpDOB->Value.ToString("dd-MM-yyyy");
    String^ major = txtDepartment->Text;
    String^ year_group = textBox2->Text;

    // Get the profile picture
    String^ profile_picture = "";
    if (btnPicture->ImageLocation != nullptr) {
        profile_picture = btnPicture->ImageLocation;
    }

    // Update the data in the database
    db^ connect = gcnew db();
    connect->openConnection();

    String^ query = "UPDATE users u "
        "JOIN students s ON u.user_id = s.user_id "
        "SET "
        "u.first_name = '" + first_name + "', "
        "u.last_name = '" + last_name + "', "
        "u.email = '" + email + "', "
        "s.date_of_birth = STR_TO_DATE('" + date_of_birth + "', '%d-%m-%Y'), "
        "s.major = '" + major + "', "
        "s.year_group = '" + year_group + "'";

    if (profile_picture != "") {
        query += ", s.profile_picture = '" + profile_picture + "'";
    } else {
        query += ", s.profile_picture = NULL";
    }

    query += " WHERE u.user_id = " + user_id;

    // Debug SQL query
    MessageBox::Show(query);

    // Execute the query
    connect->executeQuery(query);
    connect->closeConnection();
    MessageBox::Show("Student details updated successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
    this->Close();
}

	private: void fillStudentDetails(String^ user_id) {
		db^ connect = gcnew db();
		connect->openConnection();

		String^ query = "SELECT "
			"u.first_name, "
			"u.last_name, "
			"u.email, "
			"DATE_FORMAT(s.date_of_birth, '%d-%m-%Y') AS date_of_birth, " // Format as dd-MM-yyyy
			"s.major, "
			"s.profile_picture, "
			"s.year_group "
			"FROM users u "
			"JOIN students s ON u.user_id = s.user_id "
			"WHERE u.user_id = " + user_id;

		// Debug SQL
		MessageBox::Show(query);

		DataTable^ dt = connect->fillDataTable(query);
		connect->closeConnection();

		// Populate form fields
		txtFName->Text = dt->Rows[0]->ItemArray[0]->ToString();
		txtLName->Text = dt->Rows[0]->ItemArray[1]->ToString();
		textBox1->Text = dt->Rows[0]->ItemArray[2]->ToString();

		// Parse the date string into DateTime
		String^ dateString = dt->Rows[0]->ItemArray[3]->ToString();
		if (!String::IsNullOrEmpty(dateString)) {
			try {
				DateTime dateValue = DateTime::ParseExact(dateString, "dd-MM-yyyy", System::Globalization::CultureInfo::InvariantCulture);
				dtpDOB->Value = dateValue;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Invalid Date Format: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		txtDepartment->Text = dt->Rows[0]->ItemArray[4]->ToString();
		textBox2->Text = dt->Rows[0]->ItemArray[6]->ToString();

		// Load the profile picture
		String^ profile_picture = dt->Rows[0]->ItemArray[5]->ToString();
		if (!String::IsNullOrEmpty(profile_picture)) {
			if (System::IO::File::Exists(profile_picture)) {
				try {
					btnPicture->Load(profile_picture);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error loading image: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Image file does not exist: " + profile_picture, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

private: System::Void UploadPicture_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open file dialog to select the picture
	OpenFileDialog^ dialog = gcnew OpenFileDialog();
	dialog->Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
	if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		btnPicture->ImageLocation = EscapeBackslashes(dialog->FileName);
	}

}

private: String^ EscapeBackslashes(String^ input) {
	// Replace single backslashes with double backslashes
	return input->Replace("\\", "\\\\");
}
private: System::Void dtpDOB_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
