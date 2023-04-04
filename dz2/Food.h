#pragma once
#include "MainForm.h"
namespace dz2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Food
	/// </summary>
	public ref class Food : public System::Windows::Forms::Form
	{
	public:
		Food(MainForm^ mf)
		{
			InitializeComponent();
			mForm = mf;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Food()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		MainForm^ mForm;
		int numK = 0, numN = 0, numC = 0;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownKalmar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBoxKalmar;

	private: System::Windows::Forms::PictureBox^ pictureKalmar;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownNuggets;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBoxNuggets;
	private: System::Windows::Forms::PictureBox^ pictureBoxNuggets;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCheese;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBoxCheese;
	private: System::Windows::Forms::Button^ buttonResult;



	public: System::Windows::Forms::Label^ suma;
	private: System::Windows::Forms::PictureBox^ pictureBoxCheese;
	public: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Food::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDownKalmar = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxKalmar = (gcnew System::Windows::Forms::CheckBox());
			this->pictureKalmar = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDownNuggets = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBoxNuggets = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBoxNuggets = (gcnew System::Windows::Forms::PictureBox());
			this->numericUpDownCheese = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBoxCheese = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBoxCheese = (gcnew System::Windows::Forms::PictureBox());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->suma = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownKalmar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKalmar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNuggets))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNuggets))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCheese))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheese))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(72, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Закуски";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(935, 624);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// numericUpDownKalmar
			// 
			this->numericUpDownKalmar->Enabled = false;
			this->numericUpDownKalmar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownKalmar->Location = System::Drawing::Point(544, 104);
			this->numericUpDownKalmar->Name = L"numericUpDownKalmar";
			this->numericUpDownKalmar->ReadOnly = true;
			this->numericUpDownKalmar->Size = System::Drawing::Size(48, 28);
			this->numericUpDownKalmar->TabIndex = 27;
			this->numericUpDownKalmar->ValueChanged += gcnew System::EventHandler(this, &Food::numericUpDown_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(600, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 25);
			this->label2->TabIndex = 26;
			this->label2->Text = L"70 грн";
			// 
			// checkBoxKalmar
			// 
			this->checkBoxKalmar->AutoSize = true;
			this->checkBoxKalmar->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxKalmar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxKalmar->ForeColor = System::Drawing::Color::Red;
			this->checkBoxKalmar->Location = System::Drawing::Point(528, 64);
			this->checkBoxKalmar->Name = L"checkBoxKalmar";
			this->checkBoxKalmar->Size = System::Drawing::Size(161, 36);
			this->checkBoxKalmar->TabIndex = 25;
			this->checkBoxKalmar->Text = L"Кальмар";
			this->checkBoxKalmar->UseVisualStyleBackColor = false;
			this->checkBoxKalmar->CheckedChanged += gcnew System::EventHandler(this, &Food::check_CheckedChanged);
			// 
			// pictureKalmar
			// 
			this->pictureKalmar->BackColor = System::Drawing::Color::Transparent;
			this->pictureKalmar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureKalmar.Image")));
			this->pictureKalmar->Location = System::Drawing::Point(688, 24);
			this->pictureKalmar->Name = L"pictureKalmar";
			this->pictureKalmar->Size = System::Drawing::Size(224, 128);
			this->pictureKalmar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureKalmar->TabIndex = 24;
			this->pictureKalmar->TabStop = false;
			this->pictureKalmar->Visible = false;
			// 
			// numericUpDownNuggets
			// 
			this->numericUpDownNuggets->Enabled = false;
			this->numericUpDownNuggets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownNuggets->Location = System::Drawing::Point(544, 248);
			this->numericUpDownNuggets->Name = L"numericUpDownNuggets";
			this->numericUpDownNuggets->ReadOnly = true;
			this->numericUpDownNuggets->Size = System::Drawing::Size(48, 28);
			this->numericUpDownNuggets->TabIndex = 31;
			this->numericUpDownNuggets->ValueChanged += gcnew System::EventHandler(this, &Food::numericUpDown_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(600, 248);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 25);
			this->label3->TabIndex = 30;
			this->label3->Text = L"65 грн";
			// 
			// checkBoxNuggets
			// 
			this->checkBoxNuggets->AutoSize = true;
			this->checkBoxNuggets->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxNuggets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxNuggets->ForeColor = System::Drawing::Color::Red;
			this->checkBoxNuggets->Location = System::Drawing::Point(528, 208);
			this->checkBoxNuggets->Name = L"checkBoxNuggets";
			this->checkBoxNuggets->Size = System::Drawing::Size(149, 36);
			this->checkBoxNuggets->TabIndex = 29;
			this->checkBoxNuggets->Text = L"Нагетси";
			this->checkBoxNuggets->UseVisualStyleBackColor = false;
			this->checkBoxNuggets->CheckedChanged += gcnew System::EventHandler(this, &Food::check_CheckedChanged);
			// 
			// pictureBoxNuggets
			// 
			this->pictureBoxNuggets->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxNuggets->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxNuggets.Image")));
			this->pictureBoxNuggets->Location = System::Drawing::Point(688, 168);
			this->pictureBoxNuggets->Name = L"pictureBoxNuggets";
			this->pictureBoxNuggets->Size = System::Drawing::Size(224, 152);
			this->pictureBoxNuggets->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxNuggets->TabIndex = 28;
			this->pictureBoxNuggets->TabStop = false;
			this->pictureBoxNuggets->Visible = false;
			// 
			// numericUpDownCheese
			// 
			this->numericUpDownCheese->Enabled = false;
			this->numericUpDownCheese->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownCheese->Location = System::Drawing::Point(544, 384);
			this->numericUpDownCheese->Name = L"numericUpDownCheese";
			this->numericUpDownCheese->ReadOnly = true;
			this->numericUpDownCheese->Size = System::Drawing::Size(48, 28);
			this->numericUpDownCheese->TabIndex = 35;
			this->numericUpDownCheese->ValueChanged += gcnew System::EventHandler(this, &Food::numericUpDown_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(600, 384);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 25);
			this->label4->TabIndex = 34;
			this->label4->Text = L"50 грн";
			// 
			// checkBoxCheese
			// 
			this->checkBoxCheese->AutoSize = true;
			this->checkBoxCheese->BackColor = System::Drawing::Color::Transparent;
			this->checkBoxCheese->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBoxCheese->ForeColor = System::Drawing::Color::Red;
			this->checkBoxCheese->Location = System::Drawing::Point(472, 344);
			this->checkBoxCheese->Name = L"checkBoxCheese";
			this->checkBoxCheese->Size = System::Drawing::Size(219, 36);
			this->checkBoxCheese->TabIndex = 33;
			this->checkBoxCheese->Text = L"Сирні кульки";
			this->checkBoxCheese->UseVisualStyleBackColor = false;
			this->checkBoxCheese->CheckedChanged += gcnew System::EventHandler(this, &Food::check_CheckedChanged);
			// 
			// pictureBoxCheese
			// 
			this->pictureBoxCheese->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxCheese->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCheese.Image")));
			this->pictureBoxCheese->Location = System::Drawing::Point(688, 344);
			this->pictureBoxCheese->Name = L"pictureBoxCheese";
			this->pictureBoxCheese->Size = System::Drawing::Size(224, 112);
			this->pictureBoxCheese->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBoxCheese->TabIndex = 32;
			this->pictureBoxCheese->TabStop = false;
			this->pictureBoxCheese->Visible = false;
			// 
			// buttonResult
			// 
			this->buttonResult->BackColor = System::Drawing::Color::Red;
			this->buttonResult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonResult->ForeColor = System::Drawing::Color::White;
			this->buttonResult->Location = System::Drawing::Point(720, 544);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(176, 40);
			this->buttonResult->TabIndex = 37;
			this->buttonResult->Text = L"Повернутись";
			this->buttonResult->UseVisualStyleBackColor = false;
			this->buttonResult->Click += gcnew System::EventHandler(this, &Food::buttonResult_Click);
			// 
			// suma
			// 
			this->suma->AutoSize = true;
			this->suma->BackColor = System::Drawing::Color::Transparent;
			this->suma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->suma->ForeColor = System::Drawing::Color::Salmon;
			this->suma->Location = System::Drawing::Point(640, 488);
			this->suma->Name = L"suma";
			this->suma->Size = System::Drawing::Size(133, 36);
			this->suma->TabIndex = 36;
			this->suma->Text = L"Сума: 0";
			// 
			// progressBar1
			// 
			this->progressBar1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->progressBar1->Location = System::Drawing::Point(0, 601);
			this->progressBar1->Maximum = 60;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(935, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 38;
			// 
			// Food
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(935, 624);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->suma);
			this->Controls->Add(this->numericUpDownCheese);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBoxCheese);
			this->Controls->Add(this->pictureBoxCheese);
			this->Controls->Add(this->numericUpDownNuggets);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBoxNuggets);
			this->Controls->Add(this->pictureBoxNuggets);
			this->Controls->Add(this->numericUpDownKalmar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBoxKalmar);
			this->Controls->Add(this->pictureKalmar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Food";
			this->Text = L"Закуски";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Food::Food_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownKalmar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureKalmar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownNuggets))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNuggets))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCheese))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCheese))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Food_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	Application::Exit();
}
private: System::Void check_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	CheckBox^ cb = safe_cast<CheckBox^>(sender);
	if (cb == checkBoxKalmar) {
		pictureKalmar->Visible = !pictureKalmar->Visible;
		if (checkBoxKalmar->Checked) {
			numericUpDownKalmar->Enabled = true;
			numericUpDownKalmar->Value = 1;
		}
		else {
			numericUpDownKalmar->Enabled = false;
			numericUpDownKalmar->Value = 0;
			setSum(-(numK * 70));
			numK = 0;
		}
		suma->Text = "Сума: " + getSum() + " грн";
	}
	if (cb == checkBoxNuggets) {
		pictureBoxNuggets->Visible = !pictureBoxNuggets->Visible;
		if (checkBoxNuggets->Checked) {
			numericUpDownNuggets->Enabled = true;
			numericUpDownNuggets->Value = 1;
		}
		else {
			numericUpDownNuggets->Enabled = false;
			numericUpDownNuggets->Value = 0;
			setSum(-(numN * 65));
			numN = 0;
		}
		suma->Text = "Сума: " + getSum() + " грн";
	}
	if (cb == checkBoxCheese) {
		pictureBoxCheese->Visible = !pictureBoxCheese->Visible;
		if (checkBoxCheese->Checked) {
			numericUpDownCheese->Enabled = true;
			numericUpDownCheese->Value = 1;
		}
		else {
			numericUpDownCheese->Enabled = false;
			numericUpDownCheese->Value = 0;
			setSum(-(numC * 50));
			numC = 0;
		}
		suma->Text = "Сума: " + getSum() + " грн";
	}
}
private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Food::setSum(double number);
private: double Food::getSum();
private: System::Void Food::setTime(int number);

private: System::Void numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	NumericUpDown^ n = safe_cast<NumericUpDown^>(sender);
	if (n == numericUpDownKalmar) {
		if (numK < numericUpDownKalmar->Value) {
			setSum(70);
			numK++;
		}
		else {
			setSum(-70);
			numK--;
		}
	}
	if (n == numericUpDownNuggets) {
		if (numN < numericUpDownNuggets->Value) {
			setSum(65);
			numN++;
		}
		else {
			setSum(-65);
			numN--;
		}
	}
	if (n == numericUpDownCheese) {
		if (numC < numericUpDownCheese->Value) {
			setSum(50);
			numC++;
		}
		else {
			setSum(-50);
			numC--;
		}
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
};
}
