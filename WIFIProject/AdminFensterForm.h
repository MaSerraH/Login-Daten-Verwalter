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

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ labelListe;
	private: System::Windows::Forms::Button^ btnNeuStart;
	private: System::Windows::Forms::Label^ label6;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnNeuStart = (gcnew System::Windows::Forms::Button());
			this->labelListe = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
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
			this->linkHauptFenster->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkHauptFenster->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkHauptFenster->Location = System::Drawing::Point(595, 464);
			this->linkHauptFenster->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkHauptFenster->Name = L"linkHauptFenster";
			this->linkHauptFenster->Size = System::Drawing::Size(91, 24);
			this->linkHauptFenster->TabIndex = 0;
			this->linkHauptFenster->TabStop = true;
			this->linkHauptFenster->Text = L"zum H_F";
			this->linkHauptFenster->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminFensterForm::linkHauptFenster_LinkClicked);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 9);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 39);
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
			this->tbName->Size = System::Drawing::Size(158, 30);
			this->tbName->TabIndex = 5;
			// 
			// tbPasswort
			// 
			this->tbPasswort->Location = System::Drawing::Point(126, 137);
			this->tbPasswort->Margin = System::Windows::Forms::Padding(2);
			this->tbPasswort->Name = L"tbPasswort";
			this->tbPasswort->PasswordChar = '\"';
			this->tbPasswort->Size = System::Drawing::Size(158, 30);
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
			this->cbListe->Size = System::Drawing::Size(92, 31);
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
			this->dataGridView1->RowHeadersWidth = 51;
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
			this->btnU_anlegen->Size = System::Drawing::Size(181, 36);
			this->btnU_anlegen->TabIndex = 9;
			this->btnU_anlegen->Text = L"User anlegen";
			this->btnU_anlegen->UseVisualStyleBackColor = true;
			this->btnU_anlegen->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnU_anlegen_Click);
			// 
			// btnU_loeschen
			// 
			this->btnU_loeschen->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnU_loeschen->Location = System::Drawing::Point(21, 106);
			this->btnU_loeschen->Margin = System::Windows::Forms::Padding(2);
			this->btnU_loeschen->Name = L"btnU_loeschen";
			this->btnU_loeschen->Size = System::Drawing::Size(181, 33);
			this->btnU_loeschen->TabIndex = 10;
			this->btnU_loeschen->Text = L"User löschen";
			this->btnU_loeschen->UseVisualStyleBackColor = true;
			this->btnU_loeschen->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnU_loeschen_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(67, 9);
			this->btnReset->Margin = System::Windows::Forms::Padding(2);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(96, 34);
			this->btnReset->TabIndex = 11;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnReset_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(370, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 23);
			this->label5->TabIndex = 12;
			this->label5->Text = L"ID:";
			this->label5->Click += gcnew System::EventHandler(this, &AdminFensterForm::label5_Click);
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(422, 87);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(50, 30);
			this->tbID->TabIndex = 13;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->btnNeuStart);
			this->panel2->Controls->Add(this->btnReset);
			this->panel2->Controls->Add(this->btnU_loeschen);
			this->panel2->Controls->Add(this->btnU_anlegen);
			this->panel2->Location = System::Drawing::Point(482, 203);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(222, 244);
			this->panel2->TabIndex = 15;
			// 
			// btnNeuStart
			// 
			this->btnNeuStart->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNeuStart->Location = System::Drawing::Point(44, 161);
			this->btnNeuStart->Name = L"btnNeuStart";
			this->btnNeuStart->Size = System::Drawing::Size(137, 59);
			this->btnNeuStart->TabIndex = 17;
			this->btnNeuStart->Text = L"Tabelle neu starten";
			this->btnNeuStart->UseVisualStyleBackColor = true;
			this->btnNeuStart->Click += gcnew System::EventHandler(this, &AdminFensterForm::btnNeuStart_Click);
			// 
			// labelListe
			// 
			this->labelListe->Location = System::Drawing::Point(639, 33);
			this->labelListe->Name = L"labelListe";
			this->labelListe->Size = System::Drawing::Size(96, 30);
			this->labelListe->TabIndex = 16;
			this->labelListe->Text = L"...";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(331, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(171, 25);
			this->label6->TabIndex = 17;
			this->label6->Text = L"User-Verwaltung";
			// 
			// AdminFensterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(782, 514);
			this->Controls->Add(this->linkHauptFenster);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->labelListe);
			this->Controls->Add(this->tbID);
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
			this->Text = L"Admin Fenster";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void wifi_users()
		{
		//die Methode wifi_users soll den Inhalt eine Tabelle der Databank lesen und dann in a datagridview aufladen, damit man sie lesen kann.
		
			MySqlConnection^ sqlconn = gcnew MySqlConnection();
			sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
			sqlconn->Open();
			//man öffnet die Connection zum Server und einen Bestimmte Database/schema(wifi)
			MySqlCommand^ sqlcom = gcnew MySqlCommand();
			sqlcom->Connection = sqlconn;
			//man verbindet sich mit der Database
			//man öffnet eine bestimmte Tabelle der Database(wifi_users)
			sqlcom->CommandText = "select * from wifi_users";
			MySqlDataReader^ sqlrd = sqlcom->ExecuteReader();
			//Man liest den Inhalt der Tabelle(wifi_users) mittels ein Reader
			DataTable^ sqldt = gcnew DataTable();
			sqldt->Load(sqlrd);
			//man ladet den gelesenen Inhalt in einer Table auf
			sqlrd->Close();
			
			//man macht den Reader und die Connection wieder zu
			dataGridView1->DataSource = sqldt;
			//man setzt die Table mit dem gelesenen Inhalt als Informationsquelle für den DataGridView, damit der User des {(L-D)-V} sie lesen kann.
			try {
				//man wählt alle Inhalt der Tabelle liste(Zahlen)
				sqlcom->CommandText = "select * from liste";
				//man liest deren Inhalt und man speichert sie in einem reader
				MySqlDataReader^ sqlread = sqlcom->ExecuteReader();
				DataTable^ sqldta = gcnew DataTable();
				//eine tabelle ist erzeugt und wird mit dem Inhalt des readers gefüllt
				sqldta->Load(sqlread);
				//nur die Spalte Liste der Tabelle liste wird gezeigt(Zahlen)
				cbListe->DisplayMember = "Liste";
				//inhalt der Spalte
				cbListe->DataSource = sqldta;

				sqlread->Close();
				sqlconn->Close();
				//macht die Connection und der Reader wieder zu
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
		//die Methode Reset leert textboxes, combobox und label, damit man wieder etwas eingeben kann
		tbID->Text = "";
		tbName->Text = "";
		tbPasswort->Text = "";
		cbListe->SelectedIndex = -1;
		labelListe->Text = "";

	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	//damit erreicht man dass wenn der User des {(L-D)-V} einen bestimmte user in der Tabelle auswählt, desen Information (ID, Name, Passwort, liste) in den zugehörigen Textbox oder combobox gezeigt wird.
	try {
		tbID->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbName->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbPasswort->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		labelListe->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
	}
	catch(Exception ^e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Hand);
	}
}
private: System::Void btnU_anlegen_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
	MySqlConnection^ sqlconn = gcnew MySqlConnection();
	sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
	sqlconn->Open();
	//man macht die Connection zum Server und zur Database(wifi) auf.

	MySqlCommand^ sqlcom = gcnew MySqlCommand();
	sqlcom->Connection = sqlconn;
	//man verbindet sich mit der Database
	
	//Die Variable Name und Passwort werden von den zugehörigen textboxes gelesen, die Valiable Lis von einem Combobox(cbListe)
	//der Combobox (cbliste) wurde mit den zahlen: 1..10, vorgefüllt
	String^ name = tbName->Text;
	String^ passwort = tbPasswort->Text;
	String^ lis = cbListe->Text;
	//mittels den Command Insert, fügt man den gelesene Inhalt von den Variablen (name, passwort und lis) in der zugehörigen Spalte der Tabelle(wifi_users) hinzu
	sqlcom->CommandText = "insert into wifi_users(Name, Passwort, liste)" + "values('" + name + "',md5('" + passwort + "'), '" + lis + "')";
	sqlcom->ExecuteNonQuery();

	
	//löscht von der Tabelle liste den vorher hinzugefügte Wert weg 
	MySqlCommand^ sqlcomd1 = gcnew MySqlCommand("delete from liste where Liste=" + lis + "", sqlconn);
	sqlcomd1->ExecuteNonQuery();
	sqlconn->Close();
	wifi_users();
	//die Abfrage(insert, delete) werden durchgefüht, die Connection wieder zugemacht und man wird den aktualisierte Inhalt der Tabelle im DataGridView gezeigt bekommen.		
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void btnU_loeschen_Click(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ lis = labelListe->Text;
		String^ ID = tbID->Text;

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		//mittel die Abfrage(delete) wird von der Tabelle(wifi_users) einen ausgewählte User gelöscht. Das ID ist eindeutig
		//fügt in der Tabelle liste den vorher gelöschte Wert wieder hinzu
		MySqlCommand^ sqlcmd2 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + lis + "')", sqlconn);
		
		
		MySqlCommand^ sqlcmd = gcnew MySqlCommand("DELETE FROM wifi_users WHERE ID=" + ID + "", sqlconn);
		
		//mit folgender Logik erreicht man dass im Combobox(cbListe), die Zahl des gelöschten Users wieder auftaucht.

		sqlcmd2->ExecuteNonQuery();
		sqlcmd->ExecuteNonQuery();

		int l = 'lis';

		if (lis == "1") { sqlcom->CommandText = "truncate table t_1"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "2") { sqlcom->CommandText = "truncate table t_2"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "3") { sqlcom->CommandText = "truncate table t_3"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "4") { sqlcom->CommandText = "truncate table t_4"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "5") { sqlcom->CommandText = "truncate table t_5"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "6") { sqlcom->CommandText = "truncate table t_6"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "7") { sqlcom->CommandText = "truncate table t_7"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "8") { sqlcom->CommandText = "truncate table t_8"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "9") { sqlcom->CommandText = "truncate table t_9"; sqlcom->ExecuteNonQuery(); }
		else if (lis == "10") { sqlcom->CommandText = "truncate table t_10"; sqlcom->ExecuteNonQuery(); }
		
		
		
		MessageBox::Show("User gelöscht!", "{(L-D)-V}", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		sqlconn->Close();
		//Die Abfrage(delete und insert) werden durchgeführt, dann bekommt man eine Bestätigungsmeldung und letztendlich wird die Connection wieder zugemacht.
		wifi_users();
		//man wird den aktualisierte Inhalt der Tabelle im DataGridView und im Combobox gezeigt bekommen.
	
	}
	catch(Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnNeuStart_Click(System::Object^ sender, System::EventArgs^ e) {
	//man will mit der Methode neu start, die Indexierung der Tabelle von 1 an anzufangen
	try {

		MySqlConnection^ sqlconn = gcnew MySqlConnection();
		sqlconn->ConnectionString = "datasource = localhost; port = 3306; username = Login Daten Verwalter; password = wifi123; database = wifi";
		sqlconn->Open();
		//man macht die Connection zum Server und zur Database(wifi) auf.
		MySqlCommand^ sqlcom = gcnew MySqlCommand();
		sqlcom->Connection = sqlconn;
		//man verbindet sich mit der Database

		//mit folgenden Befehle wird der Inhalt der Tabelle (wifi_users, users_liste und liste) der Database wifi, gelöscht
		MySqlCommand^ sqlcmd = gcnew MySqlCommand("truncate table wifi_users", sqlconn);
		MySqlCommand^ sqlcomd = gcnew MySqlCommand("truncate table liste", sqlconn);

		sqlcmd->ExecuteNonQuery();
		sqlcomd->ExecuteNonQuery();
		

		//mit folgenden Befehle werden wieder die vorher gelöschte Zahlen in der Tabelle liste hinzugefügt
		MySqlCommand^ sqlcomand1 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 1 + "')", sqlconn);
		MySqlCommand^ sqlcomand2 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 2 + "')", sqlconn);
		MySqlCommand^ sqlcomand3 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 3 + "')", sqlconn);
		MySqlCommand^ sqlcomand4 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 4 + "')", sqlconn);
		MySqlCommand^ sqlcomand5 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 5 + "')", sqlconn);
		MySqlCommand^ sqlcomand6 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 6 + "')", sqlconn);
		MySqlCommand^ sqlcomand7 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 7 + "')", sqlconn);
		MySqlCommand^ sqlcomand8 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 8 + "')", sqlconn);
		MySqlCommand^ sqlcomand9 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 9 + "')", sqlconn);
		MySqlCommand^ sqlcomand10 = gcnew MySqlCommand("insert into liste(Liste)" + "values('" + 10 + "')", sqlconn);
		sqlcomand1->ExecuteNonQuery(); sqlcomand2->ExecuteNonQuery(); sqlcomand3->ExecuteNonQuery(); sqlcomand4->ExecuteNonQuery(); sqlcomand5->ExecuteNonQuery(); sqlcomand6->ExecuteNonQuery(); sqlcomand7->ExecuteNonQuery(); sqlcomand8->ExecuteNonQuery(); sqlcomand9->ExecuteNonQuery(); sqlcomand10->ExecuteNonQuery();

		MessageBox::Show("Tabelle neu gestartet", "{(L-D)-V}", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		sqlconn->Close();
		//dann bekommt man eine Bestätigungsmeldung dass die Tabelle neugestartet wurden und letztendlich wird die Connection wieder zugemacht.
		wifi_users();
		//man wird den aktualisierte Inhalt der Tabelle im DataGridView und im Combobox gezeigt bekommen.
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
};
}
