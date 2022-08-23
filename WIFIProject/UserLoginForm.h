#pragma once
#include "Users.h"

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für UserLoginForm
	/// </summary>
	public ref class UserLoginForm : public System::Windows::Forms::Form
	{
	public:
		UserLoginForm(void)
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
		~UserLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbPasswort;
	private: System::Windows::Forms::Button^ btnEinloggen;
	private: System::Windows::Forms::Button^ btnPasswort_Ändern;
	private: System::Windows::Forms::Button^ btnReset;
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
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPasswort = (gcnew System::Windows::Forms::TextBox());
			this->btnEinloggen = (gcnew System::Windows::Forms::Button());
			this->btnPasswort_Ändern = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(334, 373);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(83, 23);
			this->linkLabel2->TabIndex = 1;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"zum H-F";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &UserLoginForm::linkLabel2_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(83, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Users-Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Passwort:";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(139, 113);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(205, 38);
			this->tbName->TabIndex = 5;
			// 
			// tbPasswort
			// 
			this->tbPasswort->Location = System::Drawing::Point(141, 173);
			this->tbPasswort->Name = L"tbPasswort";
			this->tbPasswort->PasswordChar = '&';
			this->tbPasswort->Size = System::Drawing::Size(203, 38);
			this->tbPasswort->TabIndex = 6;
			// 
			// btnEinloggen
			// 
			this->btnEinloggen->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEinloggen->Location = System::Drawing::Point(36, 254);
			this->btnEinloggen->Name = L"btnEinloggen";
			this->btnEinloggen->Size = System::Drawing::Size(135, 40);
			this->btnEinloggen->TabIndex = 7;
			this->btnEinloggen->Text = L"Einloggen";
			this->btnEinloggen->UseVisualStyleBackColor = true;
			this->btnEinloggen->Click += gcnew System::EventHandler(this, &UserLoginForm::btnEinloggen_Click);
			// 
			// btnPasswort_Ändern
			// 
			this->btnPasswort_Ändern->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPasswort_Ändern->Location = System::Drawing::Point(237, 254);
			this->btnPasswort_Ändern->Name = L"btnPasswort_Ändern";
			this->btnPasswort_Ändern->Size = System::Drawing::Size(170, 40);
			this->btnPasswort_Ändern->TabIndex = 8;
			this->btnPasswort_Ändern->Text = L"Passwort_ändern";
			this->btnPasswort_Ändern->UseVisualStyleBackColor = true;
			this->btnPasswort_Ändern->Click += gcnew System::EventHandler(this, &UserLoginForm::btnPasswort_Ändern_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(163, 316);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(85, 43);
			this->btnReset->TabIndex = 9;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &UserLoginForm::btnReset_Click);
			// 
			// UserLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 416);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnPasswort_Ändern);
			this->Controls->Add(this->btnEinloggen);
			this->Controls->Add(this->tbPasswort);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel2);
			this->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"UserLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserLoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Haupt_Fenster = true;
		this->Close();
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		tbName->Text = "";
		tbPasswort->Text = "";
	}
	public: Users^ user = nullptr;
private: System::Void btnEinloggen_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->tbName->Text;
	String^ passwort = this ->tbPasswort->Text;

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

		MySqlCommand^ sqlcmd = gcnew MySqlCommand("select * from wifi_users where Name = @name and  Passwort = MD5(@pass);", sqlconn);

		sqlcmd->Parameters->AddWithValue("@name", name);
		sqlcmd->Parameters->AddWithValue("@pass", passwort);

		MySqlDataReader^ reader = sqlcmd->ExecuteReader();
		if (reader->Read())
		{
			user = gcnew Users;
			user->id = reader->GetInt16(0);
			user->name = reader->GetString(1);
			user->passwort = reader->GetString(2);
			user->liste = reader->GetInt16(3);
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
public: bool To_User_Passwort_ändern = false;
private: System::Void btnPasswort_Ändern_Click(System::Object^ sender, System::EventArgs^ e) {
	this->To_User_Passwort_ändern = true;
	this->Close();
}
};
}
