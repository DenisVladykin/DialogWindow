#include "MyForm.h"
using namespace Lab6;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // ≈сли форму назвали MyForm, как написано выше
	return 0;
}


