#include "HauptFensterForm.h"
#include "AdminLoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WIFIProject::HauptFensterForm hauptfensterForm;
	hauptfensterForm.ShowDialog();

	if (hauptfensterForm.To_Admin_Login)
	{
		WIFIProject::AdminLoginForm adminloginForm;
		adminloginForm.ShowDialog();

	}
	else
	{

	}
}
