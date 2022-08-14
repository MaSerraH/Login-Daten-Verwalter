#pragma once

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für HauptFensterForm
	/// </summary>
	public ref class HauptFensterForm : public System::Windows::Forms::Form
	{
	public:
		HauptFensterForm(void)
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
			this->linkAdminLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnEscape = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// linkAdminLogin
			// 
			this->linkAdminLogin->AutoSize = true;
			this->linkAdminLogin->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkAdminLogin->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkAdminLogin->Location = System::Drawing::Point(48, 85);
			this->linkAdminLogin->Name = L"linkAdminLogin";
			this->linkAdminLogin->Size = System::Drawing::Size(153, 26);
			this->linkAdminLogin->TabIndex = 0;
			this->linkAdminLogin->TabStop = true;
			this->linkAdminLogin->Text = L"Admin-Login";
			this->linkAdminLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HauptFensterForm::linkAdminLogin_LinkClicked);
			// 
			// btnEscape
			// 
			this->btnEscape->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEscape->Location = System::Drawing::Point(121, 243);
			this->btnEscape->Name = L"btnEscape";
			this->btnEscape->Size = System::Drawing::Size(101, 48);
			this->btnEscape->TabIndex = 1;
			this->btnEscape->Text = L"Escape";
			this->btnEscape->UseVisualStyleBackColor = true;
			this->btnEscape->Click += gcnew System::EventHandler(this, &HauptFensterForm::btnEscape_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(69, 193);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(156, 33);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"User-Login";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &HauptFensterForm::linkLabel1_LinkClicked);
			// 
			// HauptFensterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(416, 343);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btnEscape);
			this->Controls->Add(this->linkAdminLogin);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"HauptFensterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Haupt Fenster";
			this->ResumeLayout(false);
			this->PerformLayout();

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
			}
		}
		catch (Exception^ e)
		{
			MessageBox::Show(e->Message, "{(L-D)-V}", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	public: bool To_Admin_Login = false;
		  /*ermöglicht das GUI zu wechseln*/
	private: System::Void linkAdminLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Admin_Login = true;
		/*ermöglicht das GUI zu wechseln, einmal gewechselt soll den Fenster zugemacht werden*/
		this ->Close();

	}
	public: bool To_Users_Login = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->To_Users_Login = true;
		this->Close();
	}
};
}
