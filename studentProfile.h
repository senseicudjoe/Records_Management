#pragma once

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

	protected:




	private: System::Windows::Forms::DateTimePicker^ dtpHireDate;
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
			this->dtpHireDate = (gcnew System::Windows::Forms::DateTimePicker());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dtpHireDate
			// 
			this->dtpHireDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpHireDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpHireDate->Location = System::Drawing::Point(382, 584);
			this->dtpHireDate->Name = L"dtpHireDate";
			this->dtpHireDate->Size = System::Drawing::Size(282, 49);
			this->dtpHireDate->TabIndex = 30;
			// 
			// dtpDOB
			// 
			this->dtpDOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpDOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDOB->Location = System::Drawing::Point(380, 344);
			this->dtpDOB->Name = L"dtpDOB";
			this->dtpDOB->Size = System::Drawing::Size(282, 49);
			this->dtpDOB->TabIndex = 29;
			// 
			// txtLName
			// 
			this->txtLName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLName->Location = System::Drawing::Point(382, 223);
			this->txtLName->Multiline = true;
			this->txtLName->Name = L"txtLName";
			this->txtLName->Size = System::Drawing::Size(698, 45);
			this->txtLName->TabIndex = 28;
			// 
			// txtFName
			// 
			this->txtFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFName->Location = System::Drawing::Point(382, 108);
			this->txtFName->Multiline = true;
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(698, 42);
			this->txtFName->TabIndex = 27;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(10, 584);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(294, 42);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Enrollment Date:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 463);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(120, 42);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Email:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 351);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 42);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Date of Birth:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 42);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Last Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 42);
			this->label1->TabIndex = 19;
			this->label1->Text = L"First Name:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(1361, 99);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(321, 294);
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1361, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(321, 55);
			this->button1->TabIndex = 36;
			this->button1->Text = L"Upload";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &studentProfile::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(382, 463);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(698, 46);
			this->textBox1->TabIndex = 37;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(382, 701);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(698, 46);
			this->textBox2->TabIndex = 39;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(10, 701);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 42);
			this->label6->TabIndex = 38;
			this->label6->Text = L"Major:";
			// 
			// studentProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1774, 1060);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
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
			this->Name = L"studentProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
