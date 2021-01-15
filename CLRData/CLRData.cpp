#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CLRData::MyForm form;
	Application::Run(%form);
    return 0;
}
