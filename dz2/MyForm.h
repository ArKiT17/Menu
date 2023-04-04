#pragma once
#include "MainForm.h"
namespace dz2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MyForm;
	ref class MainForm;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(MainForm^ mf)
		{
			InitializeComponent();
			mForm = mf;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		MainForm^ mForm;
		int numM = 0, numJ = 0, numL = 0, numG = 0;

	private: System::Windows::Forms::CheckBox^ checkMohito;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureMohito;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkJuice;
	private: System::Windows::Forms::PictureBox^ pictureJuice;

	private: System::Windows::Forms::CheckBox^ checkLemonade;
	private: System::Windows::Forms::PictureBox^ pictureLemonade;

	private: System::Windows::Forms::CheckBox^ checkGas;
	private: System::Windows::Forms::RadioButton^ radioFanta;
	private: System::Windows::Forms::RadioButton^ radioSprite;
	private: System::Windows::Forms::RadioButton^ radioCola;

	private: System::Windows::Forms::PictureBox^ pictureFanta;
	private: System::Windows::Forms::PictureBox^ pictureSprite;
	private: System::Windows::Forms::PictureBox^ pictureCola;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ suma;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMohito;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownJuice;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownLemonade;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownGas;
	public: System::Windows::Forms::ProgressBar^ progressBar2;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->checkMohito = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureMohito = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkJuice = (gcnew System::Windows::Forms::CheckBox());
			this->pictureJuice = (gcnew System::Windows::Forms::PictureBox());
			this->checkLemonade = (gcnew System::Windows::Forms::CheckBox());
			this->pictureLemonade = (gcnew System::Windows::Forms::PictureBox());
			this->checkGas = (gcnew System::Windows::Forms::CheckBox());
			this->radioFanta = (gcnew System::Windows::Forms::RadioButton());
			this->radioSprite = (gcnew System::Windows::Forms::RadioButton());
			this->radioCola = (gcnew System::Windows::Forms::RadioButton());
			this->pictureFanta = (gcnew System::Windows::Forms::PictureBox());
			this->pictureSprite = (gcnew System::Windows::Forms::PictureBox());
			this->pictureCola = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->suma = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDownMohito = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownJuice = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownLemonade = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownGas = (gcnew System::Windows::Forms::NumericUpDown());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMohito))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureJuice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLemonade))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFanta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSprite))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureCola))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMohito))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownJuice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLemonade))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownGas))->BeginInit();
			this->SuspendLayout();
			this->checkMohito->AutoSize = true;
			this->checkMohito->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->checkMohito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkMohito->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->checkMohito->Location = System::Drawing::Point(240, 144);
			this->checkMohito->Name = L"checkMohito";
			this->checkMohito->Size = System::Drawing::Size(125, 36);
			this->checkMohito->TabIndex = 2;
			this->checkMohito->Text = L"Мохіто";
			this->checkMohito->UseVisualStyleBackColor = false;
			this->checkMohito->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkMohito_CheckedChanged);
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(206)), static_cast<System::Int32>(static_cast<System::Byte>(248)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label1->Location = System::Drawing::Point(192, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Напої";
			this->pictureMohito->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureMohito.Image")));
			this->pictureMohito->Location = System::Drawing::Point(376, 96);
			this->pictureMohito->Name = L"pictureMohito";
			this->pictureMohito->Size = System::Drawing::Size(144, 136);
			this->pictureMohito->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureMohito->TabIndex = 1;
			this->pictureMohito->TabStop = false;
			this->pictureMohito->Visible = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(544, 800);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->checkJuice->AutoSize = true;
			this->checkJuice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->checkJuice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkJuice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->checkJuice->Location = System::Drawing::Point(240, 304);
			this->checkJuice->Name = L"checkJuice";
			this->checkJuice->Size = System::Drawing::Size(87, 42);
			this->checkJuice->TabIndex = 5;
			this->checkJuice->Text = L"Сік";
			this->checkJuice->UseVisualStyleBackColor = false;
			this->checkJuice->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkJuice_CheckedChanged);
			this->pictureJuice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureJuice.Image")));
			this->pictureJuice->Location = System::Drawing::Point(376, 248);
			this->pictureJuice->Name = L"pictureJuice";
			this->pictureJuice->Size = System::Drawing::Size(144, 168);
			this->pictureJuice->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureJuice->TabIndex = 4;
			this->pictureJuice->TabStop = false;
			this->pictureJuice->Visible = false;
			this->checkLemonade->AutoSize = true;
			this->checkLemonade->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->checkLemonade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkLemonade->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->checkLemonade->Location = System::Drawing::Point(216, 480);
			this->checkLemonade->Name = L"checkLemonade";
			this->checkLemonade->Size = System::Drawing::Size(156, 36);
			this->checkLemonade->TabIndex = 7;
			this->checkLemonade->Text = L"Лимонад";
			this->checkLemonade->UseVisualStyleBackColor = false;
			this->checkLemonade->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkLemonade_CheckedChanged);
			this->pictureLemonade->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureLemonade.Image")));
			this->pictureLemonade->Location = System::Drawing::Point(376, 432);
			this->pictureLemonade->Name = L"pictureLemonade";
			this->pictureLemonade->Size = System::Drawing::Size(144, 160);
			this->pictureLemonade->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureLemonade->TabIndex = 6;
			this->pictureLemonade->TabStop = false;
			this->pictureLemonade->Visible = false;
			this->checkGas->AutoSize = true;
			this->checkGas->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->checkGas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkGas->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->checkGas->Location = System::Drawing::Point(24, 136);
			this->checkGas->Name = L"checkGas";
			this->checkGas->Size = System::Drawing::Size(152, 36);
			this->checkGas->TabIndex = 8;
			this->checkGas->Text = L"Газовані";
			this->checkGas->UseVisualStyleBackColor = false;
			this->checkGas->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkGas_CheckedChanged);
			this->radioFanta->AutoSize = true;
			this->radioFanta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->radioFanta->Enabled = false;
			this->radioFanta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioFanta->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->radioFanta->Location = System::Drawing::Point(16, 200);
			this->radioFanta->Name = L"radioFanta";
			this->radioFanta->Size = System::Drawing::Size(83, 29);
			this->radioFanta->TabIndex = 9;
			this->radioFanta->TabStop = true;
			this->radioFanta->Text = L"Fanta";
			this->radioFanta->UseVisualStyleBackColor = false;
			this->radioFanta->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioFanta_CheckedChanged);
			this->radioSprite->AutoSize = true;
			this->radioSprite->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->radioSprite->Enabled = false;
			this->radioSprite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioSprite->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->radioSprite->Location = System::Drawing::Point(16, 296);
			this->radioSprite->Name = L"radioSprite";
			this->radioSprite->Size = System::Drawing::Size(84, 29);
			this->radioSprite->TabIndex = 10;
			this->radioSprite->TabStop = true;
			this->radioSprite->Text = L"Sprite";
			this->radioSprite->UseVisualStyleBackColor = false;
			this->radioSprite->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioSprite_CheckedChanged);
			this->radioCola->AutoSize = true;
			this->radioCola->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->radioCola->Enabled = false;
			this->radioCola->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioCola->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->radioCola->Location = System::Drawing::Point(16, 392);
			this->radioCola->Name = L"radioCola";
			this->radioCola->Size = System::Drawing::Size(128, 29);
			this->radioCola->TabIndex = 11;
			this->radioCola->TabStop = true;
			this->radioCola->Text = L"Coca-Cola";
			this->radioCola->UseVisualStyleBackColor = false;
			this->radioCola->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioCola_CheckedChanged);
			this->pictureFanta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureFanta.Image")));
			this->pictureFanta->Location = System::Drawing::Point(128, 192);
			this->pictureFanta->Name = L"pictureFanta";
			this->pictureFanta->Size = System::Drawing::Size(72, 192);
			this->pictureFanta->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureFanta->TabIndex = 12;
			this->pictureFanta->TabStop = false;
			this->pictureFanta->Visible = false;
			this->pictureSprite->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureSprite.Image")));
			this->pictureSprite->Location = System::Drawing::Point(128, 192);
			this->pictureSprite->Name = L"pictureSprite";
			this->pictureSprite->Size = System::Drawing::Size(72, 192);
			this->pictureSprite->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureSprite->TabIndex = 13;
			this->pictureSprite->TabStop = false;
			this->pictureSprite->Visible = false;
			this->pictureCola->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureCola.Image")));
			this->pictureCola->Location = System::Drawing::Point(128, 192);
			this->pictureCola->Name = L"pictureCola";
			this->pictureCola->Size = System::Drawing::Size(72, 192);
			this->pictureCola->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureCola->TabIndex = 14;
			this->pictureCola->TabStop = false;
			this->pictureCola->Visible = false;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label2->Location = System::Drawing::Point(288, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 25);
			this->label2->TabIndex = 15;
			this->label2->Text = L"40 грн";
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label3->Location = System::Drawing::Point(288, 344);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 25);
			this->label3->TabIndex = 16;
			this->label3->Text = L"20 грн";
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label4->Location = System::Drawing::Point(296, 512);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 25);
			this->label4->TabIndex = 17;
			this->label4->Text = L"35 грн";
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label5->Location = System::Drawing::Point(72, 416);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 25);
			this->label5->TabIndex = 18;
			this->label5->Text = L"15 грн";
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label6->Location = System::Drawing::Point(32, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 25);
			this->label6->TabIndex = 19;
			this->label6->Text = L"15 грн";
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->label7->Location = System::Drawing::Point(32, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 25);
			this->label7->TabIndex = 20;
			this->label7->Text = L"15 грн";
			this->suma->AutoSize = true;
			this->suma->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(179)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->suma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->suma->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->suma->Location = System::Drawing::Point(112, 568);
			this->suma->Name = L"suma";
			this->suma->Size = System::Drawing::Size(133, 36);
			this->suma->TabIndex = 21;
			this->suma->Text = L"Сума: 0";
			this->suma->Click += gcnew System::EventHandler(this, &MyForm::suma_Click);
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(94)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(247)),
				static_cast<System::Int32>(static_cast<System::Byte>(251)));
			this->button1->Location = System::Drawing::Point(328, 608);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 40);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Повернутись";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonresult_Click);
			this->numericUpDownMohito->Enabled = false;
			this->numericUpDownMohito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownMohito->Location = System::Drawing::Point(240, 176);
			this->numericUpDownMohito->Name = L"numericUpDownMohito";
			this->numericUpDownMohito->ReadOnly = true;
			this->numericUpDownMohito->Size = System::Drawing::Size(48, 28);
			this->numericUpDownMohito->TabIndex = 23;
			this->numericUpDownMohito->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			this->numericUpDownJuice->Enabled = false;
			this->numericUpDownJuice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownJuice->Location = System::Drawing::Point(240, 344);
			this->numericUpDownJuice->Name = L"numericUpDownJuice";
			this->numericUpDownJuice->ReadOnly = true;
			this->numericUpDownJuice->Size = System::Drawing::Size(48, 28);
			this->numericUpDownJuice->TabIndex = 24;
			this->numericUpDownJuice->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			this->numericUpDownLemonade->Enabled = false;
			this->numericUpDownLemonade->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->numericUpDownLemonade->Location = System::Drawing::Point(240, 512);
			this->numericUpDownLemonade->Name = L"numericUpDownLemonade";
			this->numericUpDownLemonade->ReadOnly = true;
			this->numericUpDownLemonade->Size = System::Drawing::Size(48, 28);
			this->numericUpDownLemonade->TabIndex = 25;
			this->numericUpDownLemonade->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			this->numericUpDownGas->Enabled = false;
			this->numericUpDownGas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownGas->Location = System::Drawing::Point(152, 400);
			this->numericUpDownGas->Name = L"numericUpDownGas";
			this->numericUpDownGas->ReadOnly = true;
			this->numericUpDownGas->Size = System::Drawing::Size(48, 28);
			this->numericUpDownGas->TabIndex = 26;
			this->numericUpDownGas->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown_ValueChanged);
			this->progressBar2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->progressBar2->Location = System::Drawing::Point(0, 777);
			this->progressBar2->Maximum = 60;
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(536, 23);
			this->progressBar2->Step = 1;
			this->progressBar2->TabIndex = 27;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(536, 800);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->numericUpDownGas);
			this->Controls->Add(this->numericUpDownLemonade);
			this->Controls->Add(this->numericUpDownJuice);
			this->Controls->Add(this->numericUpDownMohito);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->suma);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureCola);
			this->Controls->Add(this->pictureSprite);
			this->Controls->Add(this->pictureFanta);
			this->Controls->Add(this->radioCola);
			this->Controls->Add(this->radioSprite);
			this->Controls->Add(this->radioFanta);
			this->Controls->Add(this->checkGas);
			this->Controls->Add(this->pictureLemonade);
			this->Controls->Add(this->checkLemonade);
			this->Controls->Add(this->checkJuice);
			this->Controls->Add(this->pictureJuice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkMohito);
			this->Controls->Add(this->pictureMohito);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Напої";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureMohito))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureJuice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLemonade))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureFanta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureSprite))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureCola))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMohito))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownJuice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLemonade))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownGas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkGas_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkGas->Checked) {
			radioFanta->Enabled = true;
			radioSprite->Enabled = true;
			radioCola->Enabled = true;
		}
		else {
			radioFanta->Enabled = false;
			radioSprite->Enabled = false;
			radioCola->Enabled = false;

			radioFanta->Checked = false;
			radioSprite->Checked = false;
			radioCola->Checked = false;
		}

	}
private: System::Void checkMohito_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureMohito->Visible = !pictureMohito->Visible;
	if (checkMohito->Checked) {
		numericUpDownMohito->Enabled = true;
		numericUpDownMohito->Value = 1;
	}
	else {
		numericUpDownMohito->Enabled = false;
		numericUpDownMohito->Value = 0;
		setSum(-(numM * 40));
		numM = 0;
	}
	suma->Text = "Сума: " + getSum() + " грн";

}
private: System::Void checkJuice_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureJuice->Visible = !pictureJuice->Visible;
	if (checkJuice->Checked) {
		numericUpDownJuice->Enabled = true;
		numericUpDownJuice->Value = 1;
	}
	else {
		numericUpDownJuice->Enabled = false;
		numericUpDownJuice->Value = 0;
		setSum(-(numJ * 20));
		numJ = 0;
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
private: System::Void checkLemonade_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureLemonade->Visible = !pictureLemonade->Visible;
	if (checkLemonade->Checked) {
		numericUpDownLemonade->Enabled = true;
		numericUpDownLemonade->Value = 1;
	}
	else {
		numericUpDownLemonade->Enabled = false;
		numericUpDownLemonade->Value = 0;
		setSum(-(numL * 35));
		numL = 0;
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
private: System::Void radioFanta_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureFanta->Visible = !pictureFanta->Visible;
	if (radioFanta->Checked) {
		numericUpDownGas->Enabled = true;
		numericUpDownGas->Value = 1;
	}
	else {
		numericUpDownGas->Enabled = false;
		numericUpDownGas->Value = 0;
		setSum(-(numG * 15));
		numG = 0;
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
private: System::Void radioSprite_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureSprite->Visible = !pictureSprite->Visible;
	if (radioSprite->Checked){
		numericUpDownGas->Enabled = true;
		numericUpDownGas->Value = 1;
	}
	else {
		numericUpDownGas->Enabled = false;
		numericUpDownGas->Value = 0;
		setSum(-(numG * 15));
		numG = 0;
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
private: System::Void radioCola_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureCola->Visible = !pictureCola->Visible;
	if (radioCola->Checked){
		numericUpDownGas->Enabled = true;
		numericUpDownGas->Value = 1;
	}
	else {
		numericUpDownGas->Enabled = false;
		numericUpDownGas->Value = 0;
		setSum(-(numG * 15));
		numG = 0;
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
private: System::Void buttonresult_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm::setSum(double number);
private: System::Void MyForm::setTime(int number);
private: double MyForm::getSum();
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Application::Exit();
}
private: System::Void numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	NumericUpDown^ n = safe_cast<NumericUpDown^>(sender);
	if (n == numericUpDownMohito) {
		if (numM < numericUpDownMohito->Value) {
			setSum(40);
			numM++;
		}
		else {
			setSum(-40);
			numM--;
		}
	}
	if (n == numericUpDownJuice) {
		if (numJ < numericUpDownJuice->Value) {
			setSum(20);
			numJ++;
		}
		else {
			setSum(-20);
			numJ--;
		}
	}
	if (n == numericUpDownLemonade) {
		if (numL < numericUpDownLemonade->Value) {
			setSum(35);
			numL++;
		}
		else {
			setSum(-35);
			numL--;
		}
	}
	if (n == numericUpDownGas) {
		if (numG < numericUpDownGas->Value) {
			setSum(15);
			numG++;
		}
		else {
			setSum(-15);
			numG--;
		}
	}
	suma->Text = "Сума: " + getSum() + " грн";
}
private: System::Void suma_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}