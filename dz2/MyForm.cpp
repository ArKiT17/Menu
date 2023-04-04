#include "MainForm.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

namespace dz2 {
	System::Void MyForm::buttonresult_Click(System::Object^ sender, System::EventArgs^ e) {
		Visible = false;
		mForm->Visible = true;
		mForm->ShowInTaskbar = true;
		mForm->label4->Visible = true;
		mForm->label4->Text = "—ума: " + mForm->sum + " грн";
	}

	System::Void MyForm::setSum(double number) {
		mForm->sum += number;
	}

	double MyForm::getSum() {
		return mForm->sum;
	}

	System::Void MyForm::setTime(int number) {
		mForm->time += number;
	}

	[STAThreadAttribute]
	int main(array<String^>^ args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);
		dz2::MainForm form;
		Application::Run(% form);
		return 0;
	}
}