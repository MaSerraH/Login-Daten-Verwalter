#include "HauptFensterForm.h"
#include "AdminLoginForm.h"
#include "AdminPasswortanlegen.h"
#include "AdminFensterForm.h"
#include "UserLoginForm.h"
#include "UserPasswort�ndernForm.h"
#include "Tabelle1.h"
#include "Tabelle2.h"
#include "Tabelle3.h"
#include "Tabelle4.h"
#include "Tabelle5.h"
#include "Tabelle6.h"
#include "Tabelle7.h"
#include "Tabelle8.h"
#include "Tabelle9.h"
#include "Tabelle10.h"

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
			//Wenn das Objekt nicht leer ist, das heisst wenn die angegebene Informationen mit den vom DB �berall stimmen 
			if (admin != nullptr)
			{
				
				MessageBox::Show("Willkommen "  + admin->name + ". Sie sind der Administrator" , "{(L-D)-V}", MessageBoxButtons::OK);

				//es �ffnet sich automatisch der Admin Fenster
				WIFIProject::AdminFensterForm adminfensterForm;
				adminfensterForm.ShowDialog();
				//Wenn den Link gelickt wurde, dann wird man zum Haupt-fenster geleitet
				if (adminfensterForm.To_Haupt_Fenster)
				{
					continue;
				}
			}
		

			if (adminloginForm.To_Haupt_Fenster)
			{
				//hauptfensterForm.ShowDialog();
				continue;
			}
			else if (adminloginForm.To_Passwort_anlegen)
			{
				WIFIProject::AdminPasswortanlegen adminpasswortanlegen;
				adminpasswortanlegen.ShowDialog();
				Admin^ admin = adminpasswortanlegen.admin;
				if (adminpasswortanlegen.To_Haupt_Fenster)
				{
					continue;
				}

			}
		}
		else if (hauptfensterForm.To_Users_Login)
		{
			WIFIProject::UserLoginForm userloginform;
			WIFIProject::Tabelle1 tabelle1;
			WIFIProject::Tabelle2 tabelle2;
			WIFIProject::Tabelle3 tabelle3;
			WIFIProject::Tabelle4 tabelle4;
			WIFIProject::Tabelle5 tabelle5;
			WIFIProject::Tabelle6 tabelle6;
			WIFIProject::Tabelle7 tabelle7;
			WIFIProject::Tabelle8 tabelle8;
			WIFIProject::Tabelle9 tabelle9;
			WIFIProject::Tabelle10 tabelle10;


			userloginform.ShowDialog();
			Users^ user = userloginform.user;
			if (user != nullptr)
			{
				int l = user->liste;

				MessageBox::Show("Willkommen " + user->name + "!. Sie d�rfen die Konto: " + user->liste + " jetzt verwalten", "{(L-D)-V}", MessageBoxButtons::OK);

				switch (l)
				{
				case 1: tabelle1.ShowDialog(); if (tabelle1.To_Haupt_Fenster) { continue; }break;
				case 2:tabelle2.ShowDialog(); if (tabelle2.To_Haupt_Fenster) { continue; }break;
				case 3:tabelle3.ShowDialog(); if (tabelle3.To_Haupt_Fenster) { continue; }break;
				case 4:tabelle4.ShowDialog(); if (tabelle4.To_Haupt_Fenster) { continue; }break;
				case 5:tabelle5.ShowDialog(); if (tabelle5.To_Haupt_Fenster) { continue; }break;
				case 6:tabelle6.ShowDialog(); if (tabelle6.To_Haupt_Fenster) { continue; }break;
				case 7:tabelle7.ShowDialog(); if (tabelle7.To_Haupt_Fenster) { continue; }break;
				case 8:tabelle8.ShowDialog(); if (tabelle8.To_Haupt_Fenster) { continue; }break;
				case 9:tabelle9.ShowDialog(); if (tabelle9.To_Haupt_Fenster) { continue; }break;
				case 10:tabelle10.ShowDialog(); if (tabelle10.To_Haupt_Fenster) { continue; }break;
				}

			}
			if (userloginform.To_Haupt_Fenster)
			{
				continue;
			}
			else if (userloginform.To_User_Passwort_�ndern)
			{
				WIFIProject::UserPasswort�ndernForm userpasswort�ndern;
				userpasswort�ndern.ShowDialog();
				Users^ user = userpasswort�ndern.user;

				if (userpasswort�ndern.To_Haupt_Fenster)
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
