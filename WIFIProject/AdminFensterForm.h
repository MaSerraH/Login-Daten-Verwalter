#pragma once

namespace WIFIProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für AdminFensterForm
	/// </summary>
	public ref class AdminFensterForm : public System::Windows::Forms::Form
	{
	public:
		AdminFensterForm(void)
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
		~AdminFensterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ linkHauptFenster;
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
			this->SuspendLayout();
			// 
			// linkHauptFenster
			// 
			this->linkHauptFenster->AutoSize = true;
			this->linkHauptFenster->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkHauptFenster->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->linkHauptFenster->Location = System::Drawing::Point(523, 561);
			this->linkHauptFenster->Name = L"linkHauptFenster";
			this->linkHauptFenster->Size = System::Drawing::Size(95, 24);
			this->linkHauptFenster->TabIndex = 0;
			this->linkHauptFenster->TabStop = true;
			this->linkHauptFenster->Text = L"zum H_F";
			this->linkHauptFenster->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminFensterForm::linkHauptFenster_LinkClicked);
			// 
			// AdminFensterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 641);
			this->Controls->Add(this->linkHauptFenster);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"AdminFensterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminFensterForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//damit wird man zum HauptFenster geleitet
	public: bool To_Haupt_Fenster = false;
	private: System::Void linkHauptFenster_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		//damit wird man zum HauptFenster geleitet
		this->To_Haupt_Fenster = true;
		this->Close();
	}
	};
}
