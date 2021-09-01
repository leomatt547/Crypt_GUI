#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CryptGUI::MyForm frm;
	Application::Run(% frm);
}