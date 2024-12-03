#pragma once
#include "FacultyProfile.h"
#include "FacultyManageCourses.h"
#include "FacultyClassRoster.h"
#include "FacultyGradesh.h"
namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FacultyIndexForm
	/// </summary>
	public ref class FacultyIndexForm : public System::Windows::Forms::Form
	{
	public:
		FacultyIndexForm(void)
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
		~FacultyIndexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ profileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manageCoursesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ classRosterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gradesToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->profileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageCoursesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classRosterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gradesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->profileToolStripMenuItem,
					this->manageCoursesToolStripMenuItem, this->classRosterToolStripMenuItem, this->gradesToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(2188, 58);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileToolStripMenuItem
			// 
			this->profileToolStripMenuItem->Name = L"profileToolStripMenuItem";
			this->profileToolStripMenuItem->Size = System::Drawing::Size(147, 54);
			this->profileToolStripMenuItem->Text = L"Profile";
			this->profileToolStripMenuItem->Click += gcnew System::EventHandler(this, &FacultyIndexForm::profileToolStripMenuItem_Click);
			// 
			// manageCoursesToolStripMenuItem
			// 
			this->manageCoursesToolStripMenuItem->Name = L"manageCoursesToolStripMenuItem";
			this->manageCoursesToolStripMenuItem->Size = System::Drawing::Size(315, 54);
			this->manageCoursesToolStripMenuItem->Text = L"Manage Courses";
			this->manageCoursesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FacultyIndexForm::manageCoursesToolStripMenuItem_Click);
			// 
			// classRosterToolStripMenuItem
			// 
			this->classRosterToolStripMenuItem->Name = L"classRosterToolStripMenuItem";
			this->classRosterToolStripMenuItem->Size = System::Drawing::Size(239, 54);
			this->classRosterToolStripMenuItem->Text = L"Class Roster";
			this->classRosterToolStripMenuItem->Click += gcnew System::EventHandler(this, &FacultyIndexForm::classRosterToolStripMenuItem_Click);
			// 
			// gradesToolStripMenuItem
			// 
			this->gradesToolStripMenuItem->Name = L"gradesToolStripMenuItem";
			this->gradesToolStripMenuItem->Size = System::Drawing::Size(156, 54);
			this->gradesToolStripMenuItem->Text = L"Grades";
			this->gradesToolStripMenuItem->Click += gcnew System::EventHandler(this, &FacultyIndexForm::gradesToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// FacultyIndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2188, 1141);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"FacultyIndexForm";
			this->Text = L"FacultyIndexForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &FacultyIndexForm::FacultyIndexForm_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void profileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FacultyProfile^ profile = gcnew FacultyProfile();
		profile->Size = System::Drawing::Size(700, 650);
		profile->ShowDialog();
	}
private: System::Void FacultyIndexForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void manageCoursesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FacultyManageCourses^ courses = gcnew FacultyManageCourses();
	courses->Size = System::Drawing::Size(940, 600);
	courses->ShowDialog();
}
private: System::Void classRosterToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FacultyClassRoster^ roster = gcnew FacultyClassRoster();
	roster->Size = System::Drawing::Size(800, 700);
	roster->ShowDialog();
}
private: System::Void gradesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FacultyGradesh^ grades = gcnew FacultyGradesh();
	grades->Size = System::Drawing::Size(950, 700);
	grades->ShowDialog();
}
};
}
