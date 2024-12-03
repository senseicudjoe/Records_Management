#pragma once
#include "AdminManageStudents.h"
#include "AdminFinancials.h"
#include "AdminManageCourses.h"
#include "AdminManageFaculty.h"
#include "db_connection.h"


namespace RecordsManagement {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminIndexForm
	/// </summary>
	public ref class AdminIndexForm : public System::Windows::Forms::Form
	{
	public:
		AdminIndexForm(void)
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
		~AdminIndexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ manageStudentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manageFacuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ manageCoursesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ financialsToolStripMenuItem;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminIndexForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->manageStudentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageFacuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->manageCoursesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->financialsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->manageStudentsToolStripMenuItem,
					this->manageFacuToolStripMenuItem, this->manageCoursesToolStripMenuItem, this->financialsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(1283, 38);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// manageStudentsToolStripMenuItem
			// 
			this->manageStudentsToolStripMenuItem->Name = L"manageStudentsToolStripMenuItem";
			this->manageStudentsToolStripMenuItem->Size = System::Drawing::Size(215, 36);
			this->manageStudentsToolStripMenuItem->Text = L"Manage Students";
			this->manageStudentsToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminIndexForm::manageStudentsToolStripMenuItem_Click);
			// 
			// manageFacuToolStripMenuItem
			// 
			this->manageFacuToolStripMenuItem->Name = L"manageFacuToolStripMenuItem";
			this->manageFacuToolStripMenuItem->Size = System::Drawing::Size(196, 36);
			this->manageFacuToolStripMenuItem->Text = L"Manage Faculty";
			this->manageFacuToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminIndexForm::manageFacuToolStripMenuItem_Click);
			// 
			// manageCoursesToolStripMenuItem
			// 
			this->manageCoursesToolStripMenuItem->Name = L"manageCoursesToolStripMenuItem";
			this->manageCoursesToolStripMenuItem->Size = System::Drawing::Size(206, 36);
			this->manageCoursesToolStripMenuItem->Text = L"Manage Courses";
			this->manageCoursesToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminIndexForm::manageCoursesToolStripMenuItem_Click);
			// 
			// financialsToolStripMenuItem
			// 
			this->financialsToolStripMenuItem->Name = L"financialsToolStripMenuItem";
			this->financialsToolStripMenuItem->Size = System::Drawing::Size(131, 36);
			this->financialsToolStripMenuItem->Text = L"Financials";
			this->financialsToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminIndexForm::financialsToolStripMenuItem_Click);
			// 
			// AdminIndexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1283, 675);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AdminIndexForm";
			this->Text = L"AdminIndexForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdminIndexForm::AdminIndexForm_FormClosed);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminIndexForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
private: System::Void manageStudentsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminManageStudents^ students = gcnew AdminManageStudents();
	students->Size = System::Drawing::Size(880, 700);
	students->ShowDialog();
}
private: System::Void manageFacuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminManageFaculty^ faculty = gcnew AdminManageFaculty();
	faculty->Size = System::Drawing::Size(845, 700);
	faculty->ShowDialog();
}
private: System::Void manageCoursesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminManageCourses^ courses = gcnew AdminManageCourses();
	courses->Size = System::Drawing::Size(950, 700);
	courses->ShowDialog();
}
private: System::Void financialsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	AdminFinancials^ finance = gcnew AdminFinancials();
	finance->Size = System::Drawing::Size(915, 600);
	finance->ShowDialog();
}
private: System::Void geneToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// on click generate a txt with all the students in the course order by year group
	db^ conn = gcnew db();
	conn->openConnection();

	conn->closeConnection();
}
};
}
