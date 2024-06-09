/*#include "MyForm.h"
//專案名稱為WindowsForm2
using namespace A320AileronDampingTest;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	// 建立任何控制項之前，先啟用 Windows XP 視覺化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// 建立主視窗並執行
	Application::Run(gcnew MyForm());
	return 0;
*/
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	A320AileronDampingTest::MyForm form;
	Application::Run(%form);
	
}