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
