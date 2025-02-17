#pragma once
#include "calculator.cpp"
namespace DSAProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculator
	/// </summary>
	public ref class calculator : public System::Windows::Forms::Form
	{
	public:
		calculator(void)
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
		~calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ input1;
	private: System::Windows::Forms::TextBox^ input2;
	protected:

	protected:

	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Button^ sub_btn;
	private: System::Windows::Forms::Button^ mult_btn;
	private: System::Windows::Forms::Button^ div_btn;
	private: System::Windows::Forms::TextBox^ ans_box;
	private: System::Windows::Forms::Label^ operation;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(calculator::typeid));
			this->input1 = (gcnew System::Windows::Forms::TextBox());
			this->input2 = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->sub_btn = (gcnew System::Windows::Forms::Button());
			this->mult_btn = (gcnew System::Windows::Forms::Button());
			this->div_btn = (gcnew System::Windows::Forms::Button());
			this->ans_box = (gcnew System::Windows::Forms::TextBox());
			this->operation = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// input1
			// 
			this->input1->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input1->Location = System::Drawing::Point(349, 116);
			this->input1->Name = L"input1";
			this->input1->Size = System::Drawing::Size(149, 34);
			this->input1->TabIndex = 0;
			// 
			// input2
			// 
			this->input2->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input2->Location = System::Drawing::Point(349, 209);
			this->input2->Name = L"input2";
			this->input2->Size = System::Drawing::Size(149, 34);
			this->input2->TabIndex = 1;
			// 
			// add_btn
			// 
			this->add_btn->BackColor = System::Drawing::Color::PaleGreen;
			this->add_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->Location = System::Drawing::Point(76, 266);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(57, 55);
			this->add_btn->TabIndex = 2;
			this->add_btn->Text = L"+";
			this->add_btn->UseVisualStyleBackColor = false;
			this->add_btn->Click += gcnew System::EventHandler(this, &calculator::button1_Click);
			// 
			// sub_btn
			// 
			this->sub_btn->BackColor = System::Drawing::Color::PaleGreen;
			this->sub_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->sub_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->sub_btn->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub_btn->Location = System::Drawing::Point(173, 266);
			this->sub_btn->Name = L"sub_btn";
			this->sub_btn->Size = System::Drawing::Size(57, 55);
			this->sub_btn->TabIndex = 3;
			this->sub_btn->Text = L"-";
			this->sub_btn->UseVisualStyleBackColor = false;
			this->sub_btn->Click += gcnew System::EventHandler(this, &calculator::sub_btn_Click);
			// 
			// mult_btn
			// 
			this->mult_btn->BackColor = System::Drawing::Color::PaleGreen;
			this->mult_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->mult_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->mult_btn->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mult_btn->Location = System::Drawing::Point(80, 152);
			this->mult_btn->Name = L"mult_btn";
			this->mult_btn->Size = System::Drawing::Size(57, 55);
			this->mult_btn->TabIndex = 4;
			this->mult_btn->Text = L"*";
			this->mult_btn->UseVisualStyleBackColor = false;
			this->mult_btn->Click += gcnew System::EventHandler(this, &calculator::mult_btn_Click);
			// 
			// div_btn
			// 
			this->div_btn->BackColor = System::Drawing::Color::PaleGreen;
			this->div_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->div_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->div_btn->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->div_btn->Location = System::Drawing::Point(173, 152);
			this->div_btn->Name = L"div_btn";
			this->div_btn->Size = System::Drawing::Size(57, 55);
			this->div_btn->TabIndex = 5;
			this->div_btn->Text = L"/";
			this->div_btn->UseVisualStyleBackColor = false;
			this->div_btn->Click += gcnew System::EventHandler(this, &calculator::div_btn_Click);
			// 
			// ans_box
			// 
			this->ans_box->Font = (gcnew System::Drawing::Font(L"Montserrat", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_box->Location = System::Drawing::Point(349, 315);
			this->ans_box->Name = L"ans_box";
			this->ans_box->Size = System::Drawing::Size(149, 34);
			this->ans_box->TabIndex = 6;
			// 
			// operation
			// 
			this->operation->AutoSize = true;
			this->operation->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->operation->Location = System::Drawing::Point(411, 162);
			this->operation->Name = L"operation";
			this->operation->Size = System::Drawing::Size(30, 34);
			this->operation->TabIndex = 7;
			this->operation->Text = L"\?";
			this->operation->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(410, 266);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 34);
			this->label2->TabIndex = 8;
			this->label2->Text = L"=";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PaleGreen;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Montserrat", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(543, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(43, 44);
			this->button5->TabIndex = 9;
			this->button5->Text = L"X";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &calculator::button5_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::PaleGreen;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Montserrat", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(586, 72);
			this->label1->TabIndex = 10;
			this->label1->Text = L" Simple Calculator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Khaki;
			this->ClientSize = System::Drawing::Size(586, 426);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->operation);
			this->Controls->Add(this->ans_box);
			this->Controls->Add(this->div_btn);
			this->Controls->Add(this->mult_btn);
			this->Controls->Add(this->sub_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->input2);
			this->Controls->Add(this->input1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(input1->Text);
		double b = Convert::ToDouble(input2->Text);
		double c = Convert::ToDouble(a+b);
		ans_box->Text = Convert::ToString(c);
		operation->Text = "+";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void sub_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	double a = Convert::ToDouble(input1->Text);
	double b = Convert::ToDouble(input2->Text);
	double c = Convert::ToDouble(a - b);
	ans_box->Text = Convert::ToString(c);
	operation->Text = "-";
}
private: System::Void mult_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	double a = Convert::ToDouble(input1->Text);
	double b = Convert::ToDouble(input2->Text);
	double c = Convert::ToDouble(a * b);
	ans_box->Text = Convert::ToString(c);
	operation->Text = "*";
}
private: System::Void div_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	float a = Convert::ToDouble(input1->Text);
	float b = Convert::ToDouble(input2->Text);
	float c = (a / b);
	ans_box->Text = Convert::ToString(c);
	operation->Text = "/";
}
};
}
