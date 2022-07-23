#include "HauptFensterForm.h"
#include "AdminLoginForm.h"
#include "AdminFensterForm.h"

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
			/*wenn der Link geclicket wurde(Admin-Login), dann soll man in anderen Fenster geleitet werden (Admin Login).*/
			WIFIProject::AdminLoginForm adminloginForm;
			adminloginForm.ShowDialog();

			Admin^ admin = adminloginForm.admin;
			//Wenn das Objekt nicht leer ist, das heisst wenn die angegebene Informationen mit den vom DB überall stimmen 
			if (admin != nullptr)
			{
				MessageBox::Show("Willkommen "  + admin->name + ". Sie sind der Administrator" , "{(L-D)-V}", MessageBoxButtons::OK);

				//es öffnet sich automatisch der Admin Fenster
				WIFIProject::AdminFensterForm adminfensterForm;
				adminfensterForm.ShowDialog();

				//Wenn den Link gelickt wurde, dann wird man zum Haupt-fenster geleitet
				if (adminfensterForm.To_Haupt_Fenster)
				{
					continue;
				}
			}
			else
			{
				//Wenn man das Button Cancel druckt, erscheint folgende Meldung
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
