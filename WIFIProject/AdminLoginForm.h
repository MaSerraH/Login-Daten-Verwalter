#pragma once
#include "Admin.h"//klasse des Admins

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;//erm�glcht die Verbindung 

	/// <summary>
	/// Zusammenfassung f�r AdminLoginForm
	/// </summary>
	public ref class AdminLoginForm : public System::Windows::Forms::Form
	{
	public:
		AdminLoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AdminLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkHauptFenster;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbPasswort;


	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;


	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->linkHauptFenster = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPasswort = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkHauptFenster
			// 
			this->linkHauptFenster->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkHauptFenster->AutoSize = true;
			this->linkHauptFenster->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkHauptFenster->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkHauptFenster->Location = System::Drawing::Point(413, 419);
			this->linkHauptFenster->Name = L"linkHauptFenster";
			this->linkHauptFenster->Size = System::Drawing::Size(101, 24);
			this->linkHauptFenster->TabIndex = 0;
			this->linkHauptFenster->TabStop = true;
			this->linkHauptFenster->Text = L"zum  H-F";
			this->linkHauptFenster->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminLoginForm::linkHauptFenster_LinkClicked);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 43);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin Login";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(43, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(43, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Passwort:";
			// 
			// tbName
			// 
			this->tbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbName->Location = System::Drawing::Point(199, 132);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(304, 32);
			this->tbName->TabIndex = 4;
			// 
			// tbPasswort
			// 
			this->tbPasswort->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPasswort->Location = System::Drawing::Point(199, 187);
			this->tbPasswort->Name = L"tbPasswort";
			this->tbPasswort->PasswordChar = '$';
			this->tbPasswort->Size = System::Drawing::Size(304, 32);
			this->tbPasswort->TabIndex = 5;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(121, 284);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(117, 43);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(319, 284);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(113, 43);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnCancel_Click);
			// 
			// AdminLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(543, 482);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPasswort);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkHauptFenster);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"AdminLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Man wird zum Hauptfenster geleitet
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkHauptFenster_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Haupt_Fenster = true;
		//macht den Fenster zu
		this->Close();
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	}
	public: Admin^ admin=nullptr;//Objekt der Klasse Admin

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->tbName->Text;//liest den eingegebene Name ein
	String^ passwort = this->tbPasswort->Text;//liest das eingegebne Passwort ein
	if (name->Length == 0 || passwort->Length == 0)//Bedingung
	{
		//wenn beide leer sind soll eine Meldung erscheinen
		MessageBox::Show("Name und Passwort bitte eintragen", "Name oder Passwort sind leer", MessageBoxButtons::OK);
		return;
	}
	try {
		//Adresse des Database
		String^ connString = "Data Source=(localdb)\\MSSQLLocalDB;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
		SqlConnection sqlconn(connString);
		sqlconn.Open();//Verbindung �ffnen

		String^ sqlQuery = "SELECT * FROM Admin WHERE name=@name AND passwort=@passwort;";//Query
		SqlCommand command(sqlQuery, % sqlconn);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@passwort", passwort);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			admin = gcnew Admin;//man erzeugt a neues Pointer am Heap, "gc" bedeutet "garbage collection"-> es wird automatisch zerst�rt->kein Destruktor ist notwending."
			//reader list die Daten id, name und passwort vom Database ein und speichert sie im admin.
			admin->id = reader->GetInt32(0);
			admin->name = reader->GetString(1);
			admin->passwort = reader->GetString(2);
			this->Close();
		}
		else
		{
			//wenn beide werte, name und Passwort mit den Werten im DB nicht stimmen, soll eine Fehler-meldung erscheinen
			MessageBox::Show("Name oder Passwort sind falsch", "Fehler", MessageBoxButtons::OK);
		}
	}
	catch(Exception^ e) {
		//Wenn die Vebindung mit dem DB unm�glicht ist, soll eine Fehler-meldung erscheinen
		MessageBox::Show("Verbindung mit database fehlgeschlagen", "Verbingung Fehler", MessageBoxButtons::OK);
	}
}
};
}
