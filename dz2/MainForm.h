#pragma once
#include "MyForm.h"
#include "Food.h"
namespace dz2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			timer1->Start();
		}
	public:
		double sum = 0;
		int time = 0;

	public:
		MyForm^ drinks = nullptr;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ProgressBar^ progressBar;

	public:
		Food^ food = nullptr;

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button3;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(232, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(579, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Виберіть категорію";
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(360, 496);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(64, 136);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 496);
			this->panel1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Moccasin;
			this->label2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(158)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->label2->Location = System::Drawing::Point(0, 454);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 42);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Напої";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(640, 136);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(360, 496);
			this->panel2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(225)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->label3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(167)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(8)));
			this->label3->Location = System::Drawing::Point(0, 454);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(360, 42);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Закуски";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(360, 496);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button3->Location = System::Drawing::Point(464, 272);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 120);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Оплатити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(197)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FloralWhite;
			this->label4->Location = System::Drawing::Point(440, 176);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 64);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Сума:  грн";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1070, 665);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// progressBar
			// 
			this->progressBar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->progressBar->Location = System::Drawing::Point(0, 642);
			this->progressBar->Maximum = 60;
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(1070, 23);
			this->progressBar->Step = 1;
			this->progressBar->TabIndex = 7;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1070, 665);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"Меню";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Visible = false;
	ShowInTaskbar = false;
	if (!drinks) {
		drinks = gcnew MyForm(this);
		drinks->Show();
	}
	else
		drinks->Visible = true;
	button3->Enabled = true;
	drinks->suma->Text = "Cума: " + sum.ToString() + " грн";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Visible = false;
	ShowInTaskbar = false;
	if (!food) {
		food = gcnew Food(this);
		food->Show();
	}
	else
		food->Visible = true;
	button3->Enabled = true;
	food->suma->Text = "Cума: " + sum.ToString() + " грн";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Stop();
	System::String^ timeStr = "" + (time > 60) ? "" + time / 60 + ":" + time % 60 : "" + time;
	System::String^ text = "Ваш заказ становить " + sum + " грн\nВитрачений час - " + time + " с";
	MessageBox::Show(text, "Чек", MessageBoxButtons::OK);
	Application::Exit();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (time <= 60) {
		progressBar->Value = time;
		if (food)
			food->progressBar1->Value = time;
		if (drinks)
			drinks->progressBar2->Value = time;
		time++;
	}
	else {
		timer1->Stop();
		MessageBox::Show("Ви не встигли зробити замовлення :(", "Час вичерпано", MessageBoxButtons::OK);
		Application::Exit();
	}
}
};
}
