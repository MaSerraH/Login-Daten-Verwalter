#pragma once
#include "Admin.h"//klasse des Admins

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für AdminLoginForm
	/// </summary>
	public ref class AdminLoginForm : public System::Windows::Forms::Form
	{
	public:
		AdminLoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
	private: System::Windows::Forms::Button^ btnNeuStart;
	private: System::Windows::Forms::Button^ btnPasswortanlegen;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;


	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
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
			this->btnNeuStart = (gcnew System::Windows::Forms::Button());
			this->btnPasswortanlegen = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// linkHauptFenster
			// 
			this->linkHauptFenster->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkHauptFenster->AutoSize = true;
			this->linkHauptFenster->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkHauptFenster->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkHauptFenster->Location = System::Drawing::Point(364, 316);
			this->linkHauptFenster->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkHauptFenster->Name = L"linkHauptFenster";
			this->linkHauptFenster->Size = System::Drawing::Size(93, 24);
			this->linkHauptFenster->TabIndex = 0;
			this->linkHauptFenster->TabStop = true;
			this->linkHauptFenster->Text = L"zum  H-F";
			this->linkHauptFenster->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminLoginForm::linkHauptFenster_LinkClicked);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(80, 20);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin: Login";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(32, 91);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(22, 134);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Passwort:";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(133, 91);
			this->tbName->Margin = System::Windows::Forms::Padding(2);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(175, 30);
			this->tbName->TabIndex = 4;
			// 
			// tbPasswort
			// 
			this->tbPasswort->Location = System::Drawing::Point(134, 132);
			this->tbPasswort->Margin = System::Windows::Forms::Padding(2);
			this->tbPasswort->Name = L"tbPasswort";
			this->tbPasswort->PasswordChar = '$';
			this->tbPasswort->Size = System::Drawing::Size(175, 30);
			this->tbPasswort->TabIndex = 5;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOK->Location = System::Drawing::Point(22, 16);
			this->btnOK->Margin = System::Windows::Forms::Padding(2);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(121, 32);
			this->btnOK->TabIndex = 6;
			this->btnOK->Text = L"Einloggen";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Location = System::Drawing::Point(22, 65);
			this->btnCancel->Margin = System::Windows::Forms::Padding(2);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(121, 32);
			this->btnCancel->TabIndex = 7;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnCancel_Click);
			// 
			// btnNeuStart
			// 
			this->btnNeuStart->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNeuStart->Location = System::Drawing::Point(184, 65);
			this->btnNeuStart->Name = L"btnNeuStart";
			this->btnNeuStart->Size = System::Drawing::Size(218, 32);
			this->btnNeuStart->TabIndex = 8;
			this->btnNeuStart->Text = L"Tabelle neue_starten";
			this->btnNeuStart->UseVisualStyleBackColor = true;
			this->btnNeuStart->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnNeuStart_Click);
			// 
			// btnPasswortanlegen
			// 
			this->btnPasswortanlegen->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPasswortanlegen->Location = System::Drawing::Point(184, 16);
			this->btnPasswortanlegen->Name = L"btnPasswortanlegen";
			this->btnPasswortanlegen->Size = System::Drawing::Size(218, 32);
			this->btnPasswortanlegen->TabIndex = 9;
			this->btnPasswortanlegen->Text = L"Passwort_anlegen";
			this->btnPasswortanlegen->UseVisualStyleBackColor = true;
			this->btnPasswortanlegen->Click += gcnew System::EventHandler(this, &AdminLoginForm::btnPasswortanlegen_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(12, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(422, 91);
			this->panel1->TabIndex = 10;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnPasswortanlegen);
			this->panel2->Controls->Add(this->btnCancel);
			this->panel2->Controls->Add(this->btnNeuStart);
			this->panel2->Controls->Add(this->btnOK);
			this->panel2->Location = System::Drawing::Point(12, 193);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(422, 116);
			this->panel2->TabIndex = 11;
			// 
			// AdminLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 349);
			this->Controls->Add(this->tbPasswort);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkHauptFenster);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AdminLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin_Login";
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	public: bool To_Haupt_Fenster = false;//Verbindung zum Haupt_Fenster

	private: System::Void linkHauptFenster_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		this->To_Haupt_Fenster = true;//Man wird zum Hauptfenster geleitet
		this->Close();//macht den Fenster zu
	}

	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Close();//macht den Fenster zu
		System::Windows::Forms::DialogResult Cancel;
		//Dialog um zu beenden

		try{
			Cancel = MessageBox::Show("{(L-D)-V} beenden", "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (Cancel == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

	public: Admin^ admin=nullptr;//Variable der Klasse Admin, man initialisiert es auf null

private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ name = this->tbName->Text;
	String^ passwort = this->tbPasswort->Text;

	if (name->Length == 0 || passwort->Length == 0)
	{
		MessageBox::Show("Name und Passwort bitte eingeben", "Name oder Passwort sind leer", MessageBoxButtons::OK);
		return;
	}
	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;

		MySqlCommand^ sqlcmd = gcnew MySqlCommand("select * from admin where Name = @name and  Passwort = md5(@pass);", sqlconn);

		sqlcmd->Parameters->AddWithValue("@name", name);
		sqlcmd->Parameters->AddWithValue("@pass", passwort);

		MySqlDataReader^ reader = sqlcmd->ExecuteReader();
		if (reader->Read())
		{
			admin = gcnew Admin;
			admin->id = reader->GetInt16(0);
			admin->name = reader->GetString(1);
			admin->passwort = reader->GetString(2);
			this->Close();
		}
		else
		{
			MessageBox::Show("der User: " + name + ", existiert nicht!!", "Login fehlgeschlagen!", MessageBoxButtons::OK);
			return;

		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Verbindung mit database fehlgeschlagen", "Verbingung Fehler", MessageBoxButtons::OK);
	}
}
private: System::Void btnNeuStart_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		//mit folgenden Befehle wird der Inhalt der Tabelle (wifi_users, users_liste und liste) der Database wifi, gelöscht
		MySqlCommand^ sqlcmd = gcnew MySqlCommand("truncate table admin", sqlconn);
		

		sqlcmd->ExecuteNonQuery();
		
		MessageBox::Show("Tabelle (admin) wurde neu gestartet!", "{(L-D)-V}", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		sqlconn->Close();
		//dann bekommt man eine Bestätigungsmeldung dass die Tabelle neugestartet wurden und letztendlich wird die Connection wieder zugemacht.
	
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
	   public: bool To_Passwort_anlegen = false;
private: System::Void btnPasswortanlegen_Click(System::Object^ sender, System::EventArgs^ e) {
	this->To_Passwort_anlegen = true;
	this->Close();
}
};
}
