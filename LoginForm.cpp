#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RecordsManagement::LoginForm form;
	Application::Run(% form);
}

