#include "Principale.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	EIA2MININFPOOP6::Principale Main;
	Application::Run(% Main);
}
