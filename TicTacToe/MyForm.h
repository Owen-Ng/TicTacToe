#pragma once
#include <iostream>

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ maxVal;
		
		MyForm(String^ m, System::Windows::Forms::Form^ frm1)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			maxVal = m;
			otherform = frm1;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Form^ otherform;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::Button^ NewGame;
	private: System::Windows::Forms::Button^ ResetGame;
	private: System::Windows::Forms::Label^ playerO;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ playerX;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ highlight;
	private: System::Windows::Forms::Label^ LLL;
	private: System::Windows::Forms::Label^ WWW;
	private: System::Windows::Forms::Label^ xScore;
	private: System::Windows::Forms::Label^ oScore;
	private: System::Windows::Forms::Button^ changeMax;






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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->highlight = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->playerX = (gcnew System::Windows::Forms::Label());
			this->playerO = (gcnew System::Windows::Forms::Label());
			this->LLL = (gcnew System::Windows::Forms::Label());
			this->WWW = (gcnew System::Windows::Forms::Label());
			this->xScore = (gcnew System::Windows::Forms::Label());
			this->oScore = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->NewGame = (gcnew System::Windows::Forms::Button());
			this->ResetGame = (gcnew System::Windows::Forms::Button());
			this->changeMax = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel4->SuspendLayout();
			this->flowLayoutPanel5->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->highlight);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1270, 100);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// highlight
			// 
			this->highlight->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->highlight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->highlight->ForeColor = System::Drawing::Color::DarkRed;
			this->highlight->Location = System::Drawing::Point(541, 16);
			this->highlight->Name = L"highlight";
			this->highlight->Size = System::Drawing::Size(605, 55);
			this->highlight->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1240, 75);
			this->label5->TabIndex = 0;
			this->label5->Text = L"TicTacToe";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->flowLayoutPanel2);
			this->flowLayoutPanel1->Controls->Add(this->flowLayoutPanel4);
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 106);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1259, 635);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->Controls->Add(this->button2);
			this->flowLayoutPanel2->Controls->Add(this->button3);
			this->flowLayoutPanel2->Controls->Add(this->button4);
			this->flowLayoutPanel2->Controls->Add(this->button5);
			this->flowLayoutPanel2->Controls->Add(this->button6);
			this->flowLayoutPanel2->Controls->Add(this->button7);
			this->flowLayoutPanel2->Controls->Add(this->button8);
			this->flowLayoutPanel2->Controls->Add(this->button9);
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(568, 615);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 200);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(189, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 200);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(375, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(180, 200);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(3, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 200);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(189, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 200);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(375, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(180, 200);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(3, 415);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(180, 200);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(189, 415);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(180, 200);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(375, 415);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(180, 200);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel4->Controls->Add(this->flowLayoutPanel5);
			this->flowLayoutPanel4->Controls->Add(this->flowLayoutPanel3);
			this->flowLayoutPanel4->Location = System::Drawing::Point(577, 3);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(661, 615);
			this->flowLayoutPanel4->TabIndex = 3;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel5->Controls->Add(this->label1);
			this->flowLayoutPanel5->Controls->Add(this->label2);
			this->flowLayoutPanel5->Controls->Add(this->playerX);
			this->flowLayoutPanel5->Controls->Add(this->playerO);
			this->flowLayoutPanel5->Controls->Add(this->LLL);
			this->flowLayoutPanel5->Controls->Add(this->WWW);
			this->flowLayoutPanel5->Controls->Add(this->xScore);
			this->flowLayoutPanel5->Controls->Add(this->oScore);
			this->flowLayoutPanel5->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(644, 246);
			this->flowLayoutPanel5->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 113);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X Player";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(311, 113);
			this->label2->TabIndex = 3;
			this->label2->Text = L"O Player";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// playerX
			// 
			this->playerX->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->playerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->playerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerX->Location = System::Drawing::Point(320, 3);
			this->playerX->Margin = System::Windows::Forms::Padding(3);
			this->playerX->Name = L"playerX";
			this->playerX->Size = System::Drawing::Size(90, 113);
			this->playerX->TabIndex = 5;
			this->playerX->Text = L"0";
			this->playerX->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// playerO
			// 
			this->playerO->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->playerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->playerO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->playerO->Location = System::Drawing::Point(320, 122);
			this->playerO->Margin = System::Windows::Forms::Padding(3);
			this->playerO->Name = L"playerO";
			this->playerO->Size = System::Drawing::Size(90, 113);
			this->playerO->TabIndex = 4;
			this->playerO->Text = L"0";
			this->playerO->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// LLL
			// 
			this->LLL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LLL->Location = System::Drawing::Point(416, 0);
			this->LLL->Name = L"LLL";
			this->LLL->Size = System::Drawing::Size(57, 116);
			this->LLL->TabIndex = 6;
			this->LLL->Text = L"/";
			this->LLL->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// WWW
			// 
			this->WWW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WWW->Location = System::Drawing::Point(416, 116);
			this->WWW->Name = L"WWW";
			this->WWW->Size = System::Drawing::Size(57, 119);
			this->WWW->TabIndex = 7;
			this->WWW->Text = L"/";
			this->WWW->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// xScore
			// 
			this->xScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->xScore->Location = System::Drawing::Point(479, 0);
			this->xScore->Name = L"xScore";
			this->xScore->Size = System::Drawing::Size(152, 113);
			this->xScore->TabIndex = 8;
			this->xScore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// oScore
			// 
			this->oScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oScore->Location = System::Drawing::Point(479, 113);
			this->oScore->Name = L"oScore";
			this->oScore->Size = System::Drawing::Size(152, 113);
			this->oScore->TabIndex = 9;
			this->oScore->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel3->Controls->Add(this->NewGame);
			this->flowLayoutPanel3->Controls->Add(this->ResetGame);
			this->flowLayoutPanel3->Controls->Add(this->changeMax);
			this->flowLayoutPanel3->Location = System::Drawing::Point(3, 255);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(644, 349);
			this->flowLayoutPanel3->TabIndex = 2;
			// 
			// NewGame
			// 
			this->NewGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewGame->Location = System::Drawing::Point(3, 3);
			this->NewGame->Name = L"NewGame";
			this->NewGame->Size = System::Drawing::Size(628, 111);
			this->NewGame->TabIndex = 1;
			this->NewGame->Text = L"New Game";
			this->NewGame->UseVisualStyleBackColor = true;
			this->NewGame->Click += gcnew System::EventHandler(this, &MyForm::NewGame_Click);
			// 
			// ResetGame
			// 
			this->ResetGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResetGame->Location = System::Drawing::Point(3, 120);
			this->ResetGame->Name = L"ResetGame";
			this->ResetGame->Size = System::Drawing::Size(628, 111);
			this->ResetGame->TabIndex = 0;
			this->ResetGame->Text = L"Reset Game";
			this->ResetGame->UseVisualStyleBackColor = true;
			this->ResetGame->Click += gcnew System::EventHandler(this, &MyForm::ResetGame_Click);
			// 
			// changeMax
			// 
			this->changeMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changeMax->Location = System::Drawing::Point(3, 237);
			this->changeMax->Name = L"changeMax";
			this->changeMax->Size = System::Drawing::Size(628, 111);
			this->changeMax->TabIndex = 2;
			this->changeMax->Text = L"Change Max Score";
			this->changeMax->UseVisualStyleBackColor = true;
			this->changeMax->Click += gcnew System::EventHandler(this, &MyForm::changeMax_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1282, 753);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel4->ResumeLayout(false);
			this->flowLayoutPanel5->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		Boolean checker;
		int plusone;
		void Enable_False() {
			button1->Enabled = false;
			button2->Enabled = false;
			button3->Enabled = false;
			button4->Enabled = false;
			button5->Enabled = false;
			button6->Enabled = false;
			button7->Enabled = false;
			button8->Enabled = false;
			button9->Enabled = false;

		}
		void Enable_True() {
			button1->Enabled = true;
			button2->Enabled = true;
			button3->Enabled = true;
			button4->Enabled = true;
			button5->Enabled = true;
			button6->Enabled = true;
			button7->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = true;

		}
		void reset() {
			button2->Text = "";
			button3->Text = "";
			button4->Text = "";
			button5->Text = "";
			button6->Text = "";
			button7->Text = "";
			button8->Text = "";
			button9->Text = "";
			button1->Text = "";

			button2->BackColor = System::Drawing::Color::WhiteSmoke;
			button3->BackColor = System::Drawing::Color::WhiteSmoke;
			button4->BackColor = System::Drawing::Color::WhiteSmoke;
			button5->BackColor = System::Drawing::Color::WhiteSmoke;
			button6->BackColor = System::Drawing::Color::WhiteSmoke;
			button7->BackColor = System::Drawing::Color::WhiteSmoke;
			button8->BackColor = System::Drawing::Color::WhiteSmoke;
			button9->BackColor = System::Drawing::Color::WhiteSmoke;
			button1->BackColor = System::Drawing::Color::WhiteSmoke;

			ResetGame->Enabled = true;
		}
		void reset_score() {
			playerX->Text = "0";
			playerO->Text= "0";
		}
		void score() {
			if (button1->Text == "X" && button2->Text == "X" && button3->Text == "X") {
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button4->Text == "X" && button5->Text == "X" && button6->Text == "X") {
				button4->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button7->Text == "X" && button8->Text == "X" && button9->Text == "X") {
				button7->BackColor = System::Drawing::Color::PowderBlue;
				button8->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button1->Text == "X" && button5->Text == "X" && button9->Text == "X") {
				button1->BackColor = System::Drawing::Color::HotPink;
				button5->BackColor = System::Drawing::Color::HotPink;
				button9->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button3->Text == "X" && button5->Text == "X" && button7->Text == "X") {
				button7->BackColor = System::Drawing::Color::HotPink;
				button5->BackColor = System::Drawing::Color::HotPink;
				button3->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (button1->Text == "X" && button4->Text == "X" && button7->Text == "X") {
				button7->BackColor = System::Drawing::Color::HotPink;
				button4->BackColor = System::Drawing::Color::HotPink;
				button1->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (button2->Text == "X" && button5->Text == "X" && button8->Text == "X") {
				button2->BackColor = System::Drawing::Color::HotPink;
				button5->BackColor = System::Drawing::Color::HotPink;
				button8->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button3->Text == "X" && button6->Text == "X" && button9->Text == "X") {
				button3->BackColor = System::Drawing::Color::HotPink;
				button6->BackColor = System::Drawing::Color::HotPink;
				button9->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerX->Text);
				playerX->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (button1->Text == "O" && button4->Text == "O" && button7->Text == "O") {
				button7->BackColor = System::Drawing::Color::HotPink;
				button4->BackColor = System::Drawing::Color::HotPink;
				button1->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (button2->Text == "O" && button5->Text == "O" && button8->Text == "O") {
				button2->BackColor = System::Drawing::Color::HotPink;
				button5->BackColor = System::Drawing::Color::HotPink;
				button8->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button3->Text == "O" && button6->Text == "O" && button9->Text == "O") {
				button3->BackColor = System::Drawing::Color::HotPink;
				button6->BackColor = System::Drawing::Color::HotPink;
				button9->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}

			if (button1->Text == "O" && button2->Text == "O" && button3->Text == "O") {
				button1->BackColor = System::Drawing::Color::PowderBlue;
				button2->BackColor = System::Drawing::Color::PowderBlue;
				button3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button4->Text == "O" && button5->Text == "O" && button6->Text == "O") {
				button4->BackColor = System::Drawing::Color::PowderBlue;
				button5->BackColor = System::Drawing::Color::PowderBlue;
				button6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button7->Text == "O" && button8->Text == "O" && button9->Text == "O") {
				button7->BackColor = System::Drawing::Color::PowderBlue;
				button8->BackColor = System::Drawing::Color::PowderBlue;
				button9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button1->Text == "O" && button5->Text == "O" && button9->Text == "O") {
				button1->BackColor = System::Drawing::Color::HotPink;
				button5->BackColor = System::Drawing::Color::HotPink;
				button9->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			if (button3->Text == "O" && button5->Text == "O" && button7->Text == "O") {
				button7->BackColor = System::Drawing::Color::HotPink;
				button5->BackColor = System::Drawing::Color::HotPink;
				button3->BackColor = System::Drawing::Color::HotPink;
				MessageBox::Show("The Winner is Player O", "TicTacToe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(playerO->Text);
				playerO->Text = Convert::ToString(plusone + 1);
				Enable_False();

			}
			update_hightlight();
			
			

			
		}
		void update_hightlight() {
			if (int::Parse(playerO->Text) >= int::Parse(maxVal) ) {
				highlight->Text = "PlayerO Won!!!";
				ResetGame->Enabled = false;

			}
			else if (int::Parse(playerX->Text) >= int::Parse(maxVal)) {
				highlight->Text = "PlayerX Won!!!";
				ResetGame->Enabled = false;

			}
			else if (int::Parse(playerO->Text) == 0 && int::Parse(playerX->Text) == 0) {

			}
			else if ((int::Parse(playerO->Text)) > int::Parse(playerX->Text)) {
				highlight->Text = "PlayerO is Winning!!!";

			}
			else if (int::Parse(playerO->Text) < int::Parse(playerX->Text)) {
				highlight->Text = "PlayerO is Winning!!!";

			}
			else {
				highlight->Text = "Tie!";

			}
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (checker == false) {
		button1->Text = "X";
		checker = true;
	}
	else {
		button1->Text = "O";
		checker = false;
	}
	score();
	button1->Enabled = false;
			
}
	   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (checker == false) {
			   button2->Text = "X";
			   checker = true;
		   }
		   else {
			   button2->Text = "O";
			   checker = false;
		   }
		   score();
		   button2->Enabled = false;

	   }
   private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	   if (checker == false) {
		   button3->Text = "X";
		   checker = true;
	   }
	   else {
		   button3->Text = "O";
		   checker = false;
	   }
	   score();
	   button3->Enabled = false;

   }
   private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	   if (checker == false) {
		   button4->Text = "X";
		   checker = true;
	   }
	   else {
		   button4->Text = "O";
		   checker = false;
	   }
	   score();
	   button4->Enabled = false;

   }
   private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	   if (checker == false) {
		   button5->Text = "X";
		   checker = true;
	   }
	   else {
		   button5->Text = "O";
		   checker = false;
	   }
	   score();
	   button5->Enabled = false;

   }
 private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (checker == false) {
		 button6->Text = "X";
		 checker = true;
	 }
	 else {
		 button6->Text = "O";
		 checker = false;
	 }
	 score();
	 button6->Enabled = false;

 }
 private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (checker == false) {
		 button7->Text = "X";
		 checker = true;
	 }
	 else {
		 button7->Text = "O";
		 checker = false;
	 }
	 score();
	 button7->Enabled = false;

 }
		public: System:: Void setScore() {
			xScore->Text = maxVal;
			oScore->Text = maxVal;
}
			 
 private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (checker == false) {
		 button8->Text = "X";
		 checker = true;
	 }
	 else {
		 button8->Text = "O";
		 checker = false;
	 }
	 score();
	 button8->Enabled = false;

 }
		 private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			 if (checker == false) {
				 button9->Text = "X";
				 checker = true;
			 }
			 else {
				 button9->Text = "O";
				 checker = false;
			 }
			 score();
			 button9->Enabled = false;

		 }

private: System::Void NewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	highlight->Text = "";
	reset();
	reset_score();
	Enable_True();
}
private: System::Void ResetGame_Click(System::Object^ sender, System::EventArgs^ e) {
	reset();
	Enable_True();
	
}
private: System::Void changeMax_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	otherform->Show();

	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		otherform->Show();
		//Application::Exit();
		////////https://www.daniweb.com/programming/software-development/threads/248801/overriding-the-close-button-an-a-c-cli-form-application
	}
};
}
