#pragma once
#include "Header.h"

namespace Project11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
    private: System::Windows::Forms::Button^ btnGen;
    protected:

    protected:



    private: System::Windows::Forms::Label^ lblB;
    private: System::Windows::Forms::Label^ lblA;
    private: System::Windows::Forms::TextBox^ txtBoxB;

    private: System::Windows::Forms::TextBox^ txtBoxA;


    private: System::Windows::Forms::Label^ lblRange;
    private: System::Windows::Forms::Label^ lblSize;

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ btnExit;
    private: System::Windows::Forms::Button^ btnTask;


    private: System::Windows::Forms::Label^ lblArray2;
    private: System::Windows::Forms::Label^ lblArray1;
    private: System::Windows::Forms::Label^ lblTask;
    private: System::Windows::Forms::TextBox^ txtBoxN;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ txtBoxM;

    private: System::Windows::Forms::Label^ label3;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;



    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel7;
    private: System::Windows::Forms::RichTextBox^ rchTxtBox2;
    private: System::Windows::Forms::RichTextBox^ rchTxtBox1;

    private:


    private:

    private:

    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;









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
            this->btnGen = (gcnew System::Windows::Forms::Button());
            this->lblB = (gcnew System::Windows::Forms::Label());
            this->lblA = (gcnew System::Windows::Forms::Label());
            this->txtBoxB = (gcnew System::Windows::Forms::TextBox());
            this->txtBoxA = (gcnew System::Windows::Forms::TextBox());
            this->lblRange = (gcnew System::Windows::Forms::Label());
            this->lblSize = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->btnExit = (gcnew System::Windows::Forms::Button());
            this->btnTask = (gcnew System::Windows::Forms::Button());
            this->lblArray2 = (gcnew System::Windows::Forms::Label());
            this->lblArray1 = (gcnew System::Windows::Forms::Label());
            this->lblTask = (gcnew System::Windows::Forms::Label());
            this->txtBoxN = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txtBoxM = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->rchTxtBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->rchTxtBox2 = (gcnew System::Windows::Forms::RichTextBox());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel7 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel5->SuspendLayout();
            this->tableLayoutPanel6->SuspendLayout();
            this->tableLayoutPanel7->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // btnGen
            // 
            this->btnGen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->btnGen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
                static_cast<System::Int32>(static_cast<System::Byte>(155)));
            this->btnGen->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnGen->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->btnGen->Location = System::Drawing::Point(5, 3);
            this->btnGen->Name = L"btnGen";
            this->btnGen->Size = System::Drawing::Size(142, 103);
            this->btnGen->TabIndex = 44;
            this->btnGen->Text = L"Генерация";
            this->btnGen->UseVisualStyleBackColor = false;
            this->btnGen->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // lblB
            // 
            this->lblB->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->lblB->AutoSize = true;
            this->lblB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblB->Location = System::Drawing::Point(180, 10);
            this->lblB->Name = L"lblB";
            this->lblB->Size = System::Drawing::Size(65, 23);
            this->lblB->TabIndex = 42;
            this->lblB->Text = L"Конец";
            // 
            // lblA
            // 
            this->lblA->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->lblA->AutoSize = true;
            this->lblA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblA->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblA->Location = System::Drawing::Point(3, 10);
            this->lblA->Name = L"lblA";
            this->lblA->Size = System::Drawing::Size(74, 23);
            this->lblA->TabIndex = 41;
            this->lblA->Text = L"Начало";
            // 
            // txtBoxB
            // 
            this->txtBoxB->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtBoxB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(178)));
            this->txtBoxB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtBoxB->Location = System::Drawing::Point(251, 6);
            this->txtBoxB->Name = L"txtBoxB";
            this->txtBoxB->Size = System::Drawing::Size(71, 32);
            this->txtBoxB->TabIndex = 40;
            this->txtBoxB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // txtBoxA
            // 
            this->txtBoxA->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtBoxA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(178)));
            this->txtBoxA->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtBoxA->Location = System::Drawing::Point(83, 6);
            this->txtBoxA->Name = L"txtBoxA";
            this->txtBoxA->Size = System::Drawing::Size(71, 32);
            this->txtBoxA->TabIndex = 39;
            this->txtBoxA->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lblRange
            // 
            this->lblRange->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->lblRange->AutoSize = true;
            this->lblRange->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblRange->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblRange->Location = System::Drawing::Point(41, 13);
            this->lblRange->Name = L"lblRange";
            this->lblRange->Size = System::Drawing::Size(248, 23);
            this->lblRange->TabIndex = 37;
            this->lblRange->Text = L"Диапазон случайных чисел";
            // 
            // lblSize
            // 
            this->lblSize->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->lblSize->AutoSize = true;
            this->lblSize->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblSize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblSize->Location = System::Drawing::Point(128, 13);
            this->lblSize->Name = L"lblSize";
            this->lblSize->Size = System::Drawing::Size(240, 23);
            this->lblSize->TabIndex = 36;
            this->lblSize->Text = L"Размер исходной матрицы";
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->label1->AutoSize = true;
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->label1->Location = System::Drawing::Point(15, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(911, 44);
            this->label1->TabIndex = 34;
            this->label1->Text = resources->GetString(L"label1.Text");
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // btnExit
            // 
            this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
                static_cast<System::Int32>(static_cast<System::Byte>(155)));
            this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->btnExit->Location = System::Drawing::Point(4, 224);
            this->btnExit->Name = L"btnExit";
            this->btnExit->Size = System::Drawing::Size(143, 104);
            this->btnExit->TabIndex = 33;
            this->btnExit->Text = L"Выход";
            this->btnExit->UseVisualStyleBackColor = false;
            this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
            // 
            // btnTask
            // 
            this->btnTask->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
            this->btnTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(68)),
                static_cast<System::Int32>(static_cast<System::Byte>(155)));
            this->btnTask->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btnTask->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->btnTask->Location = System::Drawing::Point(4, 112);
            this->btnTask->Name = L"btnTask";
            this->btnTask->Size = System::Drawing::Size(143, 106);
            this->btnTask->TabIndex = 32;
            this->btnTask->Text = L"Решение";
            this->btnTask->UseVisualStyleBackColor = false;
            this->btnTask->Click += gcnew System::EventHandler(this, &MyForm::btnTask_Click);
            // 
            // lblArray2
            // 
            this->lblArray2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->lblArray2->AutoSize = true;
            this->lblArray2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblArray2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblArray2->Location = System::Drawing::Point(461, 0);
            this->lblArray2->Name = L"lblArray2";
            this->lblArray2->Size = System::Drawing::Size(192, 23);
            this->lblArray2->TabIndex = 29;
            this->lblArray2->Text = L"Полученная матрица";
            // 
            // lblArray1
            // 
            this->lblArray1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->lblArray1->AutoSize = true;
            this->lblArray1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblArray1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblArray1->Location = System::Drawing::Point(94, 0);
            this->lblArray1->Name = L"lblArray1";
            this->lblArray1->Size = System::Drawing::Size(170, 23);
            this->lblArray1->TabIndex = 28;
            this->lblArray1->Text = L"Исходная матрица";
            // 
            // lblTask
            // 
            this->lblTask->AutoSize = true;
            this->lblTask->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblTask->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lblTask->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->lblTask->Location = System::Drawing::Point(-24, -13);
            this->lblTask->Name = L"lblTask";
            this->lblTask->Size = System::Drawing::Size(2, 23);
            this->lblTask->TabIndex = 27;
            this->lblTask->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // txtBoxN
            // 
            this->txtBoxN->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtBoxN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(178)));
            this->txtBoxN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtBoxN->Location = System::Drawing::Point(419, 6);
            this->txtBoxN->Name = L"txtBoxN";
            this->txtBoxN->Size = System::Drawing::Size(71, 32);
            this->txtBoxN->TabIndex = 48;
            this->txtBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->label2->Location = System::Drawing::Point(246, 10);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(167, 23);
            this->label2->TabIndex = 47;
            this->label2->Text = L"Число столбцов n";
            // 
            // txtBoxM
            // 
            this->txtBoxM->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->txtBoxM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(178)));
            this->txtBoxM->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->txtBoxM->Location = System::Drawing::Point(149, 6);
            this->txtBoxM->Name = L"txtBoxM";
            this->txtBoxM->Size = System::Drawing::Size(71, 32);
            this->txtBoxM->TabIndex = 50;
            this->txtBoxM->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // label3
            // 
            this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(221)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
                static_cast<System::Int32>(static_cast<System::Byte>(244)));
            this->label3->Location = System::Drawing::Point(3, 10);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(140, 23);
            this->label3->TabIndex = 49;
            this->label3->Text = L"Число строк m";
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->ColumnCount = 3;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50)));
            this->tableLayoutPanel1->Controls->Add(this->lblArray2, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->lblArray1, 0, 0);
            this->tableLayoutPanel1->Controls->Add(this->rchTxtBox1, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->rchTxtBox2, 2, 1);
            this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
            this->tableLayoutPanel1->Location = System::Drawing::Point(15, 184);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 2;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel1->Size = System::Drawing::Size(737, 352);
            this->tableLayoutPanel1->TabIndex = 52;
            // 
            // rchTxtBox1
            // 
            this->rchTxtBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->rchTxtBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(178)));
            this->rchTxtBox1->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->rchTxtBox1->ForeColor = System::Drawing::Color::Black;
            this->rchTxtBox1->Location = System::Drawing::Point(3, 26);
            this->rchTxtBox1->Name = L"rchTxtBox1";
            this->rchTxtBox1->ReadOnly = true;
            this->rchTxtBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Horizontal;
            this->rchTxtBox1->Size = System::Drawing::Size(352, 327);
            this->rchTxtBox1->TabIndex = 30;
            this->rchTxtBox1->Text = L"";
            this->rchTxtBox1->WordWrap = false;
            this->rchTxtBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::rchTxtBox1_TextChanged);
            // 
            // rchTxtBox2
            // 
            this->rchTxtBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->rchTxtBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
                static_cast<System::Int32>(static_cast<System::Byte>(178)));
            this->rchTxtBox2->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->rchTxtBox2->ForeColor = System::Drawing::Color::Black;
            this->rchTxtBox2->Location = System::Drawing::Point(381, 26);
            this->rchTxtBox2->Name = L"rchTxtBox2";
            this->rchTxtBox2->ReadOnly = true;
            this->rchTxtBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Horizontal;
            this->rchTxtBox2->Size = System::Drawing::Size(353, 327);
            this->rchTxtBox2->TabIndex = 31;
            this->rchTxtBox2->Text = L"";
            this->rchTxtBox2->WordWrap = false;
            this->rchTxtBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::rchTxtBox2_TextChanged);
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 0, 1);
            this->tableLayoutPanel2->Controls->Add(this->lblRange, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(582, 69);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 2;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(330, 100);
            this->tableLayoutPanel2->TabIndex = 56;
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->ColumnCount = 5;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel5->Controls->Add(this->txtBoxA, 1, 0);
            this->tableLayoutPanel5->Controls->Add(this->lblA, 0, 0);
            this->tableLayoutPanel5->Controls->Add(this->lblB, 3, 0);
            this->tableLayoutPanel5->Controls->Add(this->txtBoxB, 4, 0);
            this->tableLayoutPanel5->Location = System::Drawing::Point(3, 53);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 1;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(324, 44);
            this->tableLayoutPanel5->TabIndex = 57;
            // 
            // tableLayoutPanel6
            // 
            this->tableLayoutPanel6->ColumnCount = 5;
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
            this->tableLayoutPanel6->Controls->Add(this->label3, 0, 0);
            this->tableLayoutPanel6->Controls->Add(this->txtBoxM, 1, 0);
            this->tableLayoutPanel6->Controls->Add(this->txtBoxN, 4, 0);
            this->tableLayoutPanel6->Controls->Add(this->label2, 3, 0);
            this->tableLayoutPanel6->Location = System::Drawing::Point(3, 53);
            this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
            this->tableLayoutPanel6->RowCount = 1;
            this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
            this->tableLayoutPanel6->Size = System::Drawing::Size(488, 44);
            this->tableLayoutPanel6->TabIndex = 53;
            // 
            // tableLayoutPanel7
            // 
            this->tableLayoutPanel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->tableLayoutPanel7->ColumnCount = 1;
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel7->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                20)));
            this->tableLayoutPanel7->Controls->Add(this->tableLayoutPanel6, 0, 1);
            this->tableLayoutPanel7->Controls->Add(this->lblSize, 0, 0);
            this->tableLayoutPanel7->Location = System::Drawing::Point(12, 69);
            this->tableLayoutPanel7->Name = L"tableLayoutPanel7";
            this->tableLayoutPanel7->RowCount = 2;
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel7->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel7->Size = System::Drawing::Size(496, 100);
            this->tableLayoutPanel7->TabIndex = 54;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
                152)));
            this->tableLayoutPanel3->Controls->Add(this->btnGen, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->btnTask, 0, 1);
            this->tableLayoutPanel3->Controls->Add(this->btnExit, 0, 2);
            this->tableLayoutPanel3->Location = System::Drawing::Point(761, 206);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 3;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 34)));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33)));
            this->tableLayoutPanel3->Size = System::Drawing::Size(152, 331);
            this->tableLayoutPanel3->TabIndex = 57;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
                static_cast<System::Int32>(static_cast<System::Byte>(33)));
            this->ClientSize = System::Drawing::Size(936, 547);
            this->Controls->Add(this->tableLayoutPanel3);
            this->Controls->Add(this->tableLayoutPanel2);
            this->Controls->Add(this->tableLayoutPanel7);
            this->Controls->Add(this->tableLayoutPanel1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->lblTask);
            this->MinimumSize = System::Drawing::Size(952, 586);
            this->Name = L"MyForm";
            this->Text = L"Формирование и обработка двумерных массивов";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel1->PerformLayout();
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel2->PerformLayout();
            this->tableLayoutPanel5->ResumeLayout(false);
            this->tableLayoutPanel5->PerformLayout();
            this->tableLayoutPanel6->ResumeLayout(false);
            this->tableLayoutPanel6->PerformLayout();
            this->tableLayoutPanel7->ResumeLayout(false);
            this->tableLayoutPanel7->PerformLayout();
            this->tableLayoutPanel3->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void btnTask_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        int m = Convert::ToInt16(txtBoxM->Text), n = Convert::ToInt16(txtBoxN->Text);
        double x;
        double** matr = InputMatr(m, n, rchTxtBox1);
        double** newmatr = task(matr, m, n, x);
        OutputMatr(newmatr, m + 1, n, rchTxtBox2);
        fill(rchTxtBox1, x);
        fill(rchTxtBox2, x);
        del(matr, m);
        del(newmatr, m + 1);
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Ошибка ввода!", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    try {
        rchTxtBox2->Clear();
        double** matr;
        double a, b;
        int m, n;
        if (!GetInt(txtBoxM, "Введите m >= 1, m - целое число", m)) return;
        if (!GetInt(txtBoxN, "Введите n >= 1, n - целое число", n)) return;
        if (!GetDouble(txtBoxA, "Введите a - вещественное число", a)) return;
        if (!GetDouble(txtBoxB, "Введите b - вещественное число", b)) return;
        matr = input(m, n, a, b);
        OutputMatr(matr, m, n, rchTxtBox1);
        del(matr, m);
    }
    catch (Exception^ ex) {
        MessageBox::Show(ex->Message, "Ошибка ввода!", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }
}
private: System::Void rchTxtBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rchTxtBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}
};
}
