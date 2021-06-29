#pragma once
#include "MyForm.h"
#include <iostream>
namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ score;
	private: System::Windows::Forms::Button^ submit;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->score = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(226, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to TicTacToe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(149, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(230, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Please set the max score";
			// 
			// score
			// 
			this->score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->score->Location = System::Drawing::Point(132, 166);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(119, 30);
			this->score->TabIndex = 2;
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(289, 166);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(75, 30);
			this->submit->TabIndex = 3;
			this->submit->Text = L"submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &MyForm1::submit_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(555, 275);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->score);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		public: System::Void Erase_Textbox() {
			score->Text = "";
		}
	private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			int value = int::Parse(score->Text);
			if (value <= 0) {
				MessageBox::Show("Value should be more than zero");
			}
			else {
				
				this->Hide();
				MyForm^ fs = gcnew MyForm(score->Text, this);
				fs->setScore();
				fs->ShowDialog();
			}

		}
		catch (... )
		{
			MessageBox::Show("Value must be Integer");
		}
	}
	};
}
