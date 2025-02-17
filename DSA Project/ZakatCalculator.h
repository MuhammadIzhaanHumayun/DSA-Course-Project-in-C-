#pragma once

namespace DSAProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ZakatCalculator
	/// </summary>
	public ref class ZakatCalculator : public System::Windows::Forms::Form
	{
	public:
		ZakatCalculator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ZakatCalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ cash;

	private: System::Windows::Forms::Label^ eligible;


	private: System::Windows::Forms::Label^ zakat;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ close_btn;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ gold;
	private: System::Windows::Forms::NumericUpDown^ silver;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ future;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ investment;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ tax;





	private: System::Windows::Forms::NumericUpDown^ wages;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ borrow;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ZakatCalculator::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cash = (gcnew System::Windows::Forms::NumericUpDown());
			this->eligible = (gcnew System::Windows::Forms::Label());
			this->zakat = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->close_btn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->gold = (gcnew System::Windows::Forms::NumericUpDown());
			this->silver = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->future = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->investment = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tax = (gcnew System::Windows::Forms::NumericUpDown());
			this->wages = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->borrow = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cash))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gold))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->silver))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->future))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->investment))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wages))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->borrow))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(14, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"In Hand Cash or In Bank";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(263, 404);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Zakat Payable";
			// 
			// cash
			// 
			this->cash->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cash->Location = System::Drawing::Point(259, 157);
			this->cash->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->cash->Name = L"cash";
			this->cash->Size = System::Drawing::Size(141, 27);
			this->cash->TabIndex = 2;
			this->cash->ThousandsSeparator = true;
			// 
			// eligible
			// 
			this->eligible->AutoSize = true;
			this->eligible->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->eligible->ForeColor = System::Drawing::Color::Red;
			this->eligible->Location = System::Drawing::Point(263, 546);
			this->eligible->Name = L"eligible";
			this->eligible->Size = System::Drawing::Size(0, 24);
			this->eligible->TabIndex = 3;
			// 
			// zakat
			// 
			this->zakat->AutoSize = true;
			this->zakat->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zakat->Location = System::Drawing::Point(549, 404);
			this->zakat->Name = L"zakat";
			this->zakat->Size = System::Drawing::Size(78, 24);
			this->zakat->TabIndex = 4;
			this->zakat->Text = L"0000$";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Azure;
			this->button1->Location = System::Drawing::Point(382, 470);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 51);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ZakatCalculator::button1_Click);
			// 
			// close_btn
			// 
			this->close_btn->BackColor = System::Drawing::Color::DarkSlateGray;
			this->close_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->close_btn->Font = (gcnew System::Drawing::Font(L"Montserrat", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->close_btn->ForeColor = System::Drawing::Color::Red;
			this->close_btn->Location = System::Drawing::Point(817, 0);
			this->close_btn->Name = L"close_btn";
			this->close_btn->Size = System::Drawing::Size(46, 48);
			this->close_btn->TabIndex = 6;
			this->close_btn->Text = L"X";
			this->close_btn->UseVisualStyleBackColor = false;
			this->close_btn->Click += gcnew System::EventHandler(this, &ZakatCalculator::close_btn_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DarkSlateGray;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Font = (gcnew System::Drawing::Font(L"Montserrat", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Azure;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(863, 65);
			this->label3->TabIndex = 7;
			this->label3->Text = L" Zakat Calculator";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(133, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Value of Gold";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(14, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Value of Silver";
			// 
			// gold
			// 
			this->gold->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gold->Location = System::Drawing::Point(259, 201);
			this->gold->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->gold->Name = L"gold";
			this->gold->Size = System::Drawing::Size(141, 27);
			this->gold->TabIndex = 10;
			this->gold->ThousandsSeparator = true;
			// 
			// silver
			// 
			this->silver->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->silver->Location = System::Drawing::Point(259, 243);
			this->silver->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->silver->Name = L"silver";
			this->silver->Size = System::Drawing::Size(141, 27);
			this->silver->TabIndex = 11;
			this->silver->ThousandsSeparator = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 287);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(229, 44);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Deposited for Some \r\nFuture Purpose e.g: Hajj";
			// 
			// future
			// 
			this->future->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->future->Location = System::Drawing::Point(259, 296);
			this->future->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->future->Name = L"future";
			this->future->Size = System::Drawing::Size(141, 27);
			this->future->TabIndex = 13;
			this->future->ThousandsSeparator = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(14, 349);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(209, 22);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Business Investments";
			// 
			// investment
			// 
			this->investment->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->investment->Location = System::Drawing::Point(259, 347);
			this->investment->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->investment->Name = L"investment";
			this->investment->Size = System::Drawing::Size(141, 27);
			this->investment->TabIndex = 15;
			this->investment->ThousandsSeparator = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(14, 109);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 29);
			this->label8->TabIndex = 16;
			this->label8->Text = L"CASH:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(415, 109);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(156, 29);
			this->label9->TabIndex = 27;
			this->label9->Text = L"LIABILITIES:";
			// 
			// tax
			// 
			this->tax->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tax->Location = System::Drawing::Point(707, 248);
			this->tax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->tax->Name = L"tax";
			this->tax->Size = System::Drawing::Size(141, 27);
			this->tax->TabIndex = 22;
			this->tax->ThousandsSeparator = true;
			// 
			// wages
			// 
			this->wages->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wages->Location = System::Drawing::Point(707, 206);
			this->wages->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->wages->Name = L"wages";
			this->wages->Size = System::Drawing::Size(141, 27);
			this->wages->TabIndex = 21;
			this->wages->ThousandsSeparator = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(415, 250);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(269, 44);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Taxes, Rent, Utility Bills Due \r\nImmediately";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(415, 208);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(245, 22);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Wages Due To Employees";
			// 
			// borrow
			// 
			this->borrow->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->borrow->Location = System::Drawing::Point(707, 160);
			this->borrow->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999999, 0, 0, 0 });
			this->borrow->Name = L"borrow";
			this->borrow->Size = System::Drawing::Size(141, 27);
			this->borrow->TabIndex = 18;
			this->borrow->ThousandsSeparator = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(415, 157);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(253, 44);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Borrowed Money / Goods \r\nBought on Credit";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Montserrat", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(15, 78);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(307, 22);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Nisab (Updated 12/1/2025): 478$";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(360, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 19);
			this->label11->TabIndex = 29;
			this->label11->Text = L"$";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(360, 205);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 19);
			this->label15->TabIndex = 30;
			this->label15->Text = L"$";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(360, 247);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(19, 19);
			this->label16->TabIndex = 31;
			this->label16->Text = L"$";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(360, 301);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 19);
			this->label17->TabIndex = 32;
			this->label17->Text = L"$";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(360, 352);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 19);
			this->label18->TabIndex = 33;
			this->label18->Text = L"$";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(806, 161);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 19);
			this->label19->TabIndex = 34;
			this->label19->Text = L"$";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(806, 205);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 19);
			this->label20->TabIndex = 35;
			this->label20->Text = L"$";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Font = (gcnew System::Drawing::Font(L"Montserrat", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(806, 247);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 19);
			this->label21->TabIndex = 36;
			this->label21->Text = L"$";
			// 
			// ZakatCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(863, 600);
			this->Controls->Add(this->close_btn);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->tax);
			this->Controls->Add(this->wages);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->borrow);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->investment);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->future);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->silver);
			this->Controls->Add(this->gold);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zakat);
			this->Controls->Add(this->eligible);
			this->Controls->Add(this->cash);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ZakatCalculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ZakatCalculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cash))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gold))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->silver))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->future))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->investment))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wages))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->borrow))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float amount = (float)(cash->Value);
		float goldAmount = (float)(gold->Value);
		float silverAmount =  (float)(silver->Value);
		float futureAmount =  (float)(future->Value);
		float investAmount =  (float)(investment->Value);
		float borrowAmount =  (float)(borrow->Value);
		float wagesAmount = (float)(wages->Value);
		float taxAmount = (float)(tax->Value);
	
		float Cash = amount + goldAmount + silverAmount + futureAmount + investAmount;
		float liability = borrowAmount + wagesAmount + taxAmount;
		float total = Cash - liability;

		if (total >= 478) {
			float c = total * 0.025;
			zakat->Text = Convert::ToString(c + "$");
			eligible->Text = " ";
		}
		else {
			zakat->Text = "0000$";
			eligible->Text = "You are not eligible to pay zakat";
		}
	}
private: System::Void close_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}
