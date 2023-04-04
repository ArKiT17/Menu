#include "MainForm.h"
#include "Food.h"

namespace dz2 {
	System::Void Food::buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
		Visible = false;
		mForm->Visible = true;
		mForm->ShowInTaskbar = true;
		mForm->label4->Visible = true;
		mForm->label4->Text = "—ума: " + mForm->sum + " грн";
	}

	System::Void Food::setSum(double number) {
		mForm->sum += number;
	}

	double Food::getSum() {
		return mForm->sum;
	}

	System::Void Food::setTime(int number) {
		mForm->time += number;
	}
}