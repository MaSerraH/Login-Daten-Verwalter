#include "HauptFensterForm.h"
#include "AdminLoginForm.h"
#include "AdminFensterForm.h"
#include "UserLoginForm.h"
#include"UserPasswortÄndernForm.h"
#include "Tabelle1.h"

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
		else if (hauptfensterForm.To_Users_Login)
		{
			WIFIProject::UserLoginForm userloginform;
			WIFIProject::Tabelle1 tabelle1;
			userloginform.ShowDialog();
			Users^ user = userloginform.user;
			if (user != nullptr)
			{
				int l = user->liste;

				MessageBox::Show("Willkommen " + user->name + "!. Sie dürfen die Liste: " + user->liste + " jetzt verwalten", "{(L-D)-V}", MessageBoxButtons::OK);

				tabelle1.ShowDialog();
			}
			if (userloginform.To_Haupt_Fenster)
			{
				continue;
			}
			else if (userloginform.To_User_Passwort_ändern)
			{
				WIFIProject::UserPasswortÄndernForm userpasswortändern;
				userpasswortändern.ShowDialog();
				Users^ user = userpasswortändern.user;

				if (userpasswortändern.To_Haupt_Fenster)
				{
					continue;
				}
			}
			
		}
		else
		{
			break;
		}
	}
}
