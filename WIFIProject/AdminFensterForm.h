#pragma once

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using  namespace MySql::Data::MySqlClient;//ermögicht die Connection mit MySql

	/// <summary>
	/// Zusammenfassung für AdminFensterForm
	/// </summary>
	public ref class AdminFensterForm : public System::Windows::Forms::Form
	{
	public:
		AdminFensterForm(void)
		{
			InitializeComponent();
			wifi_users();
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~AdminFensterForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbPasswort;
	private: System::Windows::Forms::ComboBox^ cbListe;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnU_anlegen;
	private: System::Windows::Forms::Button^ btnU_loeschen;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::Button^ btnUpdate;
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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbPasswort = (gcnew System::Windows::Forms::TextBox());
			this->cbListe = (gcnew System::Windows::Forms::ComboBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnU_anlegen = (gcnew System::Windows::Forms::Button());
			this->btnU_loeschen = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// linkHauptFenster
			// 
			this->linkHauptFenster->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->linkHauptFenster->AutoSize = true;
			this->linkHauptFenster->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkHauptFenster->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkHauptFenster->Location = System::Drawing::Point(485, 448);
			this->linkHauptFenster->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkHauptFenster->Name = L"linkHauptFenster";
			this->linkHauptFenster->Size = System::Drawing::Size(95, 24);
			this->linkHauptFenster->TabIndex = 0;
			this->linkHauptFenster->TabStop = true;
			this->linkHauptFenster->Text = L"zum H_F";
			this->linkHauptFenster->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminFensterForm::linkHauptFenster_LinkClicked);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Admin Fenster";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(31, 87);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(31, 137);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 23);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Passwort:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(44, 184);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Liste:";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(126, 87);
			this->tbName->Margin = System::Windows::Forms::Padding(2);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(158, 26);
			this->tbName->TabIndex = 5;
			// 
			// tbPasswort
			// 
			this->tbPasswort->Location = System::Drawing::Point(126, 137);
			this->tbPasswort->Margin = System::Windows::Forms::Padding(2);
			this->tbPasswort->Name = L"tbPasswort";
			this->tbPasswort->PasswordChar = '*';
			this->tbPasswort->Size = System::Drawing::Size(158, 26);
			this->tbPasswort->TabIndex = 6;
			// 
			// cbListe
			// 
			this->cbListe->FormattingEnabled = true;
			this->cbListe->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", L"9",
					L"10"
			});
			this->cbListe->Location = System::Drawing::Point(126, 184);
			this->cbListe->Margin = System::Windows::Forms::Padding(2);
			this->cbListe->Name = L"cbListe";
			this->cbListe->Size = System::Drawing::Size(92, 26);
			this->cbListe->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Location = System::Drawing::Point(34, 229);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 218);
			this->panel1->TabIndex = 8;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 9);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(376, 200);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminFensterForm::dataGridView1_CellClick);
			// 
			// btnU_anlegen
			// 
			this->btnU_anlegen->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnU_anlegen->Location = System::Drawing::Point(19, 66);
			this->btnU_anlegen->Margin = System::Windows::Forms::Padding(2);
			this->btnU_anlegen->Name = L"btnU_anlegen";
			this->btnU_anlegen->Size = System::Drawing::Size(139, 36);
			this->btnU_anlegen->TabIndex = 9;
			this->btnU_anlegen->Text = L"User anlegen";
			this->btnU_anlegen->UseVisualStyleBackColor = true;
			this->btnU_anlegen->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnU_anlegen_Click);
			// 
			// btnU_loeschen
			// 
			this->btnU_loeschen->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnU_loeschen->Location = System::Drawing::Point(19, 106);
			this->btnU_loeschen->Margin = System::Windows::Forms::Padding(2);
			this->btnU_loeschen->Name = L"btnU_loeschen";
			this->btnU_loeschen->Size = System::Drawing::Size(139, 33);
			this->btnU_loeschen->TabIndex = 10;
			this->btnU_loeschen->Text = L"User löschen";
			this->btnU_loeschen->UseVisualStyleBackColor = true;
			this->btnU_loeschen->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnU_loeschen_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(43, 11);
			this->btnReset->Margin = System::Windows::Forms::Padding(2);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(87, 28);
			this->btnReset->TabIndex = 11;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnReset_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(405, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 18);
			this->label5->TabIndex = 12;
			this->label5->Text = L"ID:";
			this->label5->Click += gcnew System::EventHandler(this, &AdminFensterForm::label5_Click);
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(462, 68);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(50, 26);
			this->tbID->TabIndex = 13;
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(19, 144);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(139, 29);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Update DB";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnUpdate_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnUpdate);
			this->panel2->Controls->Add(this->btnReset);
			this->panel2->Controls->Add(this->btnU_loeschen);
			this->panel2->Controls->Add(this->btnU_anlegen);
			this->panel2->Location = System::Drawing::Point(468, 229);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(177, 199);
			this->panel2->TabIndex = 15;
			// 
			// AdminFensterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 481);
			this->Controls->Add(this->tbID);
			this->Controls->Add(this->linkHauptFenster);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->cbListe);
			this->Controls->Add(this->tbPasswort);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AdminFensterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"
				L"uuuuuuuuuuuuuuu";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void wifi_users()
		{
			MySqlConnection^ sqlconn = gcnew MySqlConnection();
			sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = LoginDatenVerwalter; password = wifi123; database = wifi";
			sqlconn->Open();
			MySqlCommand^ sqlcom = gcnew MySqlCommand();
			sqlcom->Connection = sqlconn;
			sqlcom->CommandText = "select * from wifi_users";
			MySqlDataReader^ sqlrd = sqlcom->ExecuteReader();
			DataTable^ sqldt = gcnew DataTable();
			sqldt->Load(sqlrd);
			sqlrd->Close();
			sqlconn->Close();

			dataGridView1->DataSource = sqldt;
		}
	private: System::Void aktualisieren()
	{
		try {
			MySqlConnection^ sqlconn = gcnew MySqlConnection();
			sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = LoginDatenVerwalter; password = wifi123; database = wifi";
			MySqlCommand^ sqlcom = gcnew MySqlCommand();
			sqlcom->Connection = sqlconn;

			MySqlDataAdapter^ sqldta = gcnew MySqlDataAdapter("select * from wifi_users", sqlconn);
			DataTable^ sqldt = gcnew DataTable();
			sqldta->Fill(sqldt);
			dataGridView1->DataSource = sqldt;
			

		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}

		//damit wird man zum HauptFenster geleitet
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkHauptFenster_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//damit wird man zum HauptFenster geleitet
		this->To_Haupt_Fenster = true;
		this->Close();
	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		tbID->Text = "";
		tbName->Text = "";
		tbPasswort->Text = "";
		cbListe->SelectedIndex = -1;

	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		tbID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbName->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbPasswort->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		cbListe->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
	}
	catch(Exception ^e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Hand);
	}
}
private: System::Void btnU_anlegen_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ sqlconn = gcnew MySqlConnection();
	sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = LoginDatenVerwalter; password = wifi123; database = wifi";
	sqlconn->Open();

	MySqlCommand^ sqlcom = gcnew MySqlCommand();
	sqlcom->Connection = sqlconn;
	try {
		sqlcom->CommandText = "insert into wifi_users(ID, Name, Passwort, liste)" + "values('" + tbID->Text + "','" + tbName->Text + "','" + tbPasswort->Text + "','" + cbListe->Text + "')";
		
		sqlcom->ExecuteNonQuery();
		sqlconn->Close();
		wifi_users();
		aktualisieren();

		int liste = cbListe->SelectedIndex;

		switch(liste)
		{
		case '1': cbListe->SelectedIndex=-1 ; ; break; case '2': cbListe->SelectedIndex = -1; break; case '3': cbListe->SelectedIndex = -1; break; case '4': cbListe->SelectedIndex = -1; break; case '5': cbListe->SelectedIndex = -1; break; case '6': cbListe->SelectedIndex = -1; break; case '7': cbListe->SelectedIndex = -1; break; case '8': cbListe->SelectedIndex = -1; break; case '9': cbListe->SelectedIndex = -1; break; case '10': cbListe->SelectedIndex = -1; break;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnU_loeschen_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = LoginDatenVerwalter; password = wifi123; database = wifi";

		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;

		String^ ID = tbID->Text;
		MySqlCommand^ sqlcmd = gcnew MySqlCommand("DELETE FROM wifi_users WHERE ID=" + ID + "", sqlconn);

		sqlconn->Open();

		MySqlDataReader^ sqlrd = sqlcmd->ExecuteReader();
		MessageBox::Show("User gelöscht!", "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Asterisk);
		sqlconn->Close();
		aktualisieren();
		wifi_users();
	
	}
	catch(Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = LoginDatenVerwalter; password = wifi123; database = wifi";
		
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;

		

		String^ id = tbID->Text;
		String^ name = tbName->Text;
		String^ passwort = tbPasswort->Text;
		String^ lis = cbListe->Text;

	//MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		sqlcom->CommandText = "update wifi_users set ID='" + id + "', Name = '" + name + "', Passwort = '" + passwort + "', liste = '" + lis + "' where ID = " + id + "", sqlconn;

		sqlconn->Open();
		//sqlcom->ExecuteNonQuery();
		MySqlDataReader^ sqlrd = sqlcom->ExecuteReader();
		sqlconn->Close();
		wifi_users();
		aktualisieren();

		
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
	//Hallo
}
};
}
