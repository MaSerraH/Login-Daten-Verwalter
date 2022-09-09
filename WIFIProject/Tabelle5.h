#pragma once

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Zusammenfassung für Tabelle5
	/// </summary>
	public ref class Tabelle5 : public System::Windows::Forms::Form
	{
	public:
		Tabelle5(void)
		{
			InitializeComponent();
			t_5();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Tabelle5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btnTabzeigen;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnExport;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnNeuSt;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnAnlegen;
	private: System::Windows::Forms::Button^ btnLöschen;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnSuchen;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::TextBox^ tbSuchen;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPass;
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::TextBox^ tbNameIn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;

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
			this->btnTabzeigen = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnExport = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnNeuSt = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnAnlegen = (gcnew System::Windows::Forms::Button());
			this->btnLöschen = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnSuchen = (gcnew System::Windows::Forms::Button());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->tbSuchen = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->tbNameIn = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(330, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 33);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Users: Konto 5";
			// 
			// linkLabel1
			// 
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(771, 727);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(115, 29);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"zum H-F";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Tabelle5::linkLabel1_LinkClicked);
			// 
			// btnTabzeigen
			// 
			this->btnTabzeigen->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTabzeigen->Location = System::Drawing::Point(26, 71);
			this->btnTabzeigen->Name = L"btnTabzeigen";
			this->btnTabzeigen->Size = System::Drawing::Size(171, 42);
			this->btnTabzeigen->TabIndex = 31;
			this->btnTabzeigen->Text = L"Tabelle zeigen";
			this->btnTabzeigen->UseVisualStyleBackColor = true;
			this->btnTabzeigen->Click += gcnew System::EventHandler(this, &Tabelle5::btnTabzeigen_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(26, 14);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(171, 51);
			this->btnUpdate->TabIndex = 30;
			this->btnUpdate->Text = L"Tabelle update";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &Tabelle5::btnUpdate_Click);
			// 
			// btnExport
			// 
			this->btnExport->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->btnExport->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExport->Location = System::Drawing::Point(5, 167);
			this->btnExport->Name = L"btnExport";
			this->btnExport->Size = System::Drawing::Size(216, 53);
			this->btnExport->TabIndex = 32;
			this->btnExport->Text = L"Tabelle exportieren";
			this->btnExport->UseVisualStyleBackColor = true;
			this->btnExport->Click += gcnew System::EventHandler(this, &Tabelle5::btnExport_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->btnTabzeigen);
			this->panel1->Controls->Add(this->btnNeuSt);
			this->panel1->Controls->Add(this->btnUpdate);
			this->panel1->Controls->Add(this->btnExport);
			this->panel1->Location = System::Drawing::Point(681, 418);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(238, 234);
			this->panel1->TabIndex = 99;
			// 
			// btnNeuSt
			// 
			this->btnNeuSt->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNeuSt->Location = System::Drawing::Point(5, 119);
			this->btnNeuSt->Name = L"btnNeuSt";
			this->btnNeuSt->Size = System::Drawing::Size(218, 42);
			this->btnNeuSt->TabIndex = 34;
			this->btnNeuSt->Text = L"Tabelle neu_starten";
			this->btnNeuSt->UseVisualStyleBackColor = true;
			this->btnNeuSt->Click += gcnew System::EventHandler(this, &Tabelle5::btnNeuSt_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightBlue;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnAnlegen);
			this->panel2->Controls->Add(this->btnLöschen);
			this->panel2->Controls->Add(this->btnReset);
			this->panel2->Location = System::Drawing::Point(39, 328);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(396, 54);
			this->panel2->TabIndex = 100;
			// 
			// btnAnlegen
			// 
			this->btnAnlegen->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAnlegen->Location = System::Drawing::Point(3, 3);
			this->btnAnlegen->Name = L"btnAnlegen";
			this->btnAnlegen->Size = System::Drawing::Size(101, 36);
			this->btnAnlegen->TabIndex = 28;
			this->btnAnlegen->Text = L"anlegen";
			this->btnAnlegen->UseVisualStyleBackColor = true;
			this->btnAnlegen->Click += gcnew System::EventHandler(this, &Tabelle5::btnAnlegen_Click);
			// 
			// btnLöschen
			// 
			this->btnLöschen->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLöschen->Location = System::Drawing::Point(128, 3);
			this->btnLöschen->Name = L"btnLöschen";
			this->btnLöschen->Size = System::Drawing::Size(108, 38);
			this->btnLöschen->TabIndex = 29;
			this->btnLöschen->Text = L"löschen";
			this->btnLöschen->UseVisualStyleBackColor = true;
			this->btnLöschen->Click += gcnew System::EventHandler(this, &Tabelle5::btnLöschen_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(270, 5);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(110, 36);
			this->btnReset->TabIndex = 27;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &Tabelle5::btnReset_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Location = System::Drawing::Point(31, 418);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(604, 281);
			this->dataGridView1->TabIndex = 98;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Tabelle5::dataGridView1_CellClick);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PowderBlue;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Location = System::Drawing::Point(17, 400);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(634, 319);
			this->panel3->TabIndex = 102;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(46, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 26);
			this->label3->TabIndex = 91;
			this->label3->Text = L"Login_name:";
			// 
			// btnSuchen
			// 
			this->btnSuchen->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSuchen->Location = System::Drawing::Point(746, 50);
			this->btnSuchen->Name = L"btnSuchen";
			this->btnSuchen->Size = System::Drawing::Size(99, 39);
			this->btnSuchen->TabIndex = 97;
			this->btnSuchen->Text = L"Suchen";
			this->btnSuchen->UseVisualStyleBackColor = true;
			this->btnSuchen->Click += gcnew System::EventHandler(this, &Tabelle5::btnSuchen_Click);
			// 
			// labelID
			// 
			this->labelID->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelID->Location = System::Drawing::Point(769, 151);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(76, 29);
			this->labelID->TabIndex = 101;
			this->labelID->Text = L"...";
			// 
			// tbSuchen
			// 
			this->tbSuchen->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbSuchen->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSuchen->Location = System::Drawing::Point(669, 93);
			this->tbSuchen->Name = L"tbSuchen";
			this->tbSuchen->Size = System::Drawing::Size(221, 34);
			this->tbSuchen->TabIndex = 96;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(34, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(180, 26);
			this->label4->TabIndex = 92;
			this->label4->Text = L"Login_Passwort:";
			// 
			// tbPass
			// 
			this->tbPass->Location = System::Drawing::Point(286, 241);
			this->tbPass->Name = L"tbPass";
			this->tbPass->Size = System::Drawing::Size(237, 34);
			this->tbPass->TabIndex = 95;
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(286, 175);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(237, 34);
			this->tbName->TabIndex = 94;
			// 
			// tbNameIn
			// 
			this->tbNameIn->Location = System::Drawing::Point(292, 105);
			this->tbNameIn->Name = L"tbNameIn";
			this->tbNameIn->Size = System::Drawing::Size(237, 34);
			this->tbNameIn->TabIndex = 93;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(258, 26);
			this->label2->TabIndex = 90;
			this->label2->Text = L"Name der Internet Seite:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::PowderBlue;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->btnSuchen);
			this->panel4->Controls->Add(this->tbSuchen);
			this->panel4->Controls->Add(this->labelID);
			this->panel4->Location = System::Drawing::Point(12, 80);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(919, 233);
			this->panel4->TabIndex = 103;
			// 
			// Tabelle5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(944, 777);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbPass);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->tbNameIn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->panel4);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Tabelle5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"User Konto 5";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:System::Void t_5()
	{
		//die Methode wifi_users soll den Inhalt eine Tabelle der Databank lesen und dann in a datagridview aufladen, damit man sie lesen kann.

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man öffnet die Connection zum Server und einen Bestimmte Database/schema(wifi)
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database
		sqlcom->CommandText = "select * from t_5";
		MySqlDataReader^ sqlrd = sqlcom->ExecuteReader();
		//Man liest den Inhalt der Tabelle(t_5) mittels ein Reader
		DataTable^ sqldt = gcnew DataTable();
		sqldt->Load(sqlrd);
		//man ladet den gelesenen Inhalt in einer Table auf
		sqlrd->Close();
		//man macht den Reader und die Connection wieder zu
		dataGridView1->DataSource = sqldt;
		//man setzt die Table mit dem gelesenen Inhalt als Informationsquelle für den DataGridView, damit der User des {(L-D)-V} sie lesen kann.
	}
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Haupt_Fenster = true;
		this->Close();
	}
	private: System::Void btnAnlegen_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			MySqlConnection^ sqlconn = gcnew MySqlConnection();
			sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
			sqlconn->Open();
			//man macht die Connection zum Server und zur Database(wifi) auf.

			MySqlCommand^ sqlcom = gcnew MySqlCommand();
			sqlcom->Connection = sqlconn;
			//man verbindet sich mit der Database
			// 
			//Die Variable nameInt, nameLog, und passLog werden von den zugehörigen textboxes gelesen

			String^ nameInt = tbNameIn->Text;
			String^ nameLog = tbName->Text;
			String^ passLog = tbPass->Text;
			//mittels den Command Insert, fügt man den gelesene Inhalt von den Variablen (Name, LoginName, LoginPasswort) in der zugehörigen Spalte der Tabelle(t_5) hinzu
			sqlcom->CommandText = "insert into t_5(Name, LoginName, LoginPasswort)" + "values('" + nameInt + "','" + nameLog + "', '" + passLog + "')";
			sqlcom->ExecuteNonQuery();
			sqlconn->Close();
			//man macht den reader und die Connection wieder zu und man aktualisiert das dataGridView
			t_5();
		}

		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	//man leert die textboxes und das Label
	this->tbNameIn->Text = "";
	this->tbName->Text = "";
	this->tbPass->Text = "";
	this->tbSuchen->Text = "";
	this->labelID->Text = "";
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		labelID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbNameIn->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbName->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		tbPass->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		//damit möchte man dass wenn man in die DataGrigView ancklick diese Information automatisch in die textboxes gezeigt wird
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Hand);
	}
}
private: System::Void btnLöschen_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		String^ ID = labelID->Text;
		//die variable ID wird mit dem Wert das in dem Labeltext gezeigt wird, initialisiert

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		//mittel die Abfrage(delete) wird von der Tabelle(t_5) einen ausgewählte Eintrag gelöscht. Das ID ist eindeutig
		MySqlCommand^ sqlcmd = gcnew MySqlCommand("DELETE FROM t_5 WHERE ID=" + ID + "", sqlconn);
		sqlcmd->ExecuteNonQuery();
		MessageBox::Show("Eintrag gelöscht!", "{(L-D)-V}", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		sqlconn->Close();
		t_5();
		//man macht die Connection wieder zu und das DataGridView wird aktualisiert
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnNeuSt_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		MySqlCommand^ sqlcmd = gcnew MySqlCommand("truncate table t_5", sqlconn);
		sqlcmd->ExecuteNonQuery();

		MessageBox::Show("Tabelle neu gestartet", "{(L-D)-V}", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		sqlconn->Close();
		//Die Abfrage(truncate) wird durchgeführt, d.h. den Inhalt der Tabelle wird gelöscht und die Indexierung neugestartet
		t_5();
		//man wird den aktualisierte Inhalt der Tabelle im DataGridView gezeigt bekommen.
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.

		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		String^ nameInt = tbNameIn->Text;
		String^ nameLog = tbName->Text;
		String^ passLog = tbPass->Text;
		String^ ID = labelID->Text;

		sqlcom->CommandText = "update t_5 set Name='" + nameInt + "', LoginName='" + nameLog + "', LoginPasswort='" + passLog + "' where ID= " + ID + "", sqlconn;
		sqlcom->ExecuteNonQuery();
		//die Methode update ist dafür gedacht für den Fall dass man ein Eintrag editieren will, die neue Info wird in den zugehörige Spalte der Tabelle(t_5) in DB aktualisiert
		sqlconn->Close();
		t_5();
		//man macht die Connection wieder zu und man aktualisiert das DataGridView
	}

	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnSuchen_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.

		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("select * from t_5", sqlconn);


		DataTable^ sqlDt = gcnew DataTable();
		sda->Fill(sqlDt);
		DataView^ dv = sqlDt->DefaultView;
		//man selectiert all die information in der Tabelle t_5 und man speichert diese Information in einem DataAdapter, der DataAdapter wird dann eine DataTable füllen. man erzeugt dann ein Dataview und desen DefaultView wird die DataTable sein
		//man filtert vom DataView wo der Eintrag ähnlich geschrieben ist wie im textbox und letzendlich wird diese gefilterte Eintrag im DataGridView gezeigt
		dv->RowFilter = String::Format("Name LIKE '%{0}%'", tbSuchen->Text);
		dataGridView1->DataSource = dv->ToTable();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnTabzeigen_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.

		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("select * from t_5", sqlconn);
		DataTable^ sqlDt = gcnew DataTable();
		sqlDtA->Fill(sqlDt);
		dataGridView1->DataSource = sqlDt;
		//diese Methode ist dafür gedacht um alle Einträge der Tabelle wieder im DataGridView gezeigt bekommen, nach einer Suche
		sqlconn->Close();
		t_5();
	}

	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnExport_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.

		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		sqlcom->CommandText = "select 'ID', 'Name', 'LoginName', 'LoginPasswort' union select ID, Name, LoginName, LoginPasswort from t_5 into outfile 'C:/ProgramData/MySQL/MySQL Server 8.0/Uploads/t5.csv' fields terminated by ';'", sqlconn;
		sqlcom->ExecuteNonQuery();
		sqlconn->Close();
		t_5();
	}

	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
};
}
