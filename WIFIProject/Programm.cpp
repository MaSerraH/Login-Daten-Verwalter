#include "HauptFensterForm.h"//Klasse HauptFensterForm, die erste Fenster
#include "AdminLoginForm.h"//Klasse AdminLoginForm wo sich der Admin einloggen kann
#include "AdminPasswortanlegen.h"//Klasse AdminPasswortanlegen wo der admin sein eigenes Passwort speichern kann
#include "AdminFensterForm.h"//Klasse AdminFensterForm damit kann der Admin die users verwalten(anlegen, löschen..)
#include "UserLoginForm.h"//eine Klasse womit sich der user einloggen kann
#include "UserPasswortÄndernForm.h"//eine Klasse womit der user sein Passwort ändern kann
#include "Tabelle1.h"//mit folgende Klassen(Tabelle: 1-10) kann der user seiner zuvor zugewiesene Konto verwalten 
#include "Tabelle2.h"
#include "Tabelle3.h"
#include "Tabelle4.h"
#include "Tabelle5.h"
#include "Tabelle6.h"
#include "Tabelle7.h"
#include "Tabelle8.h"
#include "Tabelle9.h"
#include "Tabelle10.h"



//folgende HeaderFiles wurden hinzugefügt

using namespace System;
using namespace System::Windows::Forms;
//

void main(array<String^>^ args)
{
   
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	while (true) {//mit der Schleife erreicht man dass das ein Form immer erscheint solange man die Application nicht zumacht
		WIFIProject::HauptFensterForm hauptfensterForm;
		hauptfensterForm.ShowDialog();
		/*der Haupt Fenster wird aufgerufen (1. GUI)*/

		if (hauptfensterForm.To_Admin_Login)
		{
			/*wenn der Link geclicket wurde(Admin-Login), dann soll man in anderen Fenster geleitet werden (Admin Login).*/
			WIFIProject::AdminLoginForm adminloginForm;
			adminloginForm.ShowDialog();//man ruft anderer Form auf
			
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
			if (adminloginForm.To_Haupt_Fenster)
			{
				//hauptfensterForm.ShowDialog();
				continue;
			}
			else if (adminloginForm.To_Passwort_anlegen)
			{//wenn der Admin sein Passwort ändern will und den dementsprechende Button drückt dann wird er zum andere Form geleitet
				WIFIProject::AdminPasswortanlegen adminpasswortanlegen;
				adminpasswortanlegen.ShowDialog();
				Admin^ admin = adminpasswortanlegen.admin;
				//Wenn den Link geklickt wurde, dann wird man zum Haupt-fenster geleitet
				if (adminpasswortanlegen.To_Haupt_Fenster)
				{
					continue;
				}
			}
		}
		else if (hauptfensterForm.To_Users_Login)
		{//wenn man sich vom HauptFenster als user einloggen will, dann muss man den demetsprechender Link anklicken, wenn dass geschiet dann wird man zum UserLoginForm weitergeleitet
			WIFIProject::UserLoginForm userloginform;//man erzeugt ein Objekt der Klasse UserLoginForm, das wird dann der Form sein wo man weitergeleitet sein wird
			WIFIProject::Tabelle1 tabelle1;//man erzeugt ein Objekt der Klasse Tabelle1, das wird dann der Form sein wo man weitergeleitet sein wird, wenn sich der dementsprechender user einloggt und ihn aufgeruft hat.
			WIFIProject::Tabelle2 tabelle2;//...
			WIFIProject::Tabelle3 tabelle3;//...
			WIFIProject::Tabelle4 tabelle4;//...
			WIFIProject::Tabelle5 tabelle5;//...
			WIFIProject::Tabelle6 tabelle6;//...
			WIFIProject::Tabelle7 tabelle7;//...
			WIFIProject::Tabelle8 tabelle8;//...
			WIFIProject::Tabelle9 tabelle9;//...
			WIFIProject::Tabelle10 tabelle10;//...

		


			userloginform.ShowDialog();//ruft den Form userlogin auf
			Users^ user = userloginform.user;
			if (user != nullptr)
			{//wenn der user existiert, d.h. wenn information von der Tabelle im DB gelesen wurde. dann wird folgende Meldung erscheinen
			int l = user->liste;

				MessageBox::Show("Willkommen " + user->name + "!. Sie dürfen die Konto: " + user->liste + " jetzt verwalten", "{(L-D)-V}", MessageBoxButtons::OK);
				// man deklariert eine integer Variable sie wird mit dem gelesene Wert user->liste initialisiert.
				//mit der switch Anweisung erreicht man dass je nach zugewiesene liste bzw. Konto nummer, durch der Befehl ...ShowDialog() wird der dementsprechende Form aufgerufen
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
			else if (userloginform.To_User_Passwort_ändern)
			{//wenn der User sein eigenes Passwort feststellen will und der Button Passwort_ändern drückt
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
		{//Ende der Schleife und der Application
			break;
		}
	}
}
