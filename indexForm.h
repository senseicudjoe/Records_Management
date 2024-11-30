#pragma once
#include "studentProfile.h"
#include "studentGrades.h"
#include "StudentEnrollment.h"
#include "studentSchedule1.h"
#include "studentTranscript.h"
#include "paymentForm.h"
#include "anyForm.h"


namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for indexForm
	/// </summary>
	public ref class indexForm : public System::Windows::Forms::Form
	{
	public:
		indexForm(void)
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
		~indexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;








	private: System::Windows::Forms::ToolStripMenuItem^ profileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ enrolmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gradesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ paymentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gradesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transcriptsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ scheduleToolStripMenuItem;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->profileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enrolmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transcriptsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->paymentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scheduleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->profileToolStripMenuItem1,
					this->enrolmentToolStripMenuItem, this->gradesToolStripMenuItem1, this->paymentsToolStripMenuItem, this->scheduleToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(2047, 59);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileToolStripMenuItem1
			// 
			this->profileToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileToolStripMenuItem1->Name = L"profileToolStripMenuItem1";
			this->profileToolStripMenuItem1->Size = System::Drawing::Size(147, 55);
			this->profileToolStripMenuItem1->Text = L"Profile";
			this->profileToolStripMenuItem1->Click += gcnew System::EventHandler(this, &indexForm::profileToolStripMenuItem1_Click);
			// 
			// enrolmentToolStripMenuItem
			// 
			this->enrolmentToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->enrolmentToolStripMenuItem->Name = L"enrolmentToolStripMenuItem";
			this->enrolmentToolStripMenuItem->Size = System::Drawing::Size(211, 55);
			this->enrolmentToolStripMenuItem->Text = L"Enrolment";
			this->enrolmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &indexForm::enrolmentToolStripMenuItem_Click);
			// 
			// gradesToolStripMenuItem1
			// 
			this->gradesToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gradesToolStripMenuItem,
					this->transcriptsToolStripMenuItem
			});
			this->gradesToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->gradesToolStripMenuItem1->Name = L"gradesToolStripMenuItem1";
			this->gradesToolStripMenuItem1->Size = System::Drawing::Size(349, 55);
			this->gradesToolStripMenuItem1->Text = L"Academic Records";
			this->gradesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &indexForm::gradesToolStripMenuItem1_Click);
			// 
			// gradesToolStripMenuItem
			// 
			this->gradesToolStripMenuItem->Name = L"gradesToolStripMenuItem";
			this->gradesToolStripMenuItem->Size = System::Drawing::Size(341, 60);
			this->gradesToolStripMenuItem->Text = L"Grades";
			this->gradesToolStripMenuItem->Click += gcnew System::EventHandler(this, &indexForm::gradesToolStripMenuItem_Click);
			// 
			// transcriptsToolStripMenuItem
			// 
			this->transcriptsToolStripMenuItem->Name = L"transcriptsToolStripMenuItem";
			this->transcriptsToolStripMenuItem->Size = System::Drawing::Size(341, 60);
			this->transcriptsToolStripMenuItem->Text = L"Transcripts";
			this->transcriptsToolStripMenuItem->Click += gcnew System::EventHandler(this, &indexForm::transcriptsToolStripMenuItem_Click);
			// 
			// paymentsToolStripMenuItem
			// 
			this->paymentsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->paymentsToolStripMenuItem->Name = L"paymentsToolStripMenuItem";
			this->paymentsToolStripMenuItem->Size = System::Drawing::Size(203, 55);
			this->paymentsToolStripMenuItem->Text = L"Payments";
			this->paymentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &indexForm::paymentsToolStripMenuItem_Click);
			// 
			// scheduleToolStripMenuItem
			// 
			this->scheduleToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->scheduleToolStripMenuItem->Name = L"scheduleToolStripMenuItem";
			this->scheduleToolStripMenuItem->Size = System::Drawing::Size(195, 55);
			this->scheduleToolStripMenuItem->Text = L"Schedule";
			this->scheduleToolStripMenuItem->Click += gcnew System::EventHandler(this, &indexForm::scheduleToolStripMenuItem_Click);
			// 
			// indexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2047, 1092);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"indexForm";
			this->Text = L"indexForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &indexForm::indexForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &indexForm::indexForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void enrolmentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		anyForm^ enroll = gcnew anyForm();
		enroll->Size = System::Drawing::Size(900, 600);
	/*	enroll->MdiParent = this;*/
		enroll->ShowDialog();
	}
private: System::Void gradesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void profileToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	studentProfile^ profile = gcnew studentProfile();
	profile->Size = System::Drawing::Size(1000, 500);
	profile->ShowDialog();
}
private: System::Void transcriptsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	studentTranscript^ transcript = gcnew studentTranscript();
	transcript->Size = System::Drawing::Size(900, 600);
	transcript->ShowDialog();
}
private: System::Void paymentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	paymentForm^ payment = gcnew paymentForm();
	payment->ShowDialog();
}
private: System::Void scheduleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	studentSchedule^ schedule = gcnew studentSchedule();
	schedule->Size = System::Drawing::Size(900, 600);
	schedule->ShowDialog();
}
private: System::Void gradesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	studentGrades^ grade = gcnew studentGrades();
	//profile->Size = System::Drawing::Size(1000, 500);
	grade->ShowDialog();
}
private: System::Void indexForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void indexForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
};
}
