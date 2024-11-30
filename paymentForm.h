#pragma once

namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for paymentForm
	/// </summary>
	public ref class paymentForm : public System::Windows::Forms::Form
	{
	public:
		paymentForm(void)
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
		~paymentForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ btnFileUpload;


	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnFileUpload = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(473, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 42);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Semester";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(473, 448);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Amount";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(473, 661);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(155, 42);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Receipt:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(706, 272);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(522, 50);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(706, 448);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(522, 49);
			this->textBox1->TabIndex = 5;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// btnFileUpload
			// 
			this->btnFileUpload->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFileUpload->Location = System::Drawing::Point(706, 661);
			this->btnFileUpload->Name = L"btnFileUpload";
			this->btnFileUpload->Size = System::Drawing::Size(204, 53);
			this->btnFileUpload->TabIndex = 6;
			this->btnFileUpload->Text = L"Upload";
			this->btnFileUpload->UseVisualStyleBackColor = true;
			// 
			// paymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1734, 1123);
			this->Controls->Add(this->btnFileUpload);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"paymentForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"paymentForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
