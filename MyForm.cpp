#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab06DavidRodr�guez1164619::MyForm MyForm;
	Application::Run(%MyForm);
	return 0;
}