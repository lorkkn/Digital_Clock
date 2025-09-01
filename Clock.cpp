#include "Clock.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]


int main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(0);
    testy2::Clock form;
    Application::Run(% form);
}

