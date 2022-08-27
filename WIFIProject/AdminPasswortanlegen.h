#pragma once
#include"Admin.h"

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für AdminPasswortanlegen
	/// </summary>
	public ref class AdminPasswortanlegen : public System::Windows::Forms::Form
	{
	public:
		AdminPasswortanlegen(void)
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
		~AdminPasswortanlegen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnPasswortanlegen;
	private: System::Windows::Forms::TextBox^ tbConfNeuesPass;
	private: System::Windows::Forms::TextBox^ tbNeuesPass;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbAltesPass;
	private: System::Windows::Forms::Panel^ panel1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnPasswortanlegen = (gcnew System::Windows::Forms::Button());
			this->tbConfNeuesPass = (gcnew System::Windows::Forms::TextBox());
			this->tbNeuesPass = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbAltesPass = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(123, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(367, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin: Passwort_anlegen";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(441, 412);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(83, 23);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"zum H-F";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminPasswortanlegen::linkLabel1_LinkClicked);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(21, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(235, 29);
			this->label5->TabIndex = 22;
			this->label5->Text = L"confirm neues Passwort:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(95, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 29);
			this->label4->TabIndex = 21;
			this->label4->Text = L"neues Passwort:";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(183, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 29);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Name:";
			// 
			// btnPasswortanlegen
			// 
			this->btnPasswortanlegen->BackColor = System::Drawing::SystemColors::Info;
			this->btnPasswortanlegen->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPasswortanlegen->Location = System::Drawing::Point(174, 349);
			this->btnPasswortanlegen->Name = L"btnPasswortanlegen";
			this->btnPasswortanlegen->Size = System::Drawing::Size(206, 57);
			this->btnPasswortanlegen->TabIndex = 26;
			this->btnPasswortanlegen->Text = L"Passwort anlegen!";
			this->btnPasswortanlegen->UseVisualStyleBackColor = false;
			this->btnPasswortanlegen->Click += gcnew System::EventHandler(this, &AdminPasswortanlegen::btnPasswortanlegen_Click);
			// 
			// tbConfNeuesPass
			// 
			this->tbConfNeuesPass->Location = System::Drawing::Point(271, 277);
			this->tbConfNeuesPass->Name = L"tbConfNeuesPass";
			this->tbConfNeuesPass->PasswordChar = '<';
			this->tbConfNeuesPass->Size = System::Drawing::Size(217, 34);
			this->tbConfNeuesPass->TabIndex = 25;
			// 
			// tbNeuesPass
			// 
			this->tbNeuesPass->Location = System::Drawing::Point(271, 226);
			this->tbNeuesPass->Name = L"tbNeuesPass";
			this->tbNeuesPass->PasswordChar = '<';
			this->tbNeuesPass->Size = System::Drawing::Size(217, 34);
			this->tbNeuesPass->TabIndex = 24;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(271, 127);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(217, 34);
			this->tbName->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(95, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(150, 29);
			this->label3->TabIndex = 27;
			this->label3->Text = L"altes Passwort:";
			// 
			// tbAltesPass
			// 
			this->tbAltesPass->Location = System::Drawing::Point(271, 175);
			this->tbAltesPass->Name = L"tbAltesPass";
			this->tbAltesPass->PasswordChar = '^';
			this->tbAltesPass->Size = System::Drawing::Size(217, 34);
			this->tbAltesPass->TabIndex = 28;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(12, 99);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(512, 234);
			this->panel1->TabIndex = 29;
			// 
			// AdminPasswortanlegen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 456);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbAltesPass);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnPasswortanlegen);
			this->Controls->Add(this->tbConfNeuesPass);
			this->Controls->Add(this->tbNeuesPass);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"AdminPasswortanlegen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin Passwort anlegen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: Admin^ admin = nullptr;
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Haupt_Fenster = true;
		this->Close();
	}
	private: System::Void btnPasswortanlegen_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ altesPass = tbAltesPass->Text;
		
		String^ neuesPass = tbNeuesPass->Text;
		String^ confirmNeuesPass = tbConfNeuesPass->Text;

		if (name->Length == 0 || altesPass->Length == 0|| neuesPass->Length == 0 || confirmNeuesPass->Length == 0)
		{
			//wenn beide leer sind soll eine Meldung erscheinen
			MessageBox::Show("Daten bitte eingeben", "die Passwörter sind leer", MessageBoxButtons::OK);
			return;
		}
		if (String::Compare(neuesPass, confirmNeuesPass) != 0)
		{
			//wenn beide leer sind soll eine Meldung erscheinen
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


		MySqlCommand^ sqlcmd = gcnew MySqlCommand("select * from admin where Name = @name and  Passwort = @pass;", sqlconn);

		sqlcmd->Parameters->AddWithValue("@name", name);
		sqlcmd->Parameters->AddWithValue("@pass", altesPass);


		MySqlDataReader^ reader = sqlcmd->ExecuteReader();
		if (reader->Read())
		{
			admin = gcnew Admin;
			admin->id = reader->GetInt16(0);
			admin->name = reader->GetString(1);
			admin->passwort = reader->GetString(2);

		}
		else
		{
			MessageBox::Show("Die Daten existieren nicht!", "Login fehlgeschlagen!", MessageBoxButtons::OK);
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

			MySqlCommand^ sqlcmd1 = gcnew MySqlCommand("update admin set Passwort=MD5(@pwd) where Name =@name and Passwort=@pass", sqlconn);
			sqlcmd1->Parameters->AddWithValue("@name", name);
			sqlcmd1->Parameters->AddWithValue("@pass", altesPass);
			sqlcmd1->Parameters->AddWithValue("@pwd", neuesPass);
			sqlcmd1->ExecuteNonQuery();

			MessageBox::Show("Passwort gespeichert!! ", "Meldung", MessageBoxButtons::OK);

			sqlconn->Close();
			reader->Close();
			this->Close();

		}
		catch (Exception^ e) {
			//Wenn die Vebindung mit dem DB unmöglicht ist, soll eine Fehler-meldung erscheinen
			MessageBox::Show("Verbindung mit database fehlgeschlagen", "Verbingung Fehler", MessageBoxButtons::OK);
		}
	}
};
}
