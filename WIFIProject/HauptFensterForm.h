#pragma once

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung f�r HauptFensterForm
	/// </summary>
	public ref class HauptFensterForm : public System::Windows::Forms::Form
	{
	public:
		HauptFensterForm(void)
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
		~HauptFensterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkAdminLogin;
	protected:

	private: System::Windows::Forms::Button^ btnEscape;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Panel^ panel1;
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
			this->linkAdminLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnEscape = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// linkAdminLogin
			// 
			this->linkAdminLogin->AutoSize = true;
			this->linkAdminLogin->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkAdminLogin->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkAdminLogin->Location = System::Drawing::Point(21, 32);
			this->linkAdminLogin->Name = L"linkAdminLogin";
			this->linkAdminLogin->Size = System::Drawing::Size(153, 26);
			this->linkAdminLogin->TabIndex = 0;
			this->linkAdminLogin->TabStop = true;
			this->linkAdminLogin->Text = L"Admin-Login";
			this->linkAdminLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HauptFensterForm::linkAdminLogin_LinkClicked);
			// 
			// btnEscape
			// 
			this->btnEscape->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnEscape->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEscape->Location = System::Drawing::Point(72, 230);
			this->btnEscape->Name = L"btnEscape";
			this->btnEscape->Size = System::Drawing::Size(101, 48);
			this->btnEscape->TabIndex = 1;
			this->btnEscape->Text = L"Escape";
			this->btnEscape->UseVisualStyleBackColor = false;
			this->btnEscape->Click += gcnew System::EventHandler(this, &HauptFensterForm::btnEscape_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(21, 92);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(134, 26);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"User-Login";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HauptFensterForm::linkLabel1_LinkClicked);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Azure;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->linkAdminLogin);
			this->panel1->Location = System::Drawing::Point(31, 53);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(186, 152);
			this->panel1->TabIndex = 3;
			// 
			// HauptFensterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(272, 310);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btnEscape);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"HauptFensterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Haupt Fenster";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnEscape_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult Escape;
		/*dient dazu den {(L-D)-V} zu beenden*/
		//this->Close();
		try{
			Escape = MessageBox::Show("Escape vom {(L-D)-V}:", "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (Escape == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
				//wenn man den Escape button get�tig hat, die Application wird zugemacht
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	public: bool To_Admin_Login = false;
		  /*erm�glicht das GUI zu wechseln*/
	private: System::Void linkAdminLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Admin_Login = true;
		/*erm�glicht das GUI zu wechseln, einmal gewechselt soll den Fenster zugemacht werden*/
		this ->Close();

	}
		   //wenn man sich als User einloggen m�chte...
	public: bool To_Users_Login = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Users_Login = true;
		this->Close();
	}
};
}
