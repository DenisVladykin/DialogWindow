#include "MyForm.h"
using namespace Lab6;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // ���� ����� ������� MyForm, ��� �������� ����
	return 0;
}


