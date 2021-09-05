#pragma once
#include "VCS.h"
#include <string>
#include "FVC.h"
#include "AVC.h"
#include "EVC.h"
#include "PFCip.h"
#include "AFC.h"
#include "HCip.h"
#include "eCip.h"

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
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::TabControl^ tabControl5;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label63;
private: System::Windows::Forms::Label^ label64;
private: System::Windows::Forms::TabControl^ tabControl6;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::Label^ label65;
private: System::Windows::Forms::Label^ label66;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Label^ label67;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Label^ label68;
private: System::Windows::Forms::Label^ label69;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label70;
private: System::Windows::Forms::TextBox^ textBox23;
private: System::Windows::Forms::Label^ label71;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label72;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::Label^ label73;
private: System::Windows::Forms::Label^ label74;
private: System::Windows::Forms::Label^ label75;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Label^ label76;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Label^ label77;
private: System::Windows::Forms::Label^ label78;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::TextBox^ textBox25;
private: System::Windows::Forms::Label^ label79;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::Label^ label80;
private: System::Windows::Forms::Label^ label81;
private: System::Windows::Forms::TabControl^ tabControl7;
private: System::Windows::Forms::TabPage^ tabPage9;
private: System::Windows::Forms::Label^ label82;
private: System::Windows::Forms::Label^ label83;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Label^ label84;
private: System::Windows::Forms::Label^ label85;
private: System::Windows::Forms::Label^ label86;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Label^ label87;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::Label^ label88;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::Label^ label89;
private: System::Windows::Forms::TabPage^ tabPage10;
private: System::Windows::Forms::Label^ label90;
private: System::Windows::Forms::Label^ label91;
private: System::Windows::Forms::Label^ label92;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Label^ label93;
private: System::Windows::Forms::Label^ label94;
private: System::Windows::Forms::Label^ label95;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::Label^ label97;
private: System::Windows::Forms::Label^ label98;
private: System::Windows::Forms::TabControl^ tabControl8;
private: System::Windows::Forms::TabPage^ tabPage11;
private: System::Windows::Forms::Label^ label99;
private: System::Windows::Forms::Label^ label100;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Label^ label101;


private: System::Windows::Forms::Label^ label103;
private: System::Windows::Forms::Button^ button60;
private: System::Windows::Forms::Button^ button61;


private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::Label^ label105;
private: System::Windows::Forms::TextBox^ textBox36;
private: System::Windows::Forms::Label^ label106;
private: System::Windows::Forms::TabPage^ tabPage12;
private: System::Windows::Forms::Label^ label107;
private: System::Windows::Forms::Label^ label108;
private: System::Windows::Forms::Label^ label109;
private: System::Windows::Forms::Button^ button62;
private: System::Windows::Forms::Button^ button63;
private: System::Windows::Forms::Label^ label110;


private: System::Windows::Forms::Label^ label112;
private: System::Windows::Forms::Button^ button65;
private: System::Windows::Forms::Button^ button66;


private: System::Windows::Forms::TextBox^ textBox38;
private: System::Windows::Forms::TextBox^ textBox39;
private: System::Windows::Forms::Label^ label114;
private: System::Windows::Forms::Label^ label115;
private: System::Windows::Forms::TabControl^ tabControl9;
private: System::Windows::Forms::TabPage^ tabPage13;
private: System::Windows::Forms::Label^ label116;
private: System::Windows::Forms::Label^ label117;
private: System::Windows::Forms::Button^ button67;
private: System::Windows::Forms::Button^ button68;
private: System::Windows::Forms::Label^ label118;


private: System::Windows::Forms::Label^ label120;
private: System::Windows::Forms::Button^ button70;
private: System::Windows::Forms::Button^ button71;


private: System::Windows::Forms::TextBox^ textBox41;
private: System::Windows::Forms::Label^ label122;
private: System::Windows::Forms::TextBox^ textBox42;
private: System::Windows::Forms::Label^ label123;
private: System::Windows::Forms::TabPage^ tabPage14;
private: System::Windows::Forms::Label^ label124;
private: System::Windows::Forms::Label^ label125;
private: System::Windows::Forms::Label^ label126;
private: System::Windows::Forms::Button^ button72;
private: System::Windows::Forms::Button^ button73;
private: System::Windows::Forms::Label^ label127;


private: System::Windows::Forms::Label^ label129;
private: System::Windows::Forms::Button^ button75;
private: System::Windows::Forms::Button^ button76;


private: System::Windows::Forms::TextBox^ textBox44;
private: System::Windows::Forms::TextBox^ textBox45;
private: System::Windows::Forms::Label^ label131;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label133;
private: System::Windows::Forms::Label^ label132;
private: System::Windows::Forms::ComboBox^ comboBox3;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Label^ label134;
private: System::Windows::Forms::Label^ label135;
private: System::Windows::Forms::Label^ label136;
private: System::Windows::Forms::Label^ label96;
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
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->ExtendVC = (gcnew System::Windows::Forms::TabPage());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->PFC = (gcnew System::Windows::Forms::TabPage());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->AC = (gcnew System::Windows::Forms::TabPage());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->tabControl7 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->HC = (gcnew System::Windows::Forms::TabPage());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->tabControl8 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->Enigma = (gcnew System::Windows::Forms::TabPage());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->tabControl9 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->button68 = (gcnew System::Windows::Forms::Button());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button73 = (gcnew System::Windows::Forms::Button());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->button75 = (gcnew System::Windows::Forms::Button());
			this->button76 = (gcnew System::Windows::Forms::Button());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->StandardVC->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->Enkripsi1->SuspendLayout();
			this->Dekripsi1->SuspendLayout();
			this->FullVC->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->AutoVC->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->ExtendVC->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->PFC->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->AC->SuspendLayout();
			this->tabControl7->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->HC->SuspendLayout();
			this->tabControl8->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->Enigma->SuspendLayout();
			this->tabControl9->SuspendLayout();
			this->tabPage13->SuspendLayout();
			this->tabPage14->SuspendLayout();
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
			this->ChiperText_label->Text = L"Cipher Text:";
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
			this->label9->Size = System::Drawing::Size(93, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Cipher Text:";
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
			this->label13->Location = System::Drawing::Point(8, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(297, 32);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Full Vigenere Cipher";
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage1);
			this->tabControl3->Controls->Add(this->tabPage2);
			this->tabControl3->Location = System::Drawing::Point(4, 50);
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
			this->label29->Size = System::Drawing::Size(93, 20);
			this->label29->TabIndex = 17;
			this->label29->Text = L"Cipher Text:";
			// 
			// AutoVC
			// 
			this->AutoVC->Controls->Add(this->label30);
			this->AutoVC->Controls->Add(this->tabControl4);
			this->AutoVC->Location = System::Drawing::Point(154, 4);
			this->AutoVC->Name = L"AutoVC";
			this->AutoVC->Padding = System::Windows::Forms::Padding(3);
			this->AutoVC->Size = System::Drawing::Size(987, 635);
			this->AutoVC->TabIndex = 0;
			this->AutoVC->Text = L"Auto-key Vigenere Cipher";
			this->AutoVC->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(8, 8);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(368, 32);
			this->label30->TabIndex = 9;
			this->label30->Text = L"Auto-key Vigenere Cipher";
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage3);
			this->tabControl4->Controls->Add(this->tabPage4);
			this->tabControl4->Location = System::Drawing::Point(4, 50);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(906, 587);
			this->tabControl4->TabIndex = 8;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label31);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->button17);
			this->tabPage3->Controls->Add(this->button18);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->button19);
			this->tabPage3->Controls->Add(this->label34);
			this->tabPage3->Controls->Add(this->label35);
			this->tabPage3->Controls->Add(this->button20);
			this->tabPage3->Controls->Add(this->button21);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label36);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label37);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label38);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(898, 554);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Enkripsi";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label31->Location = System::Drawing::Point(435, 503);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(205, 20);
			this->label31->TabIndex = 33;
			this->label31->Text = L"Cipher Teks jangan kosong!";
			this->label31->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->ForeColor = System::Drawing::Color::DarkGreen;
			this->label32->Location = System::Drawing::Point(702, 510);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(87, 20);
			this->label32->TabIndex = 16;
			this->label32->Text = L"File Saved!";
			this->label32->Visible = false;
			// 
			// button17
			// 
			this->button17->Enabled = false;
			this->button17->Location = System::Drawing::Point(795, 503);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 35);
			this->button17->TabIndex = 15;
			this->button17->Text = L"Save File";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(12, 408);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(113, 35);
			this->button18->TabIndex = 14;
			this->button18->Text = L"Open File ...";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(13, 385);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(89, 20);
			this->label33->TabIndex = 13;
			this->label33->Text = L"File Upload";
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(315, 327);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(113, 36);
			this->button19->TabIndex = 12;
			this->button19->Text = L"Clear Kunci";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->ForeColor = System::Drawing::Color::Red;
			this->label34->Location = System::Drawing::Point(13, 327);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(160, 20);
			this->label34->TabIndex = 11;
			this->label34->Text = L"Kunci jangan kosong!";
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->ForeColor = System::Drawing::Color::Red;
			this->label35->Location = System::Drawing::Point(13, 144);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(189, 20);
			this->label35->TabIndex = 10;
			this->label35->Text = L"Plain Text jangan kosong!";
			this->label35->Visible = false;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(338, 144);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(90, 35);
			this->button20->TabIndex = 9;
			this->button20->Text = L"Reset";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(258, 458);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(171, 79);
			this->button21->TabIndex = 8;
			this->button21->Text = L"Enkripsi";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// textBox10
			// 
			this->textBox10->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(8, 208);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox10->Size = System::Drawing::Size(420, 112);
			this->textBox10->TabIndex = 7;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(4, 185);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(52, 20);
			this->label36->TabIndex = 6;
			this->label36->Text = L"Kunci:";
			// 
			// textBox11
			// 
			this->textBox11->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(434, 26);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox11->Size = System::Drawing::Size(454, 460);
			this->textBox11->TabIndex = 5;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(430, 3);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(93, 20);
			this->label37->TabIndex = 4;
			this->label37->Text = L"Cipher Text:";
			// 
			// textBox12
			// 
			this->textBox12->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(8, 26);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox12->Size = System::Drawing::Size(420, 112);
			this->textBox12->TabIndex = 3;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(4, 3);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(81, 20);
			this->label38->TabIndex = 2;
			this->label38->Text = L"Plain Text:";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label39);
			this->tabPage4->Controls->Add(this->label40);
			this->tabPage4->Controls->Add(this->label41);
			this->tabPage4->Controls->Add(this->button22);
			this->tabPage4->Controls->Add(this->button23);
			this->tabPage4->Controls->Add(this->label42);
			this->tabPage4->Controls->Add(this->button24);
			this->tabPage4->Controls->Add(this->label43);
			this->tabPage4->Controls->Add(this->label44);
			this->tabPage4->Controls->Add(this->button25);
			this->tabPage4->Controls->Add(this->button26);
			this->tabPage4->Controls->Add(this->textBox13);
			this->tabPage4->Controls->Add(this->label45);
			this->tabPage4->Controls->Add(this->textBox14);
			this->tabPage4->Controls->Add(this->textBox15);
			this->tabPage4->Controls->Add(this->label46);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(898, 554);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Dekripsi";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->ForeColor = System::Drawing::Color::Red;
			this->label39->Location = System::Drawing::Point(6, 506);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(193, 20);
			this->label39->TabIndex = 32;
			this->label39->Text = L"Plain Teks jangan kosong!";
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(2, 7);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(81, 20);
			this->label40->TabIndex = 31;
			this->label40->Text = L"Plain Text:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->ForeColor = System::Drawing::Color::DarkGreen;
			this->label41->Location = System::Drawing::Point(271, 506);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(87, 20);
			this->label41->TabIndex = 30;
			this->label41->Text = L"File Saved!";
			this->label41->Visible = false;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(363, 499);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 35);
			this->button22->TabIndex = 29;
			this->button22->Text = L"Save File";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(473, 412);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(113, 35);
			this->button23->TabIndex = 28;
			this->button23->Text = L"Open File ...";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(474, 389);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(89, 20);
			this->label42->TabIndex = 27;
			this->label42->Text = L"File Upload";
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(776, 331);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(113, 36);
			this->button24->TabIndex = 26;
			this->button24->Text = L"Clear Kunci";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->ForeColor = System::Drawing::Color::Red;
			this->label43->Location = System::Drawing::Point(474, 331);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(160, 20);
			this->label43->TabIndex = 25;
			this->label43->Text = L"Kunci jangan kosong!";
			this->label43->Visible = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->ForeColor = System::Drawing::Color::Red;
			this->label44->Location = System::Drawing::Point(474, 148);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(201, 20);
			this->label44->TabIndex = 24;
			this->label44->Text = L"Cipher Text jangan kosong!";
			this->label44->Visible = false;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(799, 148);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(90, 35);
			this->button25->TabIndex = 23;
			this->button25->Text = L"Reset";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(717, 455);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(171, 79);
			this->button26->TabIndex = 22;
			this->button26->Text = L"Dekripsi";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// textBox13
			// 
			this->textBox13->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(469, 212);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox13->Size = System::Drawing::Size(420, 112);
			this->textBox13->TabIndex = 21;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(465, 189);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(52, 20);
			this->label45->TabIndex = 20;
			this->label45->Text = L"Kunci:";
			// 
			// textBox14
			// 
			this->textBox14->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(6, 30);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox14->Size = System::Drawing::Size(453, 463);
			this->textBox14->TabIndex = 19;
			// 
			// textBox15
			// 
			this->textBox15->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(469, 30);
			this->textBox15->Multiline = true;
			this->textBox15->Name = L"textBox15";
			this->textBox15->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox15->Size = System::Drawing::Size(420, 112);
			this->textBox15->TabIndex = 18;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(465, 7);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(93, 20);
			this->label46->TabIndex = 17;
			this->label46->Text = L"Cipher Text:";
			// 
			// ExtendVC
			// 
			this->ExtendVC->Controls->Add(this->label47);
			this->ExtendVC->Controls->Add(this->tabControl5);
			this->ExtendVC->Location = System::Drawing::Point(154, 4);
			this->ExtendVC->Name = L"ExtendVC";
			this->ExtendVC->Size = System::Drawing::Size(987, 635);
			this->ExtendVC->TabIndex = 3;
			this->ExtendVC->Text = L"Extended Vigenere Cipher ";
			this->ExtendVC->UseVisualStyleBackColor = true;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(8, 8);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(378, 32);
			this->label47->TabIndex = 11;
			this->label47->Text = L"Extended Vigenere Cipher";
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage5);
			this->tabControl5->Controls->Add(this->tabPage6);
			this->tabControl5->Location = System::Drawing::Point(8, 50);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(906, 587);
			this->tabControl5->TabIndex = 10;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label48);
			this->tabPage5->Controls->Add(this->label49);
			this->tabPage5->Controls->Add(this->button27);
			this->tabPage5->Controls->Add(this->button28);
			this->tabPage5->Controls->Add(this->label50);
			this->tabPage5->Controls->Add(this->button29);
			this->tabPage5->Controls->Add(this->label51);
			this->tabPage5->Controls->Add(this->label52);
			this->tabPage5->Controls->Add(this->button30);
			this->tabPage5->Controls->Add(this->button31);
			this->tabPage5->Controls->Add(this->textBox16);
			this->tabPage5->Controls->Add(this->label53);
			this->tabPage5->Controls->Add(this->textBox17);
			this->tabPage5->Controls->Add(this->label54);
			this->tabPage5->Controls->Add(this->textBox18);
			this->tabPage5->Controls->Add(this->label55);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(898, 554);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Enkripsi";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->ForeColor = System::Drawing::Color::Red;
			this->label48->Location = System::Drawing::Point(435, 503);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(205, 20);
			this->label48->TabIndex = 33;
			this->label48->Text = L"Cipher Teks jangan kosong!";
			this->label48->Visible = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->ForeColor = System::Drawing::Color::DarkGreen;
			this->label49->Location = System::Drawing::Point(702, 510);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(87, 20);
			this->label49->TabIndex = 16;
			this->label49->Text = L"File Saved!";
			this->label49->Visible = false;
			// 
			// button27
			// 
			this->button27->Enabled = false;
			this->button27->Location = System::Drawing::Point(795, 503);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 35);
			this->button27->TabIndex = 15;
			this->button27->Text = L"Save File";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(12, 408);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(113, 35);
			this->button28->TabIndex = 14;
			this->button28->Text = L"Open File ...";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(13, 385);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(89, 20);
			this->label50->TabIndex = 13;
			this->label50->Text = L"File Upload";
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(315, 327);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(113, 36);
			this->button29->TabIndex = 12;
			this->button29->Text = L"Clear Kunci";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->ForeColor = System::Drawing::Color::Red;
			this->label51->Location = System::Drawing::Point(13, 327);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(160, 20);
			this->label51->TabIndex = 11;
			this->label51->Text = L"Kunci jangan kosong!";
			this->label51->Visible = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->ForeColor = System::Drawing::Color::Red;
			this->label52->Location = System::Drawing::Point(13, 144);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(189, 20);
			this->label52->TabIndex = 10;
			this->label52->Text = L"Plain Text jangan kosong!";
			this->label52->Visible = false;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(338, 144);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(90, 35);
			this->button30->TabIndex = 9;
			this->button30->Text = L"Reset";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(258, 458);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(171, 79);
			this->button31->TabIndex = 8;
			this->button31->Text = L"Enkripsi";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(8, 208);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox16->Size = System::Drawing::Size(420, 112);
			this->textBox16->TabIndex = 7;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(4, 185);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(52, 20);
			this->label53->TabIndex = 6;
			this->label53->Text = L"Kunci:";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(434, 26);
			this->textBox17->Multiline = true;
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox17->Size = System::Drawing::Size(454, 460);
			this->textBox17->TabIndex = 5;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(430, 3);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(93, 20);
			this->label54->TabIndex = 4;
			this->label54->Text = L"Cipher Text:";
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(8, 26);
			this->textBox18->Multiline = true;
			this->textBox18->Name = L"textBox18";
			this->textBox18->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox18->Size = System::Drawing::Size(420, 112);
			this->textBox18->TabIndex = 3;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(4, 3);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(81, 20);
			this->label55->TabIndex = 2;
			this->label55->Text = L"Plain Text:";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label56);
			this->tabPage6->Controls->Add(this->label57);
			this->tabPage6->Controls->Add(this->label58);
			this->tabPage6->Controls->Add(this->button32);
			this->tabPage6->Controls->Add(this->button33);
			this->tabPage6->Controls->Add(this->label59);
			this->tabPage6->Controls->Add(this->button34);
			this->tabPage6->Controls->Add(this->label60);
			this->tabPage6->Controls->Add(this->label61);
			this->tabPage6->Controls->Add(this->button35);
			this->tabPage6->Controls->Add(this->button36);
			this->tabPage6->Controls->Add(this->textBox19);
			this->tabPage6->Controls->Add(this->label62);
			this->tabPage6->Controls->Add(this->textBox20);
			this->tabPage6->Controls->Add(this->textBox21);
			this->tabPage6->Controls->Add(this->label63);
			this->tabPage6->Location = System::Drawing::Point(4, 29);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(898, 554);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Dekripsi";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->ForeColor = System::Drawing::Color::Red;
			this->label56->Location = System::Drawing::Point(6, 506);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(193, 20);
			this->label56->TabIndex = 32;
			this->label56->Text = L"Plain Teks jangan kosong!";
			this->label56->Visible = false;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(2, 7);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(81, 20);
			this->label57->TabIndex = 31;
			this->label57->Text = L"Plain Text:";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->ForeColor = System::Drawing::Color::DarkGreen;
			this->label58->Location = System::Drawing::Point(271, 506);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(87, 20);
			this->label58->TabIndex = 30;
			this->label58->Text = L"File Saved!";
			this->label58->Visible = false;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(363, 499);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 35);
			this->button32->TabIndex = 29;
			this->button32->Text = L"Save File";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(473, 412);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(113, 35);
			this->button33->TabIndex = 28;
			this->button33->Text = L"Open File ...";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(474, 389);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(89, 20);
			this->label59->TabIndex = 27;
			this->label59->Text = L"File Upload";
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(776, 331);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(113, 36);
			this->button34->TabIndex = 26;
			this->button34->Text = L"Clear Kunci";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->ForeColor = System::Drawing::Color::Red;
			this->label60->Location = System::Drawing::Point(474, 331);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(160, 20);
			this->label60->TabIndex = 25;
			this->label60->Text = L"Kunci jangan kosong!";
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->ForeColor = System::Drawing::Color::Red;
			this->label61->Location = System::Drawing::Point(474, 148);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(201, 20);
			this->label61->TabIndex = 24;
			this->label61->Text = L"Cipher Text jangan kosong!";
			this->label61->Visible = false;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(799, 148);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(90, 35);
			this->button35->TabIndex = 23;
			this->button35->Text = L"Reset";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(717, 455);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(171, 79);
			this->button36->TabIndex = 22;
			this->button36->Text = L"Dekripsi";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(469, 212);
			this->textBox19->Multiline = true;
			this->textBox19->Name = L"textBox19";
			this->textBox19->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox19->Size = System::Drawing::Size(420, 112);
			this->textBox19->TabIndex = 21;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(465, 189);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(52, 20);
			this->label62->TabIndex = 20;
			this->label62->Text = L"Kunci:";
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(6, 30);
			this->textBox20->Multiline = true;
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox20->Size = System::Drawing::Size(453, 463);
			this->textBox20->TabIndex = 19;
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(469, 30);
			this->textBox21->Multiline = true;
			this->textBox21->Name = L"textBox21";
			this->textBox21->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox21->Size = System::Drawing::Size(420, 112);
			this->textBox21->TabIndex = 18;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(465, 7);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(93, 20);
			this->label63->TabIndex = 17;
			this->label63->Text = L"Cipher Text:";
			// 
			// PFC
			// 
			this->PFC->Controls->Add(this->label64);
			this->PFC->Controls->Add(this->tabControl6);
			this->PFC->Location = System::Drawing::Point(154, 4);
			this->PFC->Name = L"PFC";
			this->PFC->Size = System::Drawing::Size(987, 635);
			this->PFC->TabIndex = 4;
			this->PFC->Text = L"Playfair Cipher";
			this->PFC->UseVisualStyleBackColor = true;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(6, 8);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(220, 32);
			this->label64->TabIndex = 11;
			this->label64->Text = L"Playfair Cipher";
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabPage7);
			this->tabControl6->Controls->Add(this->tabPage8);
			this->tabControl6->Location = System::Drawing::Point(8, 50);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(906, 587);
			this->tabControl6->TabIndex = 10;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->label65);
			this->tabPage7->Controls->Add(this->label66);
			this->tabPage7->Controls->Add(this->button37);
			this->tabPage7->Controls->Add(this->button38);
			this->tabPage7->Controls->Add(this->label67);
			this->tabPage7->Controls->Add(this->button39);
			this->tabPage7->Controls->Add(this->label68);
			this->tabPage7->Controls->Add(this->label69);
			this->tabPage7->Controls->Add(this->button40);
			this->tabPage7->Controls->Add(this->button41);
			this->tabPage7->Controls->Add(this->textBox22);
			this->tabPage7->Controls->Add(this->label70);
			this->tabPage7->Controls->Add(this->textBox23);
			this->tabPage7->Controls->Add(this->label71);
			this->tabPage7->Controls->Add(this->textBox24);
			this->tabPage7->Controls->Add(this->label72);
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(898, 554);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Enkripsi";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->ForeColor = System::Drawing::Color::Red;
			this->label65->Location = System::Drawing::Point(435, 503);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(205, 20);
			this->label65->TabIndex = 33;
			this->label65->Text = L"Cipher Teks jangan kosong!";
			this->label65->Visible = false;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->ForeColor = System::Drawing::Color::DarkGreen;
			this->label66->Location = System::Drawing::Point(702, 510);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(87, 20);
			this->label66->TabIndex = 16;
			this->label66->Text = L"File Saved!";
			this->label66->Visible = false;
			// 
			// button37
			// 
			this->button37->Enabled = false;
			this->button37->Location = System::Drawing::Point(795, 503);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 35);
			this->button37->TabIndex = 15;
			this->button37->Text = L"Save File";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(12, 408);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(113, 35);
			this->button38->TabIndex = 14;
			this->button38->Text = L"Open File ...";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(13, 385);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(89, 20);
			this->label67->TabIndex = 13;
			this->label67->Text = L"File Upload";
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(315, 327);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(113, 36);
			this->button39->TabIndex = 12;
			this->button39->Text = L"Clear Kunci";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->ForeColor = System::Drawing::Color::Red;
			this->label68->Location = System::Drawing::Point(13, 327);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(160, 20);
			this->label68->TabIndex = 11;
			this->label68->Text = L"Kunci jangan kosong!";
			this->label68->Visible = false;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->ForeColor = System::Drawing::Color::Red;
			this->label69->Location = System::Drawing::Point(13, 144);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(189, 20);
			this->label69->TabIndex = 10;
			this->label69->Text = L"Plain Text jangan kosong!";
			this->label69->Visible = false;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(338, 144);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(90, 35);
			this->button40->TabIndex = 9;
			this->button40->Text = L"Reset";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(258, 458);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(171, 79);
			this->button41->TabIndex = 8;
			this->button41->Text = L"Enkripsi";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// textBox22
			// 
			this->textBox22->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(8, 208);
			this->textBox22->Multiline = true;
			this->textBox22->Name = L"textBox22";
			this->textBox22->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox22->Size = System::Drawing::Size(420, 112);
			this->textBox22->TabIndex = 7;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(4, 185);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(52, 20);
			this->label70->TabIndex = 6;
			this->label70->Text = L"Kunci:";
			// 
			// textBox23
			// 
			this->textBox23->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(434, 26);
			this->textBox23->Multiline = true;
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox23->Size = System::Drawing::Size(454, 460);
			this->textBox23->TabIndex = 5;
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(430, 3);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(93, 20);
			this->label71->TabIndex = 4;
			this->label71->Text = L"Cipher Text:";
			// 
			// textBox24
			// 
			this->textBox24->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(8, 26);
			this->textBox24->Multiline = true;
			this->textBox24->Name = L"textBox24";
			this->textBox24->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox24->Size = System::Drawing::Size(420, 112);
			this->textBox24->TabIndex = 3;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(4, 3);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(81, 20);
			this->label72->TabIndex = 2;
			this->label72->Text = L"Plain Text:";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->label73);
			this->tabPage8->Controls->Add(this->label74);
			this->tabPage8->Controls->Add(this->label75);
			this->tabPage8->Controls->Add(this->button42);
			this->tabPage8->Controls->Add(this->button43);
			this->tabPage8->Controls->Add(this->label76);
			this->tabPage8->Controls->Add(this->button44);
			this->tabPage8->Controls->Add(this->label77);
			this->tabPage8->Controls->Add(this->label78);
			this->tabPage8->Controls->Add(this->button45);
			this->tabPage8->Controls->Add(this->button46);
			this->tabPage8->Controls->Add(this->textBox25);
			this->tabPage8->Controls->Add(this->label79);
			this->tabPage8->Controls->Add(this->textBox26);
			this->tabPage8->Controls->Add(this->textBox27);
			this->tabPage8->Controls->Add(this->label80);
			this->tabPage8->Location = System::Drawing::Point(4, 29);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(898, 554);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Dekripsi";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->ForeColor = System::Drawing::Color::Red;
			this->label73->Location = System::Drawing::Point(6, 506);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(193, 20);
			this->label73->TabIndex = 32;
			this->label73->Text = L"Plain Teks jangan kosong!";
			this->label73->Visible = false;
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(2, 7);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(81, 20);
			this->label74->TabIndex = 31;
			this->label74->Text = L"Plain Text:";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->ForeColor = System::Drawing::Color::DarkGreen;
			this->label75->Location = System::Drawing::Point(271, 506);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(87, 20);
			this->label75->TabIndex = 30;
			this->label75->Text = L"File Saved!";
			this->label75->Visible = false;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(363, 499);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(93, 35);
			this->button42->TabIndex = 29;
			this->button42->Text = L"Save File";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(473, 412);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(113, 35);
			this->button43->TabIndex = 28;
			this->button43->Text = L"Open File ...";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(474, 389);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(89, 20);
			this->label76->TabIndex = 27;
			this->label76->Text = L"File Upload";
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(776, 331);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(113, 36);
			this->button44->TabIndex = 26;
			this->button44->Text = L"Clear Kunci";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->ForeColor = System::Drawing::Color::Red;
			this->label77->Location = System::Drawing::Point(474, 331);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(160, 20);
			this->label77->TabIndex = 25;
			this->label77->Text = L"Kunci jangan kosong!";
			this->label77->Visible = false;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->ForeColor = System::Drawing::Color::Red;
			this->label78->Location = System::Drawing::Point(474, 148);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(201, 20);
			this->label78->TabIndex = 24;
			this->label78->Text = L"Cipher Text jangan kosong!";
			this->label78->Visible = false;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(799, 148);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(90, 35);
			this->button45->TabIndex = 23;
			this->button45->Text = L"Reset";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->Location = System::Drawing::Point(717, 455);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(171, 79);
			this->button46->TabIndex = 22;
			this->button46->Text = L"Dekripsi";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// textBox25
			// 
			this->textBox25->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(469, 212);
			this->textBox25->Multiline = true;
			this->textBox25->Name = L"textBox25";
			this->textBox25->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox25->Size = System::Drawing::Size(420, 112);
			this->textBox25->TabIndex = 21;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(465, 189);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(52, 20);
			this->label79->TabIndex = 20;
			this->label79->Text = L"Kunci:";
			// 
			// textBox26
			// 
			this->textBox26->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(6, 30);
			this->textBox26->Multiline = true;
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox26->Size = System::Drawing::Size(453, 463);
			this->textBox26->TabIndex = 19;
			// 
			// textBox27
			// 
			this->textBox27->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->Location = System::Drawing::Point(469, 30);
			this->textBox27->Multiline = true;
			this->textBox27->Name = L"textBox27";
			this->textBox27->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox27->Size = System::Drawing::Size(420, 112);
			this->textBox27->TabIndex = 18;
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(465, 7);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(93, 20);
			this->label80->TabIndex = 17;
			this->label80->Text = L"Cipher Text:";
			// 
			// AC
			// 
			this->AC->Controls->Add(this->label81);
			this->AC->Controls->Add(this->tabControl7);
			this->AC->Location = System::Drawing::Point(154, 4);
			this->AC->Name = L"AC";
			this->AC->Size = System::Drawing::Size(987, 635);
			this->AC->TabIndex = 5;
			this->AC->Text = L"Affine Cipher";
			this->AC->UseVisualStyleBackColor = true;
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(6, 8);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(195, 32);
			this->label81->TabIndex = 13;
			this->label81->Text = L"Affine Cipher";
			// 
			// tabControl7
			// 
			this->tabControl7->Controls->Add(this->tabPage9);
			this->tabControl7->Controls->Add(this->tabPage10);
			this->tabControl7->Location = System::Drawing::Point(8, 50);
			this->tabControl7->Name = L"tabControl7";
			this->tabControl7->SelectedIndex = 0;
			this->tabControl7->Size = System::Drawing::Size(906, 587);
			this->tabControl7->TabIndex = 12;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->comboBox2);
			this->tabPage9->Controls->Add(this->comboBox1);
			this->tabPage9->Controls->Add(this->label133);
			this->tabPage9->Controls->Add(this->label132);
			this->tabPage9->Controls->Add(this->label82);
			this->tabPage9->Controls->Add(this->label83);
			this->tabPage9->Controls->Add(this->button47);
			this->tabPage9->Controls->Add(this->button48);
			this->tabPage9->Controls->Add(this->label84);
			this->tabPage9->Controls->Add(this->label85);
			this->tabPage9->Controls->Add(this->label86);
			this->tabPage9->Controls->Add(this->button50);
			this->tabPage9->Controls->Add(this->button51);
			this->tabPage9->Controls->Add(this->label87);
			this->tabPage9->Controls->Add(this->textBox29);
			this->tabPage9->Controls->Add(this->label88);
			this->tabPage9->Controls->Add(this->textBox30);
			this->tabPage9->Controls->Add(this->label89);
			this->tabPage9->Location = System::Drawing::Point(4, 29);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(898, 554);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Enkripsi";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownHeight = 130;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->IntegralHeight = false;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->comboBox2->Location = System::Drawing::Point(219, 319);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 37;
			this->comboBox2->SelectedItem = nullptr;
			this->comboBox2->SelectedText = "--select--";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 130;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"3", L"5", L"7", L"9", L"11", L"15", L"17",
					L"19", L"21", L"23", L"25"
			});
			this->comboBox1->Location = System::Drawing::Point(76, 319);
			this->comboBox1->MaxDropDownItems = 2;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->SelectedItem = nullptr;
			this->comboBox1->SelectedText = "--select--";
			// 
			// label133
			// 
			this->label133->AutoSize = true;
			this->label133->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label133->Location = System::Drawing::Point(215, 296);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(24, 20);
			this->label133->TabIndex = 35;
			this->label133->Text = L"b:";
			// 
			// label132
			// 
			this->label132->AutoSize = true;
			this->label132->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label132->Location = System::Drawing::Point(72, 296);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(28, 20);
			this->label132->TabIndex = 34;
			this->label132->Text = L"m:";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->ForeColor = System::Drawing::Color::Red;
			this->label82->Location = System::Drawing::Point(435, 503);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(205, 20);
			this->label82->TabIndex = 33;
			this->label82->Text = L"Cipher Teks jangan kosong!";
			this->label82->Visible = false;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->ForeColor = System::Drawing::Color::DarkGreen;
			this->label83->Location = System::Drawing::Point(702, 510);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(87, 20);
			this->label83->TabIndex = 16;
			this->label83->Text = L"File Saved!";
			this->label83->Visible = false;
			// 
			// button47
			// 
			this->button47->Enabled = false;
			this->button47->Location = System::Drawing::Point(795, 503);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(93, 35);
			this->button47->TabIndex = 15;
			this->button47->Text = L"Save File";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(12, 408);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(113, 35);
			this->button48->TabIndex = 14;
			this->button48->Text = L"Open File ...";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &MyForm::button48_Click);
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(13, 385);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(89, 20);
			this->label84->TabIndex = 13;
			this->label84->Text = L"File Upload";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->ForeColor = System::Drawing::Color::Red;
			this->label85->Location = System::Drawing::Point(12, 355);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(160, 20);
			this->label85->TabIndex = 11;
			this->label85->Text = L"Kunci jangan kosong!";
			this->label85->Visible = false;
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->ForeColor = System::Drawing::Color::Red;
			this->label86->Location = System::Drawing::Point(3, 251);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(189, 20);
			this->label86->TabIndex = 10;
			this->label86->Text = L"Plain Text jangan kosong!";
			this->label86->Visible = false;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(333, 251);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(90, 35);
			this->button50->TabIndex = 9;
			this->button50->Text = L"Reset";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &MyForm::button50_Click);
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(258, 458);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(171, 79);
			this->button51->TabIndex = 8;
			this->button51->Text = L"Enkripsi";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(3, 296);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(52, 20);
			this->label87->TabIndex = 6;
			this->label87->Text = L"Kunci:";
			// 
			// textBox29
			// 
			this->textBox29->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->Location = System::Drawing::Point(434, 26);
			this->textBox29->Multiline = true;
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox29->Size = System::Drawing::Size(454, 460);
			this->textBox29->TabIndex = 5;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(430, 3);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(93, 20);
			this->label88->TabIndex = 4;
			this->label88->Text = L"Cipher Text:";
			// 
			// textBox30
			// 
			this->textBox30->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->Location = System::Drawing::Point(8, 26);
			this->textBox30->Multiline = true;
			this->textBox30->Name = L"textBox30";
			this->textBox30->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox30->Size = System::Drawing::Size(415, 219);
			this->textBox30->TabIndex = 3;
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->Location = System::Drawing::Point(4, 3);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(81, 20);
			this->label89->TabIndex = 2;
			this->label89->Text = L"Plain Text:";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->comboBox3);
			this->tabPage10->Controls->Add(this->comboBox4);
			this->tabPage10->Controls->Add(this->label134);
			this->tabPage10->Controls->Add(this->label135);
			this->tabPage10->Controls->Add(this->label136);
			this->tabPage10->Controls->Add(this->label90);
			this->tabPage10->Controls->Add(this->label91);
			this->tabPage10->Controls->Add(this->label92);
			this->tabPage10->Controls->Add(this->button52);
			this->tabPage10->Controls->Add(this->button53);
			this->tabPage10->Controls->Add(this->label93);
			this->tabPage10->Controls->Add(this->label94);
			this->tabPage10->Controls->Add(this->label95);
			this->tabPage10->Controls->Add(this->button55);
			this->tabPage10->Controls->Add(this->button56);
			this->tabPage10->Controls->Add(this->textBox32);
			this->tabPage10->Controls->Add(this->textBox33);
			this->tabPage10->Controls->Add(this->label97);
			this->tabPage10->Location = System::Drawing::Point(4, 29);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(898, 554);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Dekripsi";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownHeight = 130;
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->IntegralHeight = false;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(25) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25"
			});
			this->comboBox3->Location = System::Drawing::Point(681, 321);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 28);
			this->comboBox3->TabIndex = 42;
			this->comboBox3->SelectedItem = nullptr;
			this->comboBox3->SelectedText = "--select--";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownHeight = 130;
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->IntegralHeight = false;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"3", L"5", L"7", L"9", L"11", L"15", L"17",
					L"19", L"21", L"23", L"25"
			});
			this->comboBox4->Location = System::Drawing::Point(538, 321);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 28);
			this->comboBox4->TabIndex = 41;
			this->comboBox4->SelectedItem = nullptr;
			this->comboBox4->SelectedText = "--select--";
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label134->Location = System::Drawing::Point(677, 298);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(24, 20);
			this->label134->TabIndex = 40;
			this->label134->Text = L"b:";
			// 
			// label135
			// 
			this->label135->AutoSize = true;
			this->label135->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label135->Location = System::Drawing::Point(534, 298);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(28, 20);
			this->label135->TabIndex = 39;
			this->label135->Text = L"m:";
			// 
			// label136
			// 
			this->label136->AutoSize = true;
			this->label136->Location = System::Drawing::Point(469, 298);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(52, 20);
			this->label136->TabIndex = 38;
			this->label136->Text = L"Kunci:";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->ForeColor = System::Drawing::Color::Red;
			this->label90->Location = System::Drawing::Point(6, 506);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(193, 20);
			this->label90->TabIndex = 32;
			this->label90->Text = L"Plain Teks jangan kosong!";
			this->label90->Visible = false;
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->Location = System::Drawing::Point(2, 7);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(81, 20);
			this->label91->TabIndex = 31;
			this->label91->Text = L"Plain Text:";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->ForeColor = System::Drawing::Color::DarkGreen;
			this->label92->Location = System::Drawing::Point(271, 506);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(87, 20);
			this->label92->TabIndex = 30;
			this->label92->Text = L"File Saved!";
			this->label92->Visible = false;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(363, 499);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(93, 35);
			this->button52->TabIndex = 29;
			this->button52->Text = L"Save File";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &MyForm::button52_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(473, 412);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(113, 35);
			this->button53->TabIndex = 28;
			this->button53->Text = L"Open File ...";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::button53_Click);
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->Location = System::Drawing::Point(474, 389);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(89, 20);
			this->label93->TabIndex = 27;
			this->label93->Text = L"File Upload";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->ForeColor = System::Drawing::Color::Red;
			this->label94->Location = System::Drawing::Point(474, 356);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(160, 20);
			this->label94->TabIndex = 25;
			this->label94->Text = L"Kunci jangan kosong!";
			this->label94->Visible = false;
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->ForeColor = System::Drawing::Color::Red;
			this->label95->Location = System::Drawing::Point(469, 256);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(201, 20);
			this->label95->TabIndex = 24;
			this->label95->Text = L"Cipher Text jangan kosong!";
			this->label95->Visible = false;
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(798, 256);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(90, 35);
			this->button55->TabIndex = 23;
			this->button55->Text = L"Reset";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::button55_Click);
			// 
			// button56
			// 
			this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button56->Location = System::Drawing::Point(717, 455);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(171, 79);
			this->button56->TabIndex = 22;
			this->button56->Text = L"Dekripsi";
			this->button56->UseVisualStyleBackColor = true;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::button56_Click);
			// 
			// textBox32
			// 
			this->textBox32->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox32->Location = System::Drawing::Point(6, 30);
			this->textBox32->Multiline = true;
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox32->Size = System::Drawing::Size(453, 463);
			this->textBox32->TabIndex = 19;
			// 
			// textBox33
			// 
			this->textBox33->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->Location = System::Drawing::Point(469, 30);
			this->textBox33->Multiline = true;
			this->textBox33->Name = L"textBox33";
			this->textBox33->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox33->Size = System::Drawing::Size(419, 220);
			this->textBox33->TabIndex = 18;
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->Location = System::Drawing::Point(465, 7);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(93, 20);
			this->label97->TabIndex = 17;
			this->label97->Text = L"Cipher Text:";
			// 
			// HC
			// 
			this->HC->Controls->Add(this->label98);
			this->HC->Controls->Add(this->tabControl8);
			this->HC->Location = System::Drawing::Point(154, 4);
			this->HC->Name = L"HC";
			this->HC->Size = System::Drawing::Size(987, 635);
			this->HC->TabIndex = 6;
			this->HC->Text = L"Hill Chipher";
			this->HC->UseVisualStyleBackColor = true;
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->Location = System::Drawing::Point(7, 8);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(160, 32);
			this->label98->TabIndex = 15;
			this->label98->Text = L"Hill Cipher";
			// 
			// tabControl8
			// 
			this->tabControl8->Controls->Add(this->tabPage11);
			this->tabControl8->Controls->Add(this->tabPage12);
			this->tabControl8->Location = System::Drawing::Point(9, 50);
			this->tabControl8->Name = L"tabControl8";
			this->tabControl8->SelectedIndex = 0;
			this->tabControl8->Size = System::Drawing::Size(906, 587);
			this->tabControl8->TabIndex = 14;
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->label99);
			this->tabPage11->Controls->Add(this->label100);
			this->tabPage11->Controls->Add(this->button57);
			this->tabPage11->Controls->Add(this->button58);
			this->tabPage11->Controls->Add(this->label101);
			this->tabPage11->Controls->Add(this->label103);
			this->tabPage11->Controls->Add(this->button60);
			this->tabPage11->Controls->Add(this->button61);
			this->tabPage11->Controls->Add(this->textBox35);
			this->tabPage11->Controls->Add(this->label105);
			this->tabPage11->Controls->Add(this->textBox36);
			this->tabPage11->Controls->Add(this->label106);
			this->tabPage11->Location = System::Drawing::Point(4, 29);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(898, 554);
			this->tabPage11->TabIndex = 0;
			this->tabPage11->Text = L"Enkripsi";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->ForeColor = System::Drawing::Color::Red;
			this->label99->Location = System::Drawing::Point(435, 503);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(205, 20);
			this->label99->TabIndex = 33;
			this->label99->Text = L"Cipher Teks jangan kosong!";
			this->label99->Visible = false;
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->ForeColor = System::Drawing::Color::DarkGreen;
			this->label100->Location = System::Drawing::Point(702, 510);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(87, 20);
			this->label100->TabIndex = 16;
			this->label100->Text = L"File Saved!";
			this->label100->Visible = false;
			// 
			// button57
			// 
			this->button57->Enabled = false;
			this->button57->Location = System::Drawing::Point(795, 503);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(93, 35);
			this->button57->TabIndex = 15;
			this->button57->Text = L"Save File";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::button57_Click);
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(12, 408);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(113, 35);
			this->button58->TabIndex = 14;
			this->button58->Text = L"Open File ...";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::button58_Click);
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->Location = System::Drawing::Point(13, 385);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(89, 20);
			this->label101->TabIndex = 13;
			this->label101->Text = L"File Upload";
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->ForeColor = System::Drawing::Color::Red;
			this->label103->Location = System::Drawing::Point(13, 351);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(189, 20);
			this->label103->TabIndex = 10;
			this->label103->Text = L"Plain Text jangan kosong!";
			this->label103->Visible = false;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(338, 351);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(90, 35);
			this->button60->TabIndex = 9;
			this->button60->Text = L"Reset";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::button60_Click);
			// 
			// button61
			// 
			this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button61->Location = System::Drawing::Point(258, 458);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(171, 79);
			this->button61->TabIndex = 8;
			this->button61->Text = L"Enkripsi";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::button61_Click);
			// 
			// textBox35
			// 
			this->textBox35->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->Location = System::Drawing::Point(434, 26);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox35->Size = System::Drawing::Size(454, 460);
			this->textBox35->TabIndex = 5;
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->Location = System::Drawing::Point(430, 3);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(93, 20);
			this->label105->TabIndex = 4;
			this->label105->Text = L"Cipher Text:";
			// 
			// textBox36
			// 
			this->textBox36->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->Location = System::Drawing::Point(8, 26);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox36->Size = System::Drawing::Size(420, 319);
			this->textBox36->TabIndex = 3;
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->Location = System::Drawing::Point(4, 3);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(81, 20);
			this->label106->TabIndex = 2;
			this->label106->Text = L"Plain Text:";
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->label107);
			this->tabPage12->Controls->Add(this->label108);
			this->tabPage12->Controls->Add(this->label109);
			this->tabPage12->Controls->Add(this->button62);
			this->tabPage12->Controls->Add(this->button63);
			this->tabPage12->Controls->Add(this->label110);
			this->tabPage12->Controls->Add(this->label112);
			this->tabPage12->Controls->Add(this->button65);
			this->tabPage12->Controls->Add(this->button66);
			this->tabPage12->Controls->Add(this->textBox38);
			this->tabPage12->Controls->Add(this->textBox39);
			this->tabPage12->Controls->Add(this->label114);
			this->tabPage12->Location = System::Drawing::Point(4, 29);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(898, 554);
			this->tabPage12->TabIndex = 1;
			this->tabPage12->Text = L"Dekripsi";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->ForeColor = System::Drawing::Color::Red;
			this->label107->Location = System::Drawing::Point(5, 712);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(193, 20);
			this->label107->TabIndex = 32;
			this->label107->Text = L"Plain Teks jangan kosong!";
			this->label107->Visible = false;
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->Location = System::Drawing::Point(2, 7);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(81, 20);
			this->label108->TabIndex = 31;
			this->label108->Text = L"Plain Text:";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->ForeColor = System::Drawing::Color::DarkGreen;
			this->label109->Location = System::Drawing::Point(271, 506);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(87, 20);
			this->label109->TabIndex = 30;
			this->label109->Text = L"File Saved!";
			this->label109->Visible = false;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(363, 499);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(93, 35);
			this->button62->TabIndex = 29;
			this->button62->Text = L"Save File";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &MyForm::button62_Click);
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(473, 412);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(113, 35);
			this->button63->TabIndex = 28;
			this->button63->Text = L"Open File ...";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &MyForm::button63_Click);
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->Location = System::Drawing::Point(474, 389);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(89, 20);
			this->label110->TabIndex = 27;
			this->label110->Text = L"File Upload";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->ForeColor = System::Drawing::Color::Red;
			this->label112->Location = System::Drawing::Point(473, 354);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(201, 20);
			this->label112->TabIndex = 24;
			this->label112->Text = L"Cipher Text jangan kosong!";
			this->label112->Visible = false;
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(798, 354);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(90, 35);
			this->button65->TabIndex = 23;
			this->button65->Text = L"Reset";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &MyForm::button65_Click);
			// 
			// button66
			// 
			this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button66->Location = System::Drawing::Point(717, 455);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(171, 79);
			this->button66->TabIndex = 22;
			this->button66->Text = L"Dekripsi";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &MyForm::button66_Click);
			// 
			// textBox38
			// 
			this->textBox38->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox38->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox38->Location = System::Drawing::Point(6, 30);
			this->textBox38->Multiline = true;
			this->textBox38->Name = L"textBox38";
			this->textBox38->ReadOnly = true;
			this->textBox38->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox38->Size = System::Drawing::Size(453, 463);
			this->textBox38->TabIndex = 19;
			// 
			// textBox39
			// 
			this->textBox39->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox39->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox39->Location = System::Drawing::Point(469, 30);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox39->Size = System::Drawing::Size(420, 318);
			this->textBox39->TabIndex = 18;
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->Location = System::Drawing::Point(465, 7);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(93, 20);
			this->label114->TabIndex = 17;
			this->label114->Text = L"Cipher Text:";
			// 
			// Enigma
			// 
			this->Enigma->Controls->Add(this->label115);
			this->Enigma->Controls->Add(this->tabControl9);
			this->Enigma->Location = System::Drawing::Point(154, 4);
			this->Enigma->Name = L"Enigma";
			this->Enigma->Size = System::Drawing::Size(987, 635);
			this->Enigma->TabIndex = 7;
			this->Enigma->Text = L"Enigma Chiper";
			this->Enigma->UseVisualStyleBackColor = true;
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label115->Location = System::Drawing::Point(7, 8);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(219, 32);
			this->label115->TabIndex = 17;
			this->label115->Text = L"Enigma Cipher";
			// 
			// tabControl9
			// 
			this->tabControl9->Controls->Add(this->tabPage13);
			this->tabControl9->Controls->Add(this->tabPage14);
			this->tabControl9->Location = System::Drawing::Point(9, 50);
			this->tabControl9->Name = L"tabControl9";
			this->tabControl9->SelectedIndex = 0;
			this->tabControl9->Size = System::Drawing::Size(906, 587);
			this->tabControl9->TabIndex = 16;
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->label116);
			this->tabPage13->Controls->Add(this->label117);
			this->tabPage13->Controls->Add(this->button67);
			this->tabPage13->Controls->Add(this->button68);
			this->tabPage13->Controls->Add(this->label118);
			this->tabPage13->Controls->Add(this->label120);
			this->tabPage13->Controls->Add(this->button70);
			this->tabPage13->Controls->Add(this->button71);
			this->tabPage13->Controls->Add(this->textBox41);
			this->tabPage13->Controls->Add(this->label122);
			this->tabPage13->Controls->Add(this->textBox42);
			this->tabPage13->Controls->Add(this->label123);
			this->tabPage13->Location = System::Drawing::Point(4, 29);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(898, 554);
			this->tabPage13->TabIndex = 0;
			this->tabPage13->Text = L"Enkripsi";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->ForeColor = System::Drawing::Color::Red;
			this->label116->Location = System::Drawing::Point(435, 503);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(205, 20);
			this->label116->TabIndex = 33;
			this->label116->Text = L"Cipher Teks jangan kosong!";
			this->label116->Visible = false;
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->ForeColor = System::Drawing::Color::DarkGreen;
			this->label117->Location = System::Drawing::Point(702, 510);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(87, 20);
			this->label117->TabIndex = 16;
			this->label117->Text = L"File Saved!";
			this->label117->Visible = false;
			// 
			// button67
			// 
			this->button67->Enabled = false;
			this->button67->Location = System::Drawing::Point(795, 503);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(93, 35);
			this->button67->TabIndex = 15;
			this->button67->Text = L"Save File";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &MyForm::button67_Click);
			// 
			// button68
			// 
			this->button68->Location = System::Drawing::Point(12, 408);
			this->button68->Name = L"button68";
			this->button68->Size = System::Drawing::Size(113, 35);
			this->button68->TabIndex = 14;
			this->button68->Text = L"Open File ...";
			this->button68->UseVisualStyleBackColor = true;
			this->button68->Click += gcnew System::EventHandler(this, &MyForm::button68_Click);
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->Location = System::Drawing::Point(13, 385);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(89, 20);
			this->label118->TabIndex = 13;
			this->label118->Text = L"File Upload";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->ForeColor = System::Drawing::Color::Red;
			this->label120->Location = System::Drawing::Point(13, 354);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(189, 20);
			this->label120->TabIndex = 10;
			this->label120->Text = L"Plain Text jangan kosong!";
			this->label120->Visible = false;
			// 
			// button70
			// 
			this->button70->Location = System::Drawing::Point(338, 354);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(90, 35);
			this->button70->TabIndex = 9;
			this->button70->Text = L"Reset";
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &MyForm::button70_Click);
			// 
			// button71
			// 
			this->button71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button71->Location = System::Drawing::Point(258, 458);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(171, 79);
			this->button71->TabIndex = 8;
			this->button71->Text = L"Enkripsi";
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &MyForm::button71_Click);
			// 
			// textBox41
			// 
			this->textBox41->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox41->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox41->Location = System::Drawing::Point(434, 26);
			this->textBox41->Multiline = true;
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox41->Size = System::Drawing::Size(454, 460);
			this->textBox41->TabIndex = 5;
			// 
			// label122
			// 
			this->label122->AutoSize = true;
			this->label122->Location = System::Drawing::Point(430, 3);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(93, 20);
			this->label122->TabIndex = 4;
			this->label122->Text = L"Cipher Text:";
			// 
			// textBox42
			// 
			this->textBox42->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox42->Location = System::Drawing::Point(8, 26);
			this->textBox42->Multiline = true;
			this->textBox42->Name = L"textBox42";
			this->textBox42->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox42->Size = System::Drawing::Size(420, 322);
			this->textBox42->TabIndex = 3;
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Location = System::Drawing::Point(4, 3);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(81, 20);
			this->label123->TabIndex = 2;
			this->label123->Text = L"Plain Text:";
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->label124);
			this->tabPage14->Controls->Add(this->label125);
			this->tabPage14->Controls->Add(this->label126);
			this->tabPage14->Controls->Add(this->button72);
			this->tabPage14->Controls->Add(this->button73);
			this->tabPage14->Controls->Add(this->label127);
			this->tabPage14->Controls->Add(this->label129);
			this->tabPage14->Controls->Add(this->button75);
			this->tabPage14->Controls->Add(this->button76);
			this->tabPage14->Controls->Add(this->textBox44);
			this->tabPage14->Controls->Add(this->textBox45);
			this->tabPage14->Controls->Add(this->label131);
			this->tabPage14->Location = System::Drawing::Point(4, 29);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Padding = System::Windows::Forms::Padding(3);
			this->tabPage14->Size = System::Drawing::Size(898, 554);
			this->tabPage14->TabIndex = 1;
			this->tabPage14->Text = L"Dekripsi";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// label124
			// 
			this->label124->AutoSize = true;
			this->label124->ForeColor = System::Drawing::Color::Red;
			this->label124->Location = System::Drawing::Point(6, 506);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(193, 20);
			this->label124->TabIndex = 32;
			this->label124->Text = L"Plain Teks jangan kosong!";
			this->label124->Visible = false;
			// 
			// label125
			// 
			this->label125->AutoSize = true;
			this->label125->Location = System::Drawing::Point(2, 7);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(81, 20);
			this->label125->TabIndex = 31;
			this->label125->Text = L"Plain Text:";
			// 
			// label126
			// 
			this->label126->AutoSize = true;
			this->label126->ForeColor = System::Drawing::Color::DarkGreen;
			this->label126->Location = System::Drawing::Point(271, 506);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(87, 20);
			this->label126->TabIndex = 30;
			this->label126->Text = L"File Saved!";
			this->label126->Visible = false;
			// 
			// button72
			// 
			this->button72->Location = System::Drawing::Point(363, 499);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(93, 35);
			this->button72->TabIndex = 29;
			this->button72->Text = L"Save File";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &MyForm::button72_Click);
			// 
			// button73
			// 
			this->button73->Location = System::Drawing::Point(473, 412);
			this->button73->Name = L"button73";
			this->button73->Size = System::Drawing::Size(113, 35);
			this->button73->TabIndex = 28;
			this->button73->Text = L"Open File ...";
			this->button73->UseVisualStyleBackColor = true;
			this->button73->Click += gcnew System::EventHandler(this, &MyForm::button73_Click);
			// 
			// label127
			// 
			this->label127->AutoSize = true;
			this->label127->Location = System::Drawing::Point(474, 389);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(89, 20);
			this->label127->TabIndex = 27;
			this->label127->Text = L"File Upload";
			// 
			// label129
			// 
			this->label129->AutoSize = true;
			this->label129->ForeColor = System::Drawing::Color::Red;
			this->label129->Location = System::Drawing::Point(473, 358);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(201, 20);
			this->label129->TabIndex = 24;
			this->label129->Text = L"Cipher Text jangan kosong!";
			this->label129->Visible = false;
			// 
			// button75
			// 
			this->button75->Location = System::Drawing::Point(798, 358);
			this->button75->Name = L"button75";
			this->button75->Size = System::Drawing::Size(90, 35);
			this->button75->TabIndex = 23;
			this->button75->Text = L"Reset";
			this->button75->UseVisualStyleBackColor = true;
			this->button75->Click += gcnew System::EventHandler(this, &MyForm::button75_Click);
			// 
			// button76
			// 
			this->button76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button76->Location = System::Drawing::Point(717, 455);
			this->button76->Name = L"button76";
			this->button76->Size = System::Drawing::Size(171, 79);
			this->button76->TabIndex = 22;
			this->button76->Text = L"Dekripsi";
			this->button76->UseVisualStyleBackColor = true;
			this->button76->Click += gcnew System::EventHandler(this, &MyForm::button76_Click);
			// 
			// textBox44
			// 
			this->textBox44->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox44->Location = System::Drawing::Point(6, 30);
			this->textBox44->Multiline = true;
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox44->Size = System::Drawing::Size(453, 463);
			this->textBox44->TabIndex = 19;
			// 
			// textBox45
			// 
			this->textBox45->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox45->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox45->Location = System::Drawing::Point(469, 30);
			this->textBox45->Multiline = true;
			this->textBox45->Name = L"textBox45";
			this->textBox45->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox45->Size = System::Drawing::Size(420, 322);
			this->textBox45->TabIndex = 18;
			// 
			// label131
			// 
			this->label131->AutoSize = true;
			this->label131->Location = System::Drawing::Point(465, 7);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(93, 20);
			this->label131->TabIndex = 17;
			this->label131->Text = L"Cipher Text:";
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
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->Location = System::Drawing::Point(359, 649);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(575, 32);
			this->label96->TabIndex = 6;
			this->label96->Text = L"Dibuat Oleh: Leonard Matheus/13519215";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1147, 690);
			this->Controls->Add(this->label96);
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
			this->AutoVC->ResumeLayout(false);
			this->AutoVC->PerformLayout();
			this->tabControl4->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ExtendVC->ResumeLayout(false);
			this->ExtendVC->PerformLayout();
			this->tabControl5->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->PFC->ResumeLayout(false);
			this->PFC->PerformLayout();
			this->tabControl6->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->AC->ResumeLayout(false);
			this->AC->PerformLayout();
			this->tabControl7->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->HC->ResumeLayout(false);
			this->HC->PerformLayout();
			this->tabControl8->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->Enigma->ResumeLayout(false);
			this->Enigma->PerformLayout();
			this->tabControl9->ResumeLayout(false);
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->tabPage14->ResumeLayout(false);
			this->tabPage14->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

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
	/*-------------------------Vigenere Cipher Standard Enkripsi----------------------------*/
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
	/*------------------------Vigenere Cipher Standard Dekripsi------------------------*/
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
	/*------------------------Full Vigenere Cipher Enkripsi-----------------------------*/
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
			FVC fvc1 = FVC();
			fvc1.setKunci(str_std(this->textBox4->Text));
			fvc1.setPlain(str_std(this->textBox6->Text));
			fvc1.FVC_Enkripsi();
			this->textBox5->Text = str_cs(fvc1.getCipher());
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
	/*-----------------------------Full Vigenere Cipher Dekripsi---------------------------- */
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
			FVC fvcd1 = FVC();
			fvcd1.setKunci(str_std(this->textBox7->Text));
			fvcd1.setCipher(str_std(this->textBox9->Text));
			fvcd1.FVC_Dekripsi();
			this->textBox8->Text = str_cs(fvcd1.getPlain());
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
	/*-------------------------Auto-Key Vigenere Cipher Enkripsi------------------------------*/
	private: System::Void clear_label5() {
		this->label34->Visible = false;
		this->label35->Visible = false;
		this->label31->Visible = false;
		this->label32->Visible = false;
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox12->Text = "";
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox12->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox12->Text == "" || this->textBox12->Text->Trim() == "") {
			this->label35->Visible = true;
		}
		else {
			this->label35->Visible = false;
		}
		if (this->textBox10->Text == "" || this->textBox10->Text->Trim() == "") {
			this->label34->Visible = true;
		}
		else {
			this->label34->Visible = false;
		}
		if (this->textBox10->Text != "" && this->textBox10->Text->Trim() != "" &&
			this->textBox12->Text != "" && this->textBox12->Text->Trim() != "") {
			clear_label5();
			AVC avc1 = AVC();
			avc1.setKunci(str_std(this->textBox10->Text));
			avc1.setPlain(str_std(this->textBox12->Text));
			avc1.AVC_Enkripsi();
			this->textBox11->Text = str_cs(avc1.getCipher());
			this->button17->Enabled = true;
			this->textBox10->Text = str_cs(avc1.generateKunci(avc1.getPlain(), avc1.getKunci()));
		}
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox10->Text = "";
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox11->Text == "" || this->textBox11->Text->Trim() == "") {
			this->label31->Visible = true;
		}
		else {
			this->label31->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox11->Text != "" && this->textBox11->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox11->Text));
			this->label32->Visible = true;
		}
	}
	/*-------------------------Auto Key Vigenere Cipher Dekripsi------------------------------------*/
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox15->Text == "" || this->textBox15->Text->Trim() == "") {
			this->label44->Visible = true;
		}
		else {
			this->label44->Visible = false;
		}
		if (this->textBox13->Text == "" || this->textBox13->Text->Trim() == "") {
			this->label43->Visible = true;
		}
		else {
			this->label43->Visible = false;
		}
		if (this->textBox15->Text != "" && this->textBox15->Text->Trim() != "" &&
			this->textBox13->Text != "" && this->textBox13->Text->Trim() != "") {
			clear_label6();
			AVC avcd1 = AVC();
			avcd1.setKunci(str_std(this->textBox13->Text));
			avcd1.setCipher(str_std(this->textBox15->Text));
			avcd1.AVC_Dekripsi();
			this->textBox14->Text = str_cs(avcd1.getPlain());
			this->button22->Enabled = true;
		}
	}
	private: System::Void clear_label6() {
		this->label44->Visible = false;
		this->label43->Visible = false;
		this->label39->Visible = false;
		this->label41->Visible = false;
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox13->Text = "";
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox15->Text = "";
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox14->Text == "" || this->textBox14->Text->Trim() == "") {
			this->label39->Visible = true;
		}
		else {
			this->label39->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox14->Text != "" && this->textBox14->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox14->Text));
			this->label41->Visible = true;
		}
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox15->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	/*-------------------------Extended Vigenere Cipher Enkripsi-------------------------------*/
	private: System::Void clear_label7() {
		this->label51->Visible = false;
		this->label52->Visible = false;
		this->label48->Visible = false;
		this->label49->Visible = false;
	}
	private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox18->Text = "";
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox18->Text = str_cs(readHexFile(str_std(filePath)));
		}
	}
	private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox18->Text == "" || this->textBox18->Text->Trim() == "") {
			this->label52->Visible = true;
		}
		else {
			this->label52->Visible = false;
		}
		if (this->textBox16->Text == "" || this->textBox16->Text->Trim() == "") {
			this->label51->Visible = true;
		}
		else {
			this->label51->Visible = false;
		}
		if (this->textBox16->Text != "" && this->textBox16->Text->Trim() != "" &&
			this->textBox18->Text != "" && this->textBox18->Text->Trim() != "") {
			clear_label7();
			EVC evc1 = EVC();
			evc1.setKunci(str_std(this->textBox16->Text));
			evc1.setPlain(str_std(this->textBox18->Text));
			evc1.EVC_Enkripsi();
			this->textBox17->Text = str_cs(evc1.getCipher());
			this->button27->Enabled = true;
		}
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox16->Text = "";
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox17->Text == "" || this->textBox17->Text->Trim() == "") {
			this->label48->Visible = true;
		}
		else {
			this->label48->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox17->Text != "" && this->textBox17->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			writeHexFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox17->Text));
			this->label49->Visible = true;
		}
	}
	/*-------------------------Extended Vigenere Cipher Dekripsi-------------------------------*/
	private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox21->Text == "" || this->textBox21->Text->Trim() == "") {
			this->label61->Visible = true;
		}
		else {
			this->label61->Visible = false;
		}
		if (this->textBox19->Text == "" || this->textBox19->Text->Trim() == "") {
			this->label60->Visible = true;
		}
		else {
			this->label60->Visible = false;
		}
		if (this->textBox21->Text != "" && this->textBox21->Text->Trim() != "" &&
			this->textBox19->Text != "" && this->textBox19->Text->Trim() != "") {
			clear_label8();
			EVC evcd1 = EVC();
			evcd1.setKunci(str_std(this->textBox19->Text));
			evcd1.setCipher(str_std(this->textBox21->Text));
			evcd1.EVC_Dekripsi();
			this->textBox20->Text = str_cs(evcd1.getPlain());
			this->button32->Enabled = true;
		}
	}
	private: System::Void clear_label8() {
		this->label61->Visible = false;
		this->label60->Visible = false;
		this->label56->Visible = false;
		this->label58->Visible = false;
	}
	private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox19->Text = "";
	}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox21->Text = "";
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox20->Text == "" || this->textBox20->Text->Trim() == "") {
			this->label56->Visible = true;
		}
		else {
			this->label56->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox20->Text != "" && this->textBox20->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox20->Text));
			this->label58->Visible = true;
		}
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox21->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	/*-------------------------Playfair Cipher Enkripsi------------------------------*/
	private: System::Void clear_label9() {
		this->label69->Visible = false;
		this->label68->Visible = false;
		this->label65->Visible = false;
		this->label66->Visible = false;
	}
	private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox24->Text = "";
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox24->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox24->Text == "" || this->textBox24->Text->Trim() == "") {
			this->label69->Visible = true;
		}
		else {
			this->label69->Visible = false;
		}
		if (this->textBox22->Text == "" || this->textBox22->Text->Trim() == "") {
			this->label68->Visible = true;
		}
		else {
			this->label68->Visible = false;
		}
		if (this->textBox22->Text != "" && this->textBox22->Text->Trim() != "" &&
			this->textBox24->Text != "" && this->textBox24->Text->Trim() != "") {
			clear_label9();
			PFCip pfc1 = PFCip();
			pfc1.setKunci(str_std(this->textBox22->Text));
			pfc1.setPlain(str_std(this->textBox24->Text));
			pfc1.PFCip_Enkripsi();
			this->textBox23->Text = str_cs(pfc1.getCipher());
			this->button37->Enabled = true;
		}
	}
	private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox22->Text = "";
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox23->Text == "" || this->textBox23->Text->Trim() == "") {
			this->label65->Visible = true;
		}
		else {
			this->label65->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox23->Text != "" && this->textBox23->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox23->Text));
			this->label66->Visible = true;
		}
	}
	 /*-------------------------Playfair Cipher Dekripsi------------------------------------*/
	private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox27->Text == "" || this->textBox27->Text->Trim() == "") {
			this->label78->Visible = true;
		}
		else {
			this->label78->Visible = false;
		}
		if (this->textBox25->Text == "" || this->textBox25->Text->Trim() == "") {
			this->label77->Visible = true;
		}
		else {
			this->label77->Visible = false;
		}
		if (this->textBox27->Text != "" && this->textBox27->Text->Trim() != "" &&
			this->textBox25->Text != "" && this->textBox25->Text->Trim() != "") {
			clear_label10();
			PFCip pfcd1 = PFCip();
			pfcd1.setKunci(str_std(this->textBox25->Text));
			pfcd1.setCipher(str_std(this->textBox27->Text));
			pfcd1.PFCip_Dekripsi();
			this->textBox26->Text = str_cs(pfcd1.getPlain());
			//this->textBox26->Text = str_cs(pfcd1.getCipher());
			this->button42->Enabled = true;
		}
	}
	private: System::Void clear_label10() {
		this->label78->Visible = false;
		this->label77->Visible = false;
		this->label73->Visible = false;
		this->label75->Visible = false;
	}
	private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox25->Text = "";
	}
	private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox27->Text = "";
	}
	private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox26->Text == "" || this->textBox26->Text->Trim() == "") {
			this->label73->Visible = true;
		}
		else {
			this->label73->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox26->Text != "" && this->textBox26->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox26->Text));
			this->label75->Visible = true;
		}
	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox27->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	/*-------------------------Affine Cipher Enkripsi------------------------------*/
	private: System::Void clear_label11() {
		this->label86->Visible = false;
		this->label85->Visible = false;
		this->label82->Visible = false;
		this->label83->Visible = false;
	}
	private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox30->Text = "";
	}
	private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox30->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox30->Text == "" || this->textBox30->Text->Trim() == "") {
			this->label86->Visible = true;
		}
		else {
			this->label86->Visible = false;
		}
		if (this->comboBox1->SelectedItem->ToString() == "") {
			this->label85->Visible = true;
		}
		else {
			this->label85->Visible = false;
		}
		if (this->comboBox2->SelectedItem->ToString() == "") {
			this->label85->Visible = true;
		}
		else {
			this->label85->Visible = false;
		}
		if (this->comboBox1->SelectedItem->ToString() != "" && this->comboBox2->SelectedItem->ToString() != "" &&
			this->textBox30->Text != "" && this->textBox30->Text->Trim() != "") {
			clear_label11();
			AFC afc1 = AFC();
			afc1.setKunciM(str_std(this->comboBox1->SelectedItem->ToString()));
			afc1.setKunciB(str_std(this->comboBox2->SelectedItem->ToString()));
			afc1.setPlain(str_std(this->textBox30->Text));
			afc1.AFC_Enkripsi();
			this->textBox29->Text = str_cs(afc1.getCipher());
			this->button47->Enabled = true;
		}
	}
	private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox29->Text == "" || this->textBox29->Text->Trim() == "") {
			this->label82->Visible = true;
		}
		else {
			this->label82->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox29->Text != "" && this->textBox29->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox29->Text));
			this->label83->Visible = true;
		}
	}
	/*-------------------------Affine Cipher Dekripsi------------------------------------*/
	private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox33->Text == "" || this->textBox33->Text->Trim() == "") {
			this->label95->Visible = true;
		}
		else {
			this->label95->Visible = false;
		}
		if (this->comboBox4->SelectedItem->ToString() == "") {
			this->label94->Visible = true;
		}
		else {
			this->label94->Visible = false;
		}
		if (this->comboBox3->SelectedItem->ToString() == "") {
			this->label94->Visible = true;
		}
		else {
			this->label94->Visible = false;
		}
		if (this->textBox33->Text != "" && this->textBox33->Text->Trim() != "" &&
			this->comboBox4->SelectedItem->ToString() != "" && this->comboBox3->SelectedItem->ToString() != "") {
			clear_label12();
			AFC afcd1 = AFC();
			afcd1.setKunciM(str_std(this->comboBox4->SelectedItem->ToString()));
			afcd1.setKunciB(str_std(this->comboBox3->SelectedItem->ToString()));
			afcd1.setCipher(str_std(this->textBox33->Text));
			afcd1.AFC_Dekripsi();
			this->textBox32->Text = str_cs(afcd1.getPlain());
			//this->textBox32->Text = str_cs(afd1.getCipher());
			this->button52->Enabled = true;
		}
	}
	private: System::Void clear_label12() {
		this->label95->Visible = false;
		this->label94->Visible = false;
		this->label90->Visible = false;
		this->label92->Visible = false;
	}
	private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox33->Text = "";
	}
	private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox32->Text == "" || this->textBox32->Text->Trim() == "") {
			this->label90->Visible = true;
		}
		else {
			this->label90->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox32->Text != "" && this->textBox32->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox32->Text));
			this->label92->Visible = true;
		}
	}
	private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox33->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	/*-------------------------Hill Cipher Enkripsi------------------------------*/
	private: System::Void clear_label13() {
		this->label103->Visible = false;
		this->label99->Visible = false;
		this->label100->Visible = false;
	}
	private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox36->Text = "";
	}
	private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox36->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox36->Text == "" || this->textBox36->Text->Trim() == "") {
			this->label103->Visible = true;
		}
		else {
			this->label103->Visible = false;
		}
		if (this->textBox36->Text != "" && this->textBox36->Text->Trim() != "") {
			clear_label13();
			HCip hc1 = HCip();
			hc1.setPlain(str_std(this->textBox36->Text));
			hc1.HCip_Enkripsi();
			this->textBox35->Text = str_cs(hc1.getCipher());
			this->button57->Enabled = true;
		}
	}
	private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox35->Text == "" || this->textBox35->Text->Trim() == "") {
			this->label99->Visible = true;
		}
		else {
			this->label99->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox35->Text != "" && this->textBox35->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox35->Text));
			this->label100->Visible = true;
		}
	}
	/*-------------------------Hill Cipher Dekripsi------------------------------------*/
	private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox39->Text == "" || this->textBox39->Text->Trim() == "") {
			this->label112->Visible = true;
		}
		else {
			this->label112->Visible = false;
		}
		if (this->textBox39->Text != "" && this->textBox39->Text->Trim() != "") {
			clear_label14();
			HCip hcd1 = HCip();
			hcd1.setCipher(str_std(this->textBox39->Text));
			hcd1.HCip_Dekripsi();
			this->textBox38->Text = str_cs(hcd1.getPlain());
			this->button62->Enabled = true;
		}
	}
	private: System::Void clear_label14() {
		this->label112->Visible = false;
		this->label107->Visible = false;
		this->label109->Visible = false;
	}
	private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox39->Text = "";
	}
	private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox38->Text == "" || this->textBox38->Text->Trim() == "") {
			this->label107->Visible = true;
		}
		else {
			this->label107->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox38->Text != "" && this->textBox38->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox38->Text));
			this->label109->Visible = true;
		}
	}
	private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox39->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	/*-------------------------Enigma Cipher Enkripsi------------------------------*/
	private: System::Void clear_label15() {
		this->label120->Visible = false;
		this->label116->Visible = false;
		this->label117->Visible = false;
	}
	private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox42->Text = "";
	}
	private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox42->Text = str_cs(readFile(str_std(filePath)));
		}
	}
	private: System::Void button71_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox42->Text == "" || this->textBox42->Text->Trim() == "") {
			this->label120->Visible = true;
		}
		else {
			this->label120->Visible = false;
		}
		if (this->textBox42->Text != "" && this->textBox42->Text->Trim() != "") {
			clear_label15();
			ECip ecip1 = ECip();
			ecip1.setPlain(str_std(this->textBox42->Text));
			ecip1.ECip_Enkripsi();
			this->textBox41->Text = str_cs(ecip1.getCipher());
			this->button67->Enabled = true;
		}
	}
	private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox41->Text == "" || this->textBox41->Text->Trim() == "") {
			this->label116->Visible = true;
		}
		else {
			this->label116->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox41->Text != "" && this->textBox41->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox41->Text));
			this->label117->Visible = true;
		}
	}
	/*-------------------------Enigma Cipher Dekripsi------------------------------------*/
	private: System::Void button76_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox45->Text == "" || this->textBox45->Text->Trim() == "") {
			this->label129->Visible = true;
		}
		else {
			this->label129->Visible = false;
		}
		if (this->textBox45->Text != "" && this->textBox45->Text->Trim() != "") {
			clear_label16();
			ECip ecipd1 = ECip();
			ecipd1.setCipher(str_std(this->textBox45->Text));
			ecipd1.ECip_Dekripsi();
			this->textBox44->Text = str_cs(ecipd1.getPlain());
			this->button72->Enabled = true;
		}
	}
	private: System::Void clear_label16() {
		this->label129->Visible = false;
		this->label124->Visible = false;
		this->label126->Visible = false;
	}
	private: System::Void button75_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox45->Text = "";
	}
	private: System::Void button72_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox44->Text == "" || this->textBox44->Text->Trim() == "") {
			this->label124->Visible = true;
		}
		else {
			this->label124->Visible = false;
		}
		if (this->saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK
			&& this->textBox44->Text != "" && this->textBox44->Text->Trim() != "") {
			String^ filePath = this->openFileDialog1->FileName;
			saveFile(str_std(this->saveFileDialog1->FileName), str_std(this->textBox44->Text));
			this->label126->Visible = true;
		}
	}
	private: System::Void button73_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			String^ filePath = this->openFileDialog1->FileName;
			this->textBox45->Text = str_cs(readFile(str_std(filePath)));
		}
	}
};
}
