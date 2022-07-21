#include "HauptFensterForm.h"
#include "AdminLoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	while (true) {
		WIFIProject::HauptFensterForm hauptfensterForm;
		hauptfensterForm.ShowDialog();
		/*der Haupt Fenster wird aufgerufen (1. GUI)*/

		if (hauptfensterForm.To_Admin_Login)
		{
			/*wenn der Link geclicket wurde, dann soll man in anderen Fenster geleitet werden (Admin Login).*/
			WIFIProject::AdminLoginForm adminloginForm;
			adminloginForm.ShowDialog();

			Admin^ admin = adminloginForm.admin;
			//Wenn das Objekt nicht leer ist, das heisst wenn die angegebene Information mit den vom DB überall stimmt 
			if (admin != nullptr)
			{
				MessageBox::Show("Willkommen " + admin->name, "{(L-D)-V}", MessageBoxButtons::OK);
			}
			else
			{
				//Wenn man das Button Cancel druckt
				MessageBox::Show("Authentifizierung annulliert", "{(L-D)-V}", MessageBoxButtons::OK);
			}

			if (adminloginForm.To_Haupt_Fenster)
			{
				//hauptfensterForm.ShowDialog();
				continue;
			}
		}
		else
		{
			break;
		}
	}
}
