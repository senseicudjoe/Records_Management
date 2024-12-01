#pragma once


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
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::DateTimePicker^ dtpHireDate;
	private: System::Windows::Forms::DateTimePicker^ dtpDOB;
	private: System::Windows::Forms::TextBox^ txtLName;
	private: System::Windows::Forms::TextBox^ txtFName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dtpHireDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpDOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtLName = (gcnew System::Windows::Forms::TextBox());
			this->txtFName = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 723);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(232, 42);
			this->label6->TabIndex = 52;
			this->label6->Text = L"Department: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(426, 485);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(698, 46);
			this->textBox1->TabIndex = 51;
			// 
			// dtpHireDate
			// 
			this->dtpHireDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpHireDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpHireDate->Location = System::Drawing::Point(426, 606);
			this->dtpHireDate->Name = L"dtpHireDate";
			this->dtpHireDate->Size = System::Drawing::Size(273, 49);
			this->dtpHireDate->TabIndex = 48;
			// 
			// dtpDOB
			// 
			this->dtpDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDOB->Location = System::Drawing::Point(424, 366);
			this->dtpDOB->Name = L"dtpDOB";
			this->dtpDOB->Size = System::Drawing::Size(275, 49);
			this->dtpDOB->TabIndex = 47;
			// 
			// txtLName
			// 
			this->txtLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLName->Location = System::Drawing::Point(426, 245);
			this->txtLName->Multiline = true;
			this->txtLName->Name = L"txtLName";
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
			this->txtFName->Size = System::Drawing::Size(698, 42);
			this->txtFName->TabIndex = 45;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(54, 606);
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
			this->label4->Location = System::Drawing::Point(54, 485);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 42);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(54, 373);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 42);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Date of Birth:";
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
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(426, 723);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(698, 50);
			this->comboBox1->TabIndex = 53;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(527, 926);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 78);
			this->button1->TabIndex = 54;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// FacultyProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1486, 1075);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dtpHireDate);
			this->Controls->Add(this->dtpDOB);
			this->Controls->Add(this->txtLName);
			this->Controls->Add(this->txtFName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FacultyProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FacultyProfile";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
