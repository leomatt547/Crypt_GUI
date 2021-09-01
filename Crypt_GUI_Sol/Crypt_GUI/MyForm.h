#pragma once
#include "VCS.h"
#include <string>

#include <msclr\marshal_cppstd.h>

namespace CryptGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->tabControl1->DrawItem += gcnew DrawItemEventHandler(this, &MyForm::tabControl1_DrawItem);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ StandardVC;
	private: System::Windows::Forms::TabPage^ FullVC;
	private: System::Windows::Forms::TabPage^ AutoVC;
	private: System::Windows::Forms::TabPage^ ExtendVC;
	private: System::Windows::Forms::TabPage^ PFC;
	private: System::Windows::Forms::TabPage^ AC;
	private: System::Windows::Forms::TabPage^ HC;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ Enkripsi1;
	private: System::Windows::Forms::TextBox^ ChiperText_textbox;
	private: System::Windows::Forms::Label^ ChiperText_label;
	private: System::Windows::Forms::TextBox^ PlainText_input;
	private: System::Windows::Forms::Label^ PlainText_label;
	private: System::Windows::Forms::TabPage^ Dekripsi1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Kunci1a;
	private: System::Windows::Forms::Label^ Kunci_label;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::Label^ kosong2;
	private: System::Windows::Forms::Label^ kosong1;
	private: System::Windows::Forms::TabPage^ Enigma;
	private: void tabControl1_DrawItem(Object^ sender, DrawItemEventArgs^ e)
	{
		Graphics^ g = e->Graphics;
		Brush^ _textBrush;

		// Get the item from the collection.
		TabPage^ _tabPage = tabControl1->TabPages[e->Index];

		// Get the real bounds for the tab rectangle.
		Drawing::Rectangle _tabBounds = tabControl1->GetTabRect(e->Index);

		if (e->State == DrawItemState::Selected)
		{

			// Draw a different background color, and don't paint a focus rectangle.
			_textBrush = gcnew SolidBrush(Color::Yellow);
			g->FillRectangle(Brushes::Gray, e->Bounds);
		}
		else
		{
			_textBrush = gcnew System::Drawing::SolidBrush(e->ForeColor);
			e->DrawBackground();
		}

		// Use our own font.
		//Font^ _tabFont;
		//_tabFont = new Font("Arial", 10.0f, FontStyle::Bold, GraphicsUnit::Pixel);

		// Draw string. Center the text.
		StringFormat^ _stringFlags = gcnew StringFormat();
		_stringFlags->Alignment = StringAlignment::Center;
		_stringFlags->LineAlignment = StringAlignment::Center;
		g->DrawString(_tabPage->Text, DefaultFont, _textBrush, _tabBounds, gcnew StringFormat(_stringFlags));
	 }
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->StandardVC = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->Enkripsi1 = (gcnew System::Windows::Forms::TabPage());
			this->kosong2 = (gcnew System::Windows::Forms::Label());
			this->kosong1 = (gcnew System::Windows::Forms::Label());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Kunci1a = (gcnew System::Windows::Forms::TextBox());
			this->Kunci_label = (gcnew System::Windows::Forms::Label());
			this->ChiperText_textbox = (gcnew System::Windows::Forms::TextBox());
			this->ChiperText_label = (gcnew System::Windows::Forms::Label());
			this->PlainText_input = (gcnew System::Windows::Forms::TextBox());
			this->PlainText_label = (gcnew System::Windows::Forms::Label());
			this->Dekripsi1 = (gcnew System::Windows::Forms::TabPage());
			this->FullVC = (gcnew System::Windows::Forms::TabPage());
			this->AutoVC = (gcnew System::Windows::Forms::TabPage());
			this->ExtendVC = (gcnew System::Windows::Forms::TabPage());
			this->PFC = (gcnew System::Windows::Forms::TabPage());
			this->AC = (gcnew System::Windows::Forms::TabPage());
			this->HC = (gcnew System::Windows::Forms::TabPage());
			this->Enigma = (gcnew System::Windows::Forms::TabPage());
			this->tabControl1->SuspendLayout();
			this->StandardVC->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->Enkripsi1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Left;
			this->tabControl1->Controls->Add(this->StandardVC);
			this->tabControl1->Controls->Add(this->FullVC);
			this->tabControl1->Controls->Add(this->AutoVC);
			this->tabControl1->Controls->Add(this->ExtendVC);
			this->tabControl1->Controls->Add(this->PFC);
			this->tabControl1->Controls->Add(this->AC);
			this->tabControl1->Controls->Add(this->HC);
			this->tabControl1->Controls->Add(this->Enigma);
			this->tabControl1->DrawMode = System::Windows::Forms::TabDrawMode::OwnerDrawFixed;
			this->tabControl1->ItemSize = System::Drawing::Size(25, 150);
			this->tabControl1->Location = System::Drawing::Point(-1, 3);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1145, 643);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// StandardVC
			// 
			this->StandardVC->Controls->Add(this->label1);
			this->StandardVC->Controls->Add(this->tabControl2);
			this->StandardVC->Location = System::Drawing::Point(154, 4);
			this->StandardVC->Name = L"StandardVC";
			this->StandardVC->Size = System::Drawing::Size(987, 635);
			this->StandardVC->TabIndex = 2;
			this->StandardVC->Text = L"Standard Vigenere Cipher";
			this->StandardVC->UseVisualStyleBackColor = true;
			this->StandardVC->Click += gcnew System::EventHandler(this, &MyForm::StandardVC_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Vigenere Cipher Standard";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->Enkripsi1);
			this->tabControl2->Controls->Add(this->Dekripsi1);
			this->tabControl2->Location = System::Drawing::Point(3, 47);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(906, 587);
			this->tabControl2->TabIndex = 4;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl2_SelectedIndexChanged);
			// 
			// Enkripsi1
			// 
			this->Enkripsi1->Controls->Add(this->kosong2);
			this->Enkripsi1->Controls->Add(this->kosong1);
			this->Enkripsi1->Controls->Add(this->Reset);
			this->Enkripsi1->Controls->Add(this->button1);
			this->Enkripsi1->Controls->Add(this->Kunci1a);
			this->Enkripsi1->Controls->Add(this->Kunci_label);
			this->Enkripsi1->Controls->Add(this->ChiperText_textbox);
			this->Enkripsi1->Controls->Add(this->ChiperText_label);
			this->Enkripsi1->Controls->Add(this->PlainText_input);
			this->Enkripsi1->Controls->Add(this->PlainText_label);
			this->Enkripsi1->Location = System::Drawing::Point(4, 29);
			this->Enkripsi1->Name = L"Enkripsi1";
			this->Enkripsi1->Padding = System::Windows::Forms::Padding(3);
			this->Enkripsi1->Size = System::Drawing::Size(898, 554);
			this->Enkripsi1->TabIndex = 0;
			this->Enkripsi1->Text = L"Enkripsi";
			this->Enkripsi1->UseVisualStyleBackColor = true;
			// 
			// kosong2
			// 
			this->kosong2->AutoSize = true;
			this->kosong2->ForeColor = System::Drawing::Color::Red;
			this->kosong2->Location = System::Drawing::Point(15, 327);
			this->kosong2->Name = L"kosong2";
			this->kosong2->Size = System::Drawing::Size(160, 20);
			this->kosong2->TabIndex = 11;
			this->kosong2->Text = L"Kunci jangan kosong!";
			this->kosong2->Visible = false;
			// 
			// kosong1
			// 
			this->kosong1->AutoSize = true;
			this->kosong1->ForeColor = System::Drawing::Color::Red;
			this->kosong1->Location = System::Drawing::Point(15, 144);
			this->kosong1->Name = L"kosong1";
			this->kosong1->Size = System::Drawing::Size(189, 20);
			this->kosong1->TabIndex = 10;
			this->kosong1->Text = L"Plain Text jangan kosong!";
			this->kosong1->Visible = false;
			// 
			// Reset
			// 
			this->Reset->Location = System::Drawing::Point(340, 144);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(90, 30);
			this->Reset->TabIndex = 9;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(779, 503);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 35);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Enkripsi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Kunci1a
			// 
			this->Kunci1a->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->Kunci1a->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Kunci1a->Location = System::Drawing::Point(10, 208);
			this->Kunci1a->Multiline = true;
			this->Kunci1a->Name = L"Kunci1a";
			this->Kunci1a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Kunci1a->Size = System::Drawing::Size(420, 112);
			this->Kunci1a->TabIndex = 7;
			// 
			// Kunci_label
			// 
			this->Kunci_label->AutoSize = true;
			this->Kunci_label->Location = System::Drawing::Point(6, 185);
			this->Kunci_label->Name = L"Kunci_label";
			this->Kunci_label->Size = System::Drawing::Size(52, 20);
			this->Kunci_label->TabIndex = 6;
			this->Kunci_label->Text = L"Kunci:";
			// 
			// ChiperText_textbox
			// 
			this->ChiperText_textbox->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChiperText_textbox->Location = System::Drawing::Point(436, 26);
			this->ChiperText_textbox->Multiline = true;
			this->ChiperText_textbox->Name = L"ChiperText_textbox";
			this->ChiperText_textbox->ReadOnly = true;
			this->ChiperText_textbox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ChiperText_textbox->Size = System::Drawing::Size(454, 460);
			this->ChiperText_textbox->TabIndex = 5;
			// 
			// ChiperText_label
			// 
			this->ChiperText_label->AutoSize = true;
			this->ChiperText_label->Location = System::Drawing::Point(432, 3);
			this->ChiperText_label->Name = L"ChiperText_label";
			this->ChiperText_label->Size = System::Drawing::Size(93, 20);
			this->ChiperText_label->TabIndex = 4;
			this->ChiperText_label->Text = L"Chiper Text:";
			// 
			// PlainText_input
			// 
			this->PlainText_input->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->PlainText_input->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlainText_input->Location = System::Drawing::Point(10, 26);
			this->PlainText_input->Multiline = true;
			this->PlainText_input->Name = L"PlainText_input";
			this->PlainText_input->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->PlainText_input->Size = System::Drawing::Size(420, 112);
			this->PlainText_input->TabIndex = 3;
			// 
			// PlainText_label
			// 
			this->PlainText_label->AutoSize = true;
			this->PlainText_label->Location = System::Drawing::Point(6, 3);
			this->PlainText_label->Name = L"PlainText_label";
			this->PlainText_label->Size = System::Drawing::Size(81, 20);
			this->PlainText_label->TabIndex = 2;
			this->PlainText_label->Text = L"Plain Text:";
			// 
			// Dekripsi1
			// 
			this->Dekripsi1->Location = System::Drawing::Point(4, 29);
			this->Dekripsi1->Name = L"Dekripsi1";
			this->Dekripsi1->Padding = System::Windows::Forms::Padding(3);
			this->Dekripsi1->Size = System::Drawing::Size(898, 554);
			this->Dekripsi1->TabIndex = 1;
			this->Dekripsi1->Text = L"Dekripsi";
			this->Dekripsi1->UseVisualStyleBackColor = true;
			// 
			// FullVC
			// 
			this->FullVC->Location = System::Drawing::Point(154, 4);
			this->FullVC->Name = L"FullVC";
			this->FullVC->Padding = System::Windows::Forms::Padding(3);
			this->FullVC->Size = System::Drawing::Size(987, 635);
			this->FullVC->TabIndex = 1;
			this->FullVC->Text = L"Full Vigenere Cipher";
			this->FullVC->UseVisualStyleBackColor = true;
			this->FullVC->Click += gcnew System::EventHandler(this, &MyForm::FullVC_Click);
			// 
			// AutoVC
			// 
			this->AutoVC->Location = System::Drawing::Point(154, 4);
			this->AutoVC->Name = L"AutoVC";
			this->AutoVC->Padding = System::Windows::Forms::Padding(3);
			this->AutoVC->Size = System::Drawing::Size(987, 635);
			this->AutoVC->TabIndex = 0;
			this->AutoVC->Text = L"Auto-key Vigenere Cipher";
			this->AutoVC->UseVisualStyleBackColor = true;
			// 
			// ExtendVC
			// 
			this->ExtendVC->Location = System::Drawing::Point(154, 4);
			this->ExtendVC->Name = L"ExtendVC";
			this->ExtendVC->Size = System::Drawing::Size(987, 635);
			this->ExtendVC->TabIndex = 3;
			this->ExtendVC->Text = L"Extended Vigenere Cipher ";
			this->ExtendVC->UseVisualStyleBackColor = true;
			// 
			// PFC
			// 
			this->PFC->Location = System::Drawing::Point(154, 4);
			this->PFC->Name = L"PFC";
			this->PFC->Size = System::Drawing::Size(987, 635);
			this->PFC->TabIndex = 4;
			this->PFC->Text = L"Playfair Cipher";
			this->PFC->UseVisualStyleBackColor = true;
			// 
			// AC
			// 
			this->AC->Location = System::Drawing::Point(154, 4);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(987, 635);
			this->AC->TabIndex = 5;
			this->AC->Text = L"Affine Cipher";
			this->AC->UseVisualStyleBackColor = true;
			// 
			// HC
			// 
			this->HC->Location = System::Drawing::Point(154, 4);
			this->HC->Name = L"HC";
			this->HC->Size = System::Drawing::Size(987, 635);
			this->HC->TabIndex = 6;
			this->HC->Text = L"Hill Chipher";
			this->HC->UseVisualStyleBackColor = true;
			// 
			// Enigma
			// 
			this->Enigma->Location = System::Drawing::Point(154, 4);
			this->Enigma->Name = L"Enigma";
			this->Enigma->Size = System::Drawing::Size(987, 635);
			this->Enigma->TabIndex = 7;
			this->Enigma->Text = L"Enigma Chiper";
			this->Enigma->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 646);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->StandardVC->ResumeLayout(false);
			this->StandardVC->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->Enkripsi1->ResumeLayout(false);
			this->Enkripsi1->PerformLayout();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void StandardVC_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FullVC_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	//Alat untuk convert String C# ke string C++
	private: System::String ^ str_cs(std::string target) {
		return gcnew String(target.c_str());
	}
	//Alat untuk convert String C# ke string C++
	private: std::string str_std(String^ managedString) {
		msclr::interop::marshal_context context;
		return context.marshal_as<std::string>(managedString);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Kunci1a->Text == "" && this->Kunci1a->Text->Trim() == "") {
			this->kosong2->Visible = true;
		}
		else {
			this->kosong2->Visible = false;
		}
		if (this->PlainText_input->Text == "" || this->PlainText_input->Text->Trim() == "") {
			this->kosong1->Visible = true;
		}
		else {
			this->kosong1->Visible = false;
		}
		if (this->Kunci1a->Text != "" && this->Kunci1a->Text->Trim() != "" &&
			this->PlainText_input->Text != "" && this->PlainText_input->Text->Trim() != ""){
			this->kosong1->Visible = false;
			this->kosong2->Visible = false;
			VCS *vcs1 = new VCS();
			vcs1->setKunci(str_std(this->Kunci1a->Text));
			vcs1->setPlain(str_std(this->PlainText_input->Text));
			//vcs1.generateKunci();
			vcs1->VCS_Enkripsi();
			this->ChiperText_textbox->Text = this->str_cs(vcs1->getCipher());
		}
	}
		
		//this->ChiperText_textbox->Text = strcs(objToStr((charToInt('a'))));
		//this->ChiperText_textbox->Text = this->PlainText_input->Text;
			//to_string(charToInt('a'));
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PlainText_input->Text = "";
	}
private: System::Void tabControl2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
