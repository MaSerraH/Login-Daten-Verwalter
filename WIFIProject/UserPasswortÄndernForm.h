#pragma once
#include"Users.h"//die Klasse Users wird hinzugefügt

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für UserPasswortÄndernForm
	/// </summary>
	public ref class UserPasswortÄndernForm : public System::Windows::Forms::Form
	{
	public:
		UserPasswortÄndernForm(void)
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
		~UserPasswortÄndernForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbConfNeuesPass;
	private: System::Windows::Forms::TextBox^ tbNeuesPass;
	private: System::Windows::Forms::TextBox^ tbAltesPass;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Panel^ panel1;
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
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbConfNeuesPass = (gcnew System::Windows::Forms::TextBox());
			this->tbNeuesPass = (gcnew System::Windows::Forms::TextBox());
			this->tbAltesPass = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(386, 407);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(87, 24);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"zum H-F";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserPasswortÄndernForm::linkLabel1_LinkClicked);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(19, 263);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(235, 29);
			this->label5->TabIndex = 14;
			this->label5->Text = L"confirm neues Passwort:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(93, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 29);
			this->label4->TabIndex = 13;
			this->label4->Text = L"neues Passwort:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(93, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"altes Passwort:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(181, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 29);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Name:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(60, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 44);
			this->label1->TabIndex = 10;
			this->label1->Text = L"User: Passwort_ändern";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(135, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 46);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Passwort ändern!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserPasswortÄndernForm::button1_Click);
			// 
			// tbConfNeuesPass
			// 
			this->tbConfNeuesPass->Location = System::Drawing::Point(269, 258);
			this->tbConfNeuesPass->Name = L"tbConfNeuesPass";
			this->tbConfNeuesPass->PasswordChar = '+';
			this->tbConfNeuesPass->Size = System::Drawing::Size(217, 38);
			this->tbConfNeuesPass->TabIndex = 18;
			// 
			// tbNeuesPass
			// 
			this->tbNeuesPass->Location = System::Drawing::Point(269, 207);
			this->tbNeuesPass->Name = L"tbNeuesPass";
			this->tbNeuesPass->PasswordChar = '+';
			this->tbNeuesPass->Size = System::Drawing::Size(217, 38);
			this->tbNeuesPass->TabIndex = 17;
			// 
			// tbAltesPass
			// 
			this->tbAltesPass->Location = System::Drawing::Point(269, 159);
			this->tbAltesPass->Name = L"tbAltesPass";
			this->tbAltesPass->PasswordChar = '^';
			this->tbAltesPass->Size = System::Drawing::Size(217, 38);
			this->tbAltesPass->TabIndex = 16;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(269, 108);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(217, 38);
			this->tbName->TabIndex = 15;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(12, 82);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(483, 254);
			this->panel1->TabIndex = 20;
			// 
			// UserPasswortÄndernForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 449);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbConfNeuesPass);
			this->Controls->Add(this->tbNeuesPass);
			this->Controls->Add(this->tbAltesPass);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"UserPasswortÄndernForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Passwort_ändern";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Users^ user = nullptr;
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Haupt_Fenster = true;
		this->Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//der Button1 (Passwort ändern!) ermöglich den Usre sein eigenes Passwort festzulegen
		String^ name = tbName->Text;
		String^ altesPass = tbAltesPass->Text;
		String^ neuesPass = tbNeuesPass->Text;
		String^ confirmNeuesPass = tbConfNeuesPass->Text;
		//die Variable name, altesPass, neuesPass und confirmNeuePass werden mir den Werte der zugehörigene textboxes initialisiert

		if (altesPass->Length == 0 || neuesPass->Length == 0 || confirmNeuesPass->Length == 0)
		{
			//wenn beide leer sind soll eine Meldung erscheinen
			MessageBox::Show("Daten bitte eingeben", "die Passwörter sind leer", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(neuesPass, confirmNeuesPass) != 0)
		{
			//wenn beide Werte nicht gleich sind, soll eine Meldung erscheinen
			MessageBox::Show("die Werte stimmen nicht! (Passwort und Confirm)", "Fehler", MessageBoxButtons::OK);
			return;
		}

		//Adresse des Database
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.

		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;


		MySqlCommand^ sqlcmd = gcnew MySqlCommand("select * from wifi_users where Name = @name and  Passwort = MD5(@pass);", sqlconn);

		sqlcmd->Parameters->AddWithValue("@name", name);
		sqlcmd->Parameters->AddWithValue("@pass", altesPass);
		//man filtriert die Tabelle wifi_users und man liest ob es ein user mit dem name und das gehashte passwort gibt.

		MySqlDataReader^ reader = sqlcmd->ExecuteReader();
		if (reader->Read())
		{
			user = gcnew Users;
			user->id = reader->GetInt16(0);
			user->name = reader->GetString(1);
			user->passwort = reader->GetString(2);
			user->liste = reader->GetInt16(3);

		}
		else
		{
			//wenn die eingegebene Werte name und altespass mit den in der Tabelle wifi_users gespeicherte Werte nicht stimmen, dann soll eine Meldung erscheinen
			MessageBox::Show("die Werte stimmen nicht! (Name und altes Passwort)", "Login fehlgeschlagen!", MessageBoxButtons::OK);
			return;

		}
		try {

			//Adresse des Database
			MySqlConnection^ sqlconn = gcnew MySqlConnection();
			sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
			sqlconn->Open();
			//man macht die Connection zum Server und zur Database(wifi) auf.

			MySqlCommand^ sqlcom = gcnew MySqlCommand();
			sqlcom->Connection = sqlconn;
			//man verbindet sich mit der Connection

			MySqlCommand^ sqlcmd1 = gcnew MySqlCommand("update wifi_users set Passwort=MD5(@pwd) where Name =@name and Passwort=md5(@pass)", sqlconn);
			sqlcmd1->Parameters->AddWithValue("@name", name);
			sqlcmd1->Parameters->AddWithValue("@pass", altesPass);
			sqlcmd1->Parameters->AddWithValue("@pwd", neuesPass);
			sqlcmd1->ExecuteNonQuery();
			//mit dem o.g. Befehl aktualisiert man die Spalte Passwort der Tabelle wifi_users. Man speichert das neue Passwort (Hash) sofern die eingegebene Werte stimmen: name und altesPass(Hash), d.h. nur die Attribute(Passwort) des gefragten user wird aktualisiert

			MessageBox::Show("Passwort aktualisiert!! ", "Meldung", MessageBoxButtons::OK);

			sqlconn->Close();
			reader->Close();
			this->Close();
			//man mcht den reader, die Connection und letzendlich den Fenster zu, aber man bekommt vorher eine Meldung dass das Passwort aktualisiert wurde
		}
		catch (Exception^ e) {
			//Wenn die Vebindung mit dem DB unmöglicht ist, soll eine Fehler-meldung erscheinen
			MessageBox::Show("Verbindung mit database fehlgeschlagen", "Verbingung Fehler", MessageBoxButtons::OK);
		}
	}
};
}
