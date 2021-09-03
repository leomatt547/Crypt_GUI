#pragma once
#include "VCS.h"
#include <string>
#include "FCS.h"

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
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ clearKunci;
	private: System::Windows::Forms::Button^ OpenFile;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label29;
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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->OpenFile = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->clearKunci = (gcnew System::Windows::Forms::Button());
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->FullVC = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->AutoVC = (gcnew System::Windows::Forms::TabPage());
			this->ExtendVC = (gcnew System::Windows::Forms::TabPage());
			this->PFC = (gcnew System::Windows::Forms::TabPage());
			this->AC = (gcnew System::Windows::Forms::TabPage());
			this->HC = (gcnew System::Windows::Forms::TabPage());
			this->Enigma = (gcnew System::Windows::Forms::TabPage());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabControl1->SuspendLayout();
			this->StandardVC->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->Enkripsi1->SuspendLayout();
			this->Dekripsi1->SuspendLayout();
			this->FullVC->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
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
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Vigenere Cipher Standard";
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->Enkripsi1);
			this->tabControl2->Controls->Add(this->Dekripsi1);
			this->tabControl2->Location = System::Drawing::Point(3, 49);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(906, 587);
			this->tabControl2->TabIndex = 4;
			this->tabControl2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl2_SelectedIndexChanged);
			// 
			// Enkripsi1
			// 
			this->Enkripsi1->Controls->Add(this->label12);
			this->Enkripsi1->Controls->Add(this->label3);
			this->Enkripsi1->Controls->Add(this->save_button);
			this->Enkripsi1->Controls->Add(this->OpenFile);
			this->Enkripsi1->Controls->Add(this->label2);
			this->Enkripsi1->Controls->Add(this->clearKunci);
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(435, 503);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(205, 20);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Cipher Teks jangan kosong!";
			this->label12->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(702, 510);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"File Saved!";
			this->label3->Visible = false;
			// 
			// save_button
			// 
			this->save_button->Enabled = false;
			this->save_button->Location = System::Drawing::Point(795, 503);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(93, 35);
			this->save_button->TabIndex = 15;
			this->save_button->Text = L"Save File";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &MyForm::save_button_Click);
			// 
			// OpenFile
			// 
			this->OpenFile->Location = System::Drawing::Point(12, 408);
			this->OpenFile->Name = L"OpenFile";
			this->OpenFile->Size = System::Drawing::Size(113, 35);
			this->OpenFile->TabIndex = 14;
			this->OpenFile->Text = L"Open File ...";
			this->OpenFile->UseVisualStyleBackColor = true;
			this->OpenFile->Click += gcnew System::EventHandler(this, &MyForm::OpenFile_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"File Upload";
			// 
			// clearKunci
			// 
			this->clearKunci->Location = System::Drawing::Point(315, 327);
			this->clearKunci->Name = L"clearKunci";
			this->clearKunci->Size = System::Drawing::Size(113, 36);
			this->clearKunci->TabIndex = 12;
			this->clearKunci->Text = L"Clear Kunci";
			this->clearKunci->UseVisualStyleBackColor = true;
			this->clearKunci->Click += gcnew System::EventHandler(this, &MyForm::clearKunci_Click);
			// 
			// kosong2
			// 
			this->kosong2->AutoSize = true;
			this->kosong2->ForeColor = System::Drawing::Color::Red;
			this->kosong2->Location = System::Drawing::Point(13, 327);
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
			this->kosong1->Location = System::Drawing::Point(13, 144);
			this->kosong1->Name = L"kosong1";
			this->kosong1->Size = System::Drawing::Size(189, 20);
			this->kosong1->TabIndex = 10;
			this->kosong1->Text = L"Plain Text jangan kosong!";
			this->kosong1->Visible = false;
			// 
			// Reset
			// 
			this->Reset->Location = System::Drawing::Point(338, 144);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(90, 35);
			this->Reset->TabIndex = 9;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(258, 458);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 79);
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
			this->Kunci1a->Location = System::Drawing::Point(8, 208);
			this->Kunci1a->Multiline = true;
			this->Kunci1a->Name = L"Kunci1a";
			this->Kunci1a->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Kunci1a->Size = System::Drawing::Size(420, 112);
			this->Kunci1a->TabIndex = 7;
			// 
			// Kunci_label
			// 
			this->Kunci_label->AutoSize = true;
			this->Kunci_label->Location = System::Drawing::Point(4, 185);
			this->Kunci_label->Name = L"Kunci_label";
			this->Kunci_label->Size = System::Drawing::Size(52, 20);
			this->Kunci_label->TabIndex = 6;
			this->Kunci_label->Text = L"Kunci:";
			// 
			// ChiperText_textbox
			// 
			this->ChiperText_textbox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->ChiperText_textbox->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ChiperText_textbox->Location = System::Drawing::Point(434, 26);
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
			this->ChiperText_label->Location = System::Drawing::Point(430, 3);
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
			this->PlainText_input->Location = System::Drawing::Point(8, 26);
			this->PlainText_input->Multiline = true;
			this->PlainText_input->Name = L"PlainText_input";
			this->PlainText_input->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->PlainText_input->Size = System::Drawing::Size(420, 112);
			this->PlainText_input->TabIndex = 3;
			// 
			// PlainText_label
			// 
			this->PlainText_label->AutoSize = true;
			this->PlainText_label->Location = System::Drawing::Point(4, 3);
			this->PlainText_label->Name = L"PlainText_label";
			this->PlainText_label->Size = System::Drawing::Size(81, 20);
			this->PlainText_label->TabIndex = 2;
			this->PlainText_label->Text = L"Plain Text:";
			// 
			// Dekripsi1
			// 
			this->Dekripsi1->Controls->Add(this->label11);
			this->Dekripsi1->Controls->Add(this->label10);
			this->Dekripsi1->Controls->Add(this->label4);
			this->Dekripsi1->Controls->Add(this->button2);
			this->Dekripsi1->Controls->Add(this->button3);
			this->Dekripsi1->Controls->Add(this->label5);
			this->Dekripsi1->Controls->Add(this->button4);
			this->Dekripsi1->Controls->Add(this->label6);
			this->Dekripsi1->Controls->Add(this->label7);
			this->Dekripsi1->Controls->Add(this->button5);
			this->Dekripsi1->Controls->Add(this->button6);
			this->Dekripsi1->Controls->Add(this->textBox1);
			this->Dekripsi1->Controls->Add(this->label8);
			this->Dekripsi1->Controls->Add(this->textBox2);
			this->Dekripsi1->Controls->Add(this->textBox3);
			this->Dekripsi1->Controls->Add(this->label9);
			this->Dekripsi1->Location = System::Drawing::Point(4, 29);
			this->Dekripsi1->Name = L"Dekripsi1";
			this->Dekripsi1->Padding = System::Windows::Forms::Padding(3);
			this->Dekripsi1->Size = System::Drawing::Size(898, 554);
			this->Dekripsi1->TabIndex = 1;
			this->Dekripsi1->Text = L"Dekripsi";
			this->Dekripsi1->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(6, 506);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(193, 20);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Plain Teks jangan kosong!";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(2, 7);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 20);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Plain Text:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::DarkGreen;
			this->label4->Location = System::Drawing::Point(271, 506);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 30;
			this->label4->Text = L"File Saved!";
			this->label4->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(363, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 35);
			this->button2->TabIndex = 29;
			this->button2->Text = L"Save File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 412);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 35);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Open File ...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(474, 389);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 20);
			this->label5->TabIndex = 27;
			this->label5->Text = L"File Upload";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(776, 331);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 36);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Clear Kunci";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(474, 331);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 20);
			this->label6->TabIndex = 25;
			this->label6->Text = L"Kunci jangan kosong!";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(474, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(201, 20);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Cipher Text jangan kosong!";
			this->label7->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(799, 148);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 35);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(717, 455);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(171, 79);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Dekripsi";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(469, 212);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(420, 112);
			this->textBox1->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(465, 189);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Kunci:";
			// 
			// textBox2
			// 
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(6, 30);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(453, 463);
			this->textBox2->TabIndex = 19;
			// 
			// textBox3
			// 
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(469, 30);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(420, 112);
			this->textBox3->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(465, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Chipper Text:";
			// 
			// FullVC
			// 
			this->FullVC->Controls->Add(this->label13);
			this->FullVC->Controls->Add(this->tabControl3);
			this->FullVC->Location = System::Drawing::Point(154, 4);
			this->FullVC->Name = L"FullVC";
			this->FullVC->Padding = System::Windows::Forms::Padding(3);
			this->FullVC->Size = System::Drawing::Size(987, 635);
			this->FullVC->TabIndex = 1;
			this->FullVC->Text = L"Full Vigenere Cipher";
			this->FullVC->UseVisualStyleBackColor = true;
			this->FullVC->Click += gcnew System::EventHandler(this, &MyForm::FullVC_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(7, 7);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(297, 32);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Full Vigenere Cipher";
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage1);
			this->tabControl3->Controls->Add(this->tabPage2);
			this->tabControl3->Location = System::Drawing::Point(3, 49);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(906, 587);
			this->tabControl3->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(898, 554);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Enkripsi";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(435, 503);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(205, 20);
			this->label14->TabIndex = 33;
			this->label14->Text = L"Cipher Teks jangan kosong!";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::DarkGreen;
			this->label15->Location = System::Drawing::Point(702, 510);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(87, 20);
			this->label15->TabIndex = 16;
			this->label15->Text = L"File Saved!";
			this->label15->Visible = false;
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->Location = System::Drawing::Point(795, 503);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 35);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Save File";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 408);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(113, 35);
			this->button8->TabIndex = 14;
			this->button8->Text = L"Open File ...";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(13, 385);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 20);
			this->label16->TabIndex = 13;
			this->label16->Text = L"File Upload";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(315, 327);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 36);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Clear Kunci";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(13, 327);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(160, 20);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Kunci jangan kosong!";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(13, 144);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(189, 20);
			this->label18->TabIndex = 10;
			this->label18->Text = L"Plain Text jangan kosong!";
			this->label18->Visible = false;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(338, 144);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 35);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Reset";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(258, 458);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(171, 79);
			this->button11->TabIndex = 8;
			this->button11->Text = L"Enkripsi";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox4
			// 
			this->textBox4->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(8, 208);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(420, 112);
			this->textBox4->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 185);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(52, 20);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Kunci:";
			// 
			// textBox5
			// 
			this->textBox5->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(434, 26);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(454, 460);
			this->textBox5->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(430, 3);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(93, 20);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Chiper Text:";
			// 
			// textBox6
			// 
			this->textBox6->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(8, 26);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox6->Size = System::Drawing::Size(420, 112);
			this->textBox6->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(4, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(81, 20);
			this->label21->TabIndex = 2;
			this->label21->Text = L"Plain Text:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->button12);
			this->tabPage2->Controls->Add(this->button13);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->button14);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->button15);
			this->tabPage2->Controls->Add(this->button16);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label29);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(898, 554);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Dekripsi";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Location = System::Drawing::Point(6, 506);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(193, 20);
			this->label22->TabIndex = 32;
			this->label22->Text = L"Plain Teks jangan kosong!";
			this->label22->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(2, 7);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(81, 20);
			this->label23->TabIndex = 31;
			this->label23->Text = L"Plain Text:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::DarkGreen;
			this->label24->Location = System::Drawing::Point(271, 506);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(87, 20);
			this->label24->TabIndex = 30;
			this->label24->Text = L"File Saved!";
			this->label24->Visible = false;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(363, 499);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 35);
			this->button12->TabIndex = 29;
			this->button12->Text = L"Save File";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(473, 412);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(113, 35);
			this->button13->TabIndex = 28;
			this->button13->Text = L"Open File ...";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(474, 389);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(89, 20);
			this->label25->TabIndex = 27;
			this->label25->Text = L"File Upload";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(776, 331);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(113, 36);
			this->button14->TabIndex = 26;
			this->button14->Text = L"Clear Kunci";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::Red;
			this->label26->Location = System::Drawing::Point(474, 331);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(160, 20);
			this->label26->TabIndex = 25;
			this->label26->Text = L"Kunci jangan kosong!";
			this->label26->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(474, 148);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(201, 20);
			this->label27->TabIndex = 24;
			this->label27->Text = L"Cipher Text jangan kosong!";
			this->label27->Visible = false;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(799, 148);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(90, 35);
			this->button15->TabIndex = 23;
			this->button15->Text = L"Reset";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(717, 455);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(171, 79);
			this->button16->TabIndex = 22;
			this->button16->Text = L"Dekripsi";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// textBox7
			// 
			this->textBox7->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(469, 212);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox7->Size = System::Drawing::Size(420, 112);
			this->textBox7->TabIndex = 21;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(465, 189);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(52, 20);
			this->label28->TabIndex = 20;
			this->label28->Text = L"Kunci:";
			// 
			// textBox8
			// 
			this->textBox8->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(6, 30);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox8->Size = System::Drawing::Size(453, 463);
			this->textBox8->TabIndex = 19;
			// 
			// textBox9
			// 
			this->textBox9->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(469, 30);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox9->Size = System::Drawing::Size(420, 112);
			this->textBox9->TabIndex = 18;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(465, 7);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(102, 20);
			this->label29->TabIndex = 17;
			this->label29->Text = L"Chipper Text:";
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
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
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
			this->Dekripsi1->ResumeLayout(false);
			this->Dekripsi1->PerformLayout();
			this->FullVC->ResumeLayout(false);
			this->FullVC->PerformLayout();
			this->tabControl3->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
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
	/*-----------------------------VCS Enkripsi---------------------------------------*/
	private: System::Void clear_label() {
		this->kosong2->Visible = false;
		this->kosong1->Visible = false;
		this->label3->Visible = false;
		this->label12->Visible = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->PlainText_input->Text == "" || this->PlainText_input->Text->Trim() == "") {
			this->kosong1->Visible = true;
		}
		else {
			this->kosong1->Visible = false;
		}
		if (this->Kunci1a->Text == "" || this->Kunci1a->Text->Trim() == "") {
			this->kosong2->Visible = true;
		}
		else {
			this->kosong2->Visible = false;
		}
		if (this->Kunci1a->Text != "" && this->Kunci1a->Text->Trim() != "" &&
			this->PlainText_input->Text != "" && this->PlainText_input->Text->Trim() != ""){
			clear_label();
			VCS vcs1 = VCS();
			vcs1.setKunci(str_std(this->Kunci1a->Text));
			vcs1.setPlain(str_std(this->PlainText_input->Text));
			vcs1.VCS_Enkripsi();
			this->ChiperText_textbox->Text = str_cs(vcs1.getCipher());
			this->save_button->Enabled = true;
		}
	}
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->PlainText_input->Text = "";
	}
	private: System::Void tabControl2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void clearKunci_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Kunci1a->Text = "";
	}
	private: System::Void OpenFile_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK){
			String ^ filePath = this->openFileDialog1->FileName;
			this->PlainText_input->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->ChiperText_textbox->Text == "" || this->ChiperText_textbox->Text->Trim() == "") {
			this->label12->Visible = true;
		}
		else {
			this->label12->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->ChiperText_textbox->Text != "" && this->ChiperText_textbox->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->ChiperText_textbox->Text));
			this->label3->Visible = true;
		}
	}
	/*-----------------------------VCS Dekripsi---------------------------------------*/
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox3->Text == "" || this->textBox3->Text->Trim() == "") {
			this->label7->Visible = true;
		}
		else {
			this->label7->Visible = false;
		}
		if (this->textBox1->Text == "" || this->textBox1->Text->Trim() == "") {
			this->label6->Visible = true;
		}
		else {
			this->label6->Visible = false;
		}
		if (this->textBox3->Text != "" && this->textBox3->Text->Trim() != "" &&
			this->textBox1->Text != "" && this->textBox1->Text->Trim() != "") {
			clear_label1();
			VCS vcsd1 = VCS();
			vcsd1.setKunci(str_std(this->textBox1->Text));
			vcsd1.setCipher(str_std(this->textBox3->Text));
			vcsd1.VCS_Dekripsi();
			this->textBox2->Text = str_cs(vcsd1.getPlain());
			this->button2->Enabled = true;
		}
	}
	private: System::Void clear_label1() {
		this->label7->Visible = false;
		this->label6->Visible = false;
		this->label4->Visible = false;
		this->label11->Visible = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "";
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox3->Text = "";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox2->Text == "" || this->textBox2->Text->Trim() == "") {
			this->label11->Visible = true;
		}
		else {
			this->label11->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK 
			&& this->textBox2->Text != "" && this->textBox2->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox2->Text));
			this->label4->Visible = true;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox3->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	/*-----------------------------FCS Enkripsi-------------------------------------*/
	private: System::Void clear_label3() {
		this->label17->Visible = false;
		this->label18->Visible = false;
		this->label15->Visible = false;
		this->label14->Visible = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox6->Text = "";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox6->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox6->Text == "" || this->textBox6->Text->Trim() == "") {
			this->label18->Visible = true;
		}
		else {
			this->label18->Visible = false;
		}
		if (this->textBox4->Text == "" || this->textBox4->Text->Trim() == "") {
			this->label17->Visible = true;
		}
		else {
			this->label17->Visible = false;
		}
		if (this->textBox4->Text != "" && this->textBox4->Text->Trim() != "" &&
			this->textBox6->Text != "" && this->textBox6->Text->Trim() != "") {
			clear_label3();
			FCS fcs1 = FCS();
			fcs1.setKunci(str_std(this->textBox4->Text));
			fcs1.setPlain(str_std(this->textBox6->Text));
			fcs1.FCS_Enkripsi();
			this->textBox5->Text = str_cs(fcs1.getCipher());
			this->button7->Enabled = true;
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox4->Text = "";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox5->Text == "" || this->textBox5->Text->Trim() == "") {
			this->label14->Visible = true;
		}
		else {
			this->label14->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox5->Text != "" && this->textBox5->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox5->Text));
			this->label15->Visible = true;
		}
	}
	/*-----------------------------FCS Dekripsi--------------------------------------- */
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox9->Text == "" || this->textBox9->Text->Trim() == "") {
			this->label27->Visible = true;
		}
		else {
			this->label27->Visible = false;
		}
		if (this->textBox7->Text == "" || this->textBox7->Text->Trim() == "") {
			this->label26->Visible = true;
		}
		else {
			this->label26->Visible = false;
		}
		if (this->textBox9->Text != "" && this->textBox9->Text->Trim() != "" &&
			this->textBox7->Text != "" && this->textBox7->Text->Trim() != "") {
			clear_label4();
			FCS fcsd1 = FCS();
			fcsd1.setKunci(str_std(this->textBox7->Text));
			fcsd1.setCipher(str_std(this->textBox9->Text));
			fcsd1.FCS_Dekripsi();
			this->textBox8->Text = str_cs(fcsd1.getPlain());
			this->button12->Enabled = true;
		}
	}
	private: System::Void clear_label4() {
		this->label27->Visible = false;
		this->label26->Visible = false;
		this->label24->Visible = false;
		this->label22->Visible = false;
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox7->Text = "";
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox9->Text = "";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox8->Text == "" || this->textBox8->Text->Trim() == "") {
			this->label22->Visible = true;
		}
		else {
			this->label22->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox8->Text != "" && this->textBox8->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox8->Text));
			this->label24->Visible = true;
		}
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox9->Text = str_cs(readFile(str_std(filePath)));
		}
	}
};
}
