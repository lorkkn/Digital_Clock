#pragma once
#include <iostream>
namespace testy2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Kursova
	/// </summary>
	public ref class Clock : public System::Windows::Forms::Form
	{
	public:
		Clock(void)
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
		~Clock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ top1;
	private: System::Windows::Forms::PictureBox^ down1;






	public: bool counter =0;
	private: System::Windows::Forms::PictureBox^ mid1;




	private: System::Windows::Forms::PictureBox^ left12;
	private: System::Windows::Forms::PictureBox^ right12;


	private: System::Windows::Forms::PictureBox^ right11;

	private: System::Windows::Forms::PictureBox^ left11;
	private: System::Windows::Forms::PictureBox^ right21;


	private: System::Windows::Forms::PictureBox^ left21;
	private: System::Windows::Forms::PictureBox^ right22;


	private: System::Windows::Forms::PictureBox^ left22;

	private: System::Windows::Forms::PictureBox^ mid2;
	private: System::Windows::Forms::PictureBox^ down2;


	private: System::Windows::Forms::PictureBox^ top2;
	private: System::Windows::Forms::PictureBox^ right31;


	private: System::Windows::Forms::PictureBox^ left31;
	private: System::Windows::Forms::PictureBox^ right32;


	private: System::Windows::Forms::PictureBox^ left32;

	private: System::Windows::Forms::PictureBox^ mid3;
	private: System::Windows::Forms::PictureBox^ down3;


	private: System::Windows::Forms::PictureBox^ top3;
	private: System::Windows::Forms::PictureBox^ right41;


	private: System::Windows::Forms::PictureBox^ left41;
	private: System::Windows::Forms::PictureBox^ right42;


	private: System::Windows::Forms::PictureBox^ left42;

	private: System::Windows::Forms::PictureBox^ mid4;
	private: System::Windows::Forms::PictureBox^ down4;


	private: System::Windows::Forms::PictureBox^ top4;

	private: System::Windows::Forms::PictureBox^ pictureBox28;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ Enter;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Button^ Stop;
	private: System::Windows::Forms::CheckBox^ checkTimer;
	private: System::Windows::Forms::RadioButton^ radioReal;
	private: System::Windows::Forms::RadioButton^ radioFast;
private: System::Windows::Forms::RadioButton^ radioSec;
	private: System::ComponentModel::IContainer^ components;




	protected:


	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Clock::typeid));
			this->top1 = (gcnew System::Windows::Forms::PictureBox());
			this->down1 = (gcnew System::Windows::Forms::PictureBox());
			this->mid1 = (gcnew System::Windows::Forms::PictureBox());
			this->left12 = (gcnew System::Windows::Forms::PictureBox());
			this->right12 = (gcnew System::Windows::Forms::PictureBox());
			this->right11 = (gcnew System::Windows::Forms::PictureBox());
			this->left11 = (gcnew System::Windows::Forms::PictureBox());
			this->right21 = (gcnew System::Windows::Forms::PictureBox());
			this->left21 = (gcnew System::Windows::Forms::PictureBox());
			this->right22 = (gcnew System::Windows::Forms::PictureBox());
			this->left22 = (gcnew System::Windows::Forms::PictureBox());
			this->mid2 = (gcnew System::Windows::Forms::PictureBox());
			this->down2 = (gcnew System::Windows::Forms::PictureBox());
			this->top2 = (gcnew System::Windows::Forms::PictureBox());
			this->right31 = (gcnew System::Windows::Forms::PictureBox());
			this->left31 = (gcnew System::Windows::Forms::PictureBox());
			this->right32 = (gcnew System::Windows::Forms::PictureBox());
			this->left32 = (gcnew System::Windows::Forms::PictureBox());
			this->mid3 = (gcnew System::Windows::Forms::PictureBox());
			this->down3 = (gcnew System::Windows::Forms::PictureBox());
			this->top3 = (gcnew System::Windows::Forms::PictureBox());
			this->right41 = (gcnew System::Windows::Forms::PictureBox());
			this->left41 = (gcnew System::Windows::Forms::PictureBox());
			this->right42 = (gcnew System::Windows::Forms::PictureBox());
			this->left42 = (gcnew System::Windows::Forms::PictureBox());
			this->mid4 = (gcnew System::Windows::Forms::PictureBox());
			this->down4 = (gcnew System::Windows::Forms::PictureBox());
			this->top4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->Enter = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->start = (gcnew System::Windows::Forms::Button());
			this->Stop = (gcnew System::Windows::Forms::Button());
			this->checkTimer = (gcnew System::Windows::Forms::CheckBox());
			this->radioReal = (gcnew System::Windows::Forms::RadioButton());
			this->radioFast = (gcnew System::Windows::Forms::RadioButton());
			this->radioSec = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// top1
			// 
			this->top1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top1.Image")));
			this->top1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top1.InitialImage")));
			this->top1->Location = System::Drawing::Point(213, 146);
			this->top1->Name = L"top1";
			this->top1->Size = System::Drawing::Size(125, 30);
			this->top1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->top1->TabIndex = 0;
			this->top1->TabStop = false;
			// 
			// down1
			// 
			this->down1->BackColor = System::Drawing::Color::Transparent;
			this->down1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down1.Image")));
			this->down1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down1.InitialImage")));
			this->down1->Location = System::Drawing::Point(213, 384);
			this->down1->Name = L"down1";
			this->down1->Size = System::Drawing::Size(125, 30);
			this->down1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->down1->TabIndex = 4;
			this->down1->TabStop = false;
			// 
			// mid1
			// 
			this->mid1->BackColor = System::Drawing::Color::Transparent;
			this->mid1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid1.Image")));
			this->mid1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid1.InitialImage")));
			this->mid1->Location = System::Drawing::Point(221, 264);
			this->mid1->Name = L"mid1";
			this->mid1->Size = System::Drawing::Size(108, 30);
			this->mid1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mid1->TabIndex = 8;
			this->mid1->TabStop = false;
			// 
			// left12
			// 
			this->left12->BackColor = System::Drawing::Color::Transparent;
			this->left12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left12.Image")));
			this->left12->Location = System::Drawing::Point(205, 289);
			this->left12->Name = L"left12";
			this->left12->Size = System::Drawing::Size(30, 102);
			this->left12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left12->TabIndex = 12;
			this->left12->TabStop = false;
			// 
			// right12
			// 
			this->right12->BackColor = System::Drawing::Color::Transparent;
			this->right12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right12.Image")));
			this->right12->Location = System::Drawing::Point(316, 289);
			this->right12->Name = L"right12";
			this->right12->Size = System::Drawing::Size(30, 102);
			this->right12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right12->TabIndex = 19;
			this->right12->TabStop = false;
			// 
			// right11
			// 
			this->right11->BackColor = System::Drawing::Color::Transparent;
			this->right11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right11.Image")));
			this->right11->Location = System::Drawing::Point(316, 168);
			this->right11->Name = L"right11";
			this->right11->Size = System::Drawing::Size(30, 102);
			this->right11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right11->TabIndex = 21;
			this->right11->TabStop = false;
			// 
			// left11
			// 
			this->left11->BackColor = System::Drawing::Color::Transparent;
			this->left11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left11.Image")));
			this->left11->Location = System::Drawing::Point(205, 168);
			this->left11->Name = L"left11";
			this->left11->Size = System::Drawing::Size(30, 102);
			this->left11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left11->TabIndex = 20;
			this->left11->TabStop = false;
			// 
			// right21
			// 
			this->right21->BackColor = System::Drawing::Color::Transparent;
			this->right21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right21.Image")));
			this->right21->Location = System::Drawing::Point(492, 168);
			this->right21->Name = L"right21";
			this->right21->Size = System::Drawing::Size(30, 102);
			this->right21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right21->TabIndex = 28;
			this->right21->TabStop = false;
			// 
			// left21
			// 
			this->left21->BackColor = System::Drawing::Color::Transparent;
			this->left21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left21.Image")));
			this->left21->Location = System::Drawing::Point(381, 168);
			this->left21->Name = L"left21";
			this->left21->Size = System::Drawing::Size(30, 102);
			this->left21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left21->TabIndex = 27;
			this->left21->TabStop = false;
			// 
			// right22
			// 
			this->right22->BackColor = System::Drawing::Color::Transparent;
			this->right22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right22.Image")));
			this->right22->Location = System::Drawing::Point(492, 289);
			this->right22->Name = L"right22";
			this->right22->Size = System::Drawing::Size(30, 102);
			this->right22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right22->TabIndex = 26;
			this->right22->TabStop = false;
			// 
			// left22
			// 
			this->left22->BackColor = System::Drawing::Color::Transparent;
			this->left22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left22.Image")));
			this->left22->Location = System::Drawing::Point(381, 289);
			this->left22->Name = L"left22";
			this->left22->Size = System::Drawing::Size(30, 102);
			this->left22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left22->TabIndex = 25;
			this->left22->TabStop = false;
			// 
			// mid2
			// 
			this->mid2->BackColor = System::Drawing::Color::Transparent;
			this->mid2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid2.Image")));
			this->mid2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid2.InitialImage")));
			this->mid2->Location = System::Drawing::Point(397, 264);
			this->mid2->Name = L"mid2";
			this->mid2->Size = System::Drawing::Size(108, 30);
			this->mid2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mid2->TabIndex = 24;
			this->mid2->TabStop = false;
			// 
			// down2
			// 
			this->down2->BackColor = System::Drawing::Color::Transparent;
			this->down2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down2.Image")));
			this->down2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down2.InitialImage")));
			this->down2->Location = System::Drawing::Point(389, 384);
			this->down2->Name = L"down2";
			this->down2->Size = System::Drawing::Size(125, 30);
			this->down2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->down2->TabIndex = 23;
			this->down2->TabStop = false;
			// 
			// top2
			// 
			this->top2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top2.Image")));
			this->top2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top2.InitialImage")));
			this->top2->Location = System::Drawing::Point(389, 146);
			this->top2->Name = L"top2";
			this->top2->Size = System::Drawing::Size(125, 30);
			this->top2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->top2->TabIndex = 22;
			this->top2->TabStop = false;
			// 
			// right31
			// 
			this->right31->BackColor = System::Drawing::Color::Transparent;
			this->right31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right31.Image")));
			this->right31->Location = System::Drawing::Point(700, 168);
			this->right31->Name = L"right31";
			this->right31->Size = System::Drawing::Size(30, 102);
			this->right31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right31->TabIndex = 35;
			this->right31->TabStop = false;
			// 
			// left31
			// 
			this->left31->BackColor = System::Drawing::Color::Transparent;
			this->left31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left31.Image")));
			this->left31->Location = System::Drawing::Point(589, 168);
			this->left31->Name = L"left31";
			this->left31->Size = System::Drawing::Size(30, 102);
			this->left31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left31->TabIndex = 34;
			this->left31->TabStop = false;
			// 
			// right32
			// 
			this->right32->BackColor = System::Drawing::Color::Transparent;
			this->right32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right32.Image")));
			this->right32->Location = System::Drawing::Point(700, 289);
			this->right32->Name = L"right32";
			this->right32->Size = System::Drawing::Size(30, 102);
			this->right32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right32->TabIndex = 33;
			this->right32->TabStop = false;
			// 
			// left32
			// 
			this->left32->BackColor = System::Drawing::Color::Transparent;
			this->left32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left32.Image")));
			this->left32->Location = System::Drawing::Point(589, 289);
			this->left32->Name = L"left32";
			this->left32->Size = System::Drawing::Size(30, 102);
			this->left32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left32->TabIndex = 32;
			this->left32->TabStop = false;
			// 
			// mid3
			// 
			this->mid3->BackColor = System::Drawing::Color::Transparent;
			this->mid3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid3.Image")));
			this->mid3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid3.InitialImage")));
			this->mid3->Location = System::Drawing::Point(605, 264);
			this->mid3->Name = L"mid3";
			this->mid3->Size = System::Drawing::Size(108, 30);
			this->mid3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mid3->TabIndex = 31;
			this->mid3->TabStop = false;
			// 
			// down3
			// 
			this->down3->BackColor = System::Drawing::Color::Transparent;
			this->down3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down3.Image")));
			this->down3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down3.InitialImage")));
			this->down3->Location = System::Drawing::Point(597, 384);
			this->down3->Name = L"down3";
			this->down3->Size = System::Drawing::Size(125, 30);
			this->down3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->down3->TabIndex = 30;
			this->down3->TabStop = false;
			// 
			// top3
			// 
			this->top3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top3.Image")));
			this->top3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top3.InitialImage")));
			this->top3->Location = System::Drawing::Point(597, 146);
			this->top3->Name = L"top3";
			this->top3->Size = System::Drawing::Size(125, 30);
			this->top3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->top3->TabIndex = 29;
			this->top3->TabStop = false;
			// 
			// right41
			// 
			this->right41->BackColor = System::Drawing::Color::Transparent;
			this->right41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right41.Image")));
			this->right41->Location = System::Drawing::Point(875, 168);
			this->right41->Name = L"right41";
			this->right41->Size = System::Drawing::Size(30, 102);
			this->right41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right41->TabIndex = 42;
			this->right41->TabStop = false;
			// 
			// left41
			// 
			this->left41->BackColor = System::Drawing::Color::Transparent;
			this->left41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left41.Image")));
			this->left41->Location = System::Drawing::Point(764, 168);
			this->left41->Name = L"left41";
			this->left41->Size = System::Drawing::Size(30, 102);
			this->left41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left41->TabIndex = 41;
			this->left41->TabStop = false;
			// 
			// right42
			// 
			this->right42->BackColor = System::Drawing::Color::Transparent;
			this->right42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"right42.Image")));
			this->right42->Location = System::Drawing::Point(875, 289);
			this->right42->Name = L"right42";
			this->right42->Size = System::Drawing::Size(30, 102);
			this->right42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->right42->TabIndex = 40;
			this->right42->TabStop = false;
			// 
			// left42
			// 
			this->left42->BackColor = System::Drawing::Color::Transparent;
			this->left42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"left42.Image")));
			this->left42->Location = System::Drawing::Point(764, 289);
			this->left42->Name = L"left42";
			this->left42->Size = System::Drawing::Size(30, 102);
			this->left42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->left42->TabIndex = 39;
			this->left42->TabStop = false;
			// 
			// mid4
			// 
			this->mid4->BackColor = System::Drawing::Color::Transparent;
			this->mid4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid4.Image")));
			this->mid4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mid4.InitialImage")));
			this->mid4->Location = System::Drawing::Point(780, 264);
			this->mid4->Name = L"mid4";
			this->mid4->Size = System::Drawing::Size(108, 30);
			this->mid4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mid4->TabIndex = 38;
			this->mid4->TabStop = false;
			// 
			// down4
			// 
			this->down4->BackColor = System::Drawing::Color::Transparent;
			this->down4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down4.Image")));
			this->down4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down4.InitialImage")));
			this->down4->Location = System::Drawing::Point(772, 384);
			this->down4->Name = L"down4";
			this->down4->Size = System::Drawing::Size(125, 30);
			this->down4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->down4->TabIndex = 37;
			this->down4->TabStop = false;
			// 
			// top4
			// 
			this->top4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top4.Image")));
			this->top4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"top4.InitialImage")));
			this->top4->Location = System::Drawing::Point(772, 146);
			this->top4->Name = L"top4";
			this->top4->Size = System::Drawing::Size(125, 30);
			this->top4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->top4->TabIndex = 36;
			this->top4->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(539, 224);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(33, 117);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 43;
			this->pictureBox28->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(255, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(42, 13);
			this->textBox1->TabIndex = 44;
			this->textBox1->Text = L"0";
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(428, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 13);
			this->textBox2->TabIndex = 45;
			this->textBox2->Text = L"0";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(633, 58);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 13);
			this->textBox3->TabIndex = 46;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(806, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(42, 13);
			this->textBox4->TabIndex = 47;
			this->textBox4->Text = L"0";
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::Transparent;
			this->Enter->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Enter->Location = System::Drawing::Point(521, 99);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(68, 24);
			this->Enter->TabIndex = 48;
			this->Enter->Text = L"Enter";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &Clock::Enter_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(980, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 26);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Hide buttons (ctrl + H)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Clock::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1171, 24);
			this->menuStrip1->TabIndex = 50;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::H));
			this->toolStripMenuItem1->Size = System::Drawing::Size(125, 20);
			this->toolStripMenuItem1->Text = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Visible = false;
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Clock::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 60000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Clock::timer1_Tick);
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(980, 146);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(138, 29);
			this->start->TabIndex = 51;
			this->start->Text = L"Start time";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Clock::start_Click);
			// 
			// Stop
			// 
			this->Stop->Location = System::Drawing::Point(980, 195);
			this->Stop->Name = L"Stop";
			this->Stop->Size = System::Drawing::Size(138, 29);
			this->Stop->TabIndex = 52;
			this->Stop->Text = L"Stop time";
			this->Stop->UseVisualStyleBackColor = true;
			this->Stop->Click += gcnew System::EventHandler(this, &Clock::Stop_Click);
			// 
			// checkTimer
			// 
			this->checkTimer->AutoSize = true;
			this->checkTimer->BackColor = System::Drawing::Color::Silver;
			this->checkTimer->Location = System::Drawing::Point(1016, 264);
			this->checkTimer->Name = L"checkTimer";
			this->checkTimer->Size = System::Drawing::Size(52, 17);
			this->checkTimer->TabIndex = 53;
			this->checkTimer->Text = L"Timer";
			this->checkTimer->UseVisualStyleBackColor = false;
			// 
			// radioReal
			// 
			this->radioReal->AutoSize = true;
			this->radioReal->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioReal->Location = System::Drawing::Point(1006, 354);
			this->radioReal->Name = L"radioReal";
			this->radioReal->Size = System::Drawing::Size(69, 17);
			this->radioReal->TabIndex = 54;
			this->radioReal->Text = L"Real time";
			this->radioReal->UseVisualStyleBackColor = true;
			this->radioReal->CheckedChanged += gcnew System::EventHandler(this, &Clock::radioReal_CheckedChanged);
			// 
			// radioFast
			// 
			this->radioFast->AutoSize = true;
			this->radioFast->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioFast->Location = System::Drawing::Point(1006, 377);
			this->radioFast->Name = L"radioFast";
			this->radioFast->Size = System::Drawing::Size(67, 17);
			this->radioFast->TabIndex = 55;
			this->radioFast->Text = L"Fast time";
			this->radioFast->UseVisualStyleBackColor = true;
			this->radioFast->CheckedChanged += gcnew System::EventHandler(this, &Clock::radioFast_CheckedChanged);
			// 
			// radioSec
			// 
			this->radioSec->AutoSize = true;
			this->radioSec->Checked = true;
			this->radioSec->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->radioSec->Location = System::Drawing::Point(1006, 400);
			this->radioSec->Name = L"radioSec";
			this->radioSec->Size = System::Drawing::Size(67, 17);
			this->radioSec->TabIndex = 56;
			this->radioSec->TabStop = true;
			this->radioSec->Text = L"Seconds";
			this->radioSec->UseVisualStyleBackColor = true;
			this->radioSec->CheckedChanged += gcnew System::EventHandler(this, &Clock::radioSec_CheckedChanged);
			// 
			// Clock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1171, 589);
			this->Controls->Add(this->radioSec);
			this->Controls->Add(this->radioFast);
			this->Controls->Add(this->radioReal);
			this->Controls->Add(this->checkTimer);
			this->Controls->Add(this->Stop);
			this->Controls->Add(this->start);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->right41);
			this->Controls->Add(this->left41);
			this->Controls->Add(this->right42);
			this->Controls->Add(this->left42);
			this->Controls->Add(this->mid4);
			this->Controls->Add(this->down4);
			this->Controls->Add(this->top4);
			this->Controls->Add(this->right31);
			this->Controls->Add(this->left31);
			this->Controls->Add(this->right32);
			this->Controls->Add(this->left32);
			this->Controls->Add(this->mid3);
			this->Controls->Add(this->down3);
			this->Controls->Add(this->top3);
			this->Controls->Add(this->right21);
			this->Controls->Add(this->left21);
			this->Controls->Add(this->right22);
			this->Controls->Add(this->left22);
			this->Controls->Add(this->mid2);
			this->Controls->Add(this->down2);
			this->Controls->Add(this->top2);
			this->Controls->Add(this->right11);
			this->Controls->Add(this->left11);
			this->Controls->Add(this->right12);
			this->Controls->Add(this->left12);
			this->Controls->Add(this->mid1);
			this->Controls->Add(this->down1);
			this->Controls->Add(this->top1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Clock";
			this->Text = L"Clock";
			this->Load += gcnew System::EventHandler(this, &Clock::Kursova_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->right42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->left42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mid4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->top4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	
	

private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
	int number1 = Convert::ToInt32(textBox1->Text);
	int number2 = Convert::ToInt32(textBox2->Text);
	int number3 = Convert::ToInt32(textBox3->Text);
	int number4 = Convert::ToInt32(textBox4->Text);

	switch (number1) {
	case 1:
		top1->Visible = 0;
		left11->Visible = 0;
		left12->Visible = 0;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 0;
		mid1->Visible = 0;
		break;
	case 2:
		top1->Visible = 1;
		left11->Visible = 0;
		left12->Visible = 1;
		right11->Visible = 1;
		right12->Visible = 0;
		down1->Visible = 1;
		mid1->Visible = 1;
		break;
	case 3:
		top1->Visible = 1;
		left11->Visible = 0;
		left12->Visible = 0;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 1;
		mid1->Visible = 1;
		break;
	case 4:
		top1->Visible = 0;
		left11->Visible = 1;
		left12->Visible = 0;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 0;
		mid1->Visible = 1;
		break;
	case 5:
		top1->Visible = 1;
		left11->Visible = 1;
		left12->Visible = 0;
		right11->Visible = 0;
		right12->Visible = 1;
		down1->Visible = 1;
		mid1->Visible = 1;
		break;
	case 6:
		top1->Visible = 1;
		left11->Visible = 1;
		left12->Visible = 1;
		right11->Visible = 0;
		right12->Visible = 1;
		down1->Visible = 1;
		mid1->Visible = 1;
		break;
	case 7:
		top1->Visible = 1;
		left11->Visible = 0;
		left12->Visible = 0;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 0;
		mid1->Visible = 0;
		break;
	case 8:
		top1->Visible = 1;
		left11->Visible = 1;
		left12->Visible = 1;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 1;
		mid1->Visible = 1;
		break;
	case 9:
		top1->Visible = 1;
		left11->Visible = 1;
		left12->Visible = 0;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 1;
		mid1->Visible = 1;
		break;
	case 0:
		top1->Visible = 1;
		left11->Visible = 1;
		left12->Visible = 1;
		right11->Visible = 1;
		right12->Visible = 1;
		down1->Visible = 1;
		mid1->Visible = 0;
		break;
	default:
		top1->Visible = 0;
		left11->Visible = 0;
		left12->Visible = 0;
		right11->Visible = 0;
		right12->Visible = 0;
		down1->Visible = 0;
		mid1->Visible = 0;
		break;
	}

	switch (number2) {
	case 1:
		top2->Visible = 0;
		left21->Visible = 0;
		left22->Visible = 0;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 0;
		mid2->Visible = 0;
		break;
	case 2:
		top2->Visible = 1;
		left21->Visible = 0;
		left22->Visible = 1;
		right21->Visible = 1;
		right22->Visible = 0;
		down2->Visible = 1;
		mid2->Visible = 1;
		break;
	case 3:
		top2->Visible = 1;
		left21->Visible = 0;
		left22->Visible = 0;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 1;
		mid2->Visible = 1;
		break;
	case 4:
		top2->Visible = 0;
		left21->Visible = 1;
		left22->Visible = 0;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 0;
		mid2->Visible = 1;
		break;
	case 5:
		top2->Visible = 1;
		left21->Visible = 1;
		left22->Visible = 0;
		right21->Visible = 0;
		right22->Visible = 1;
		down2->Visible = 1;
		mid2->Visible = 1;
		break;
	case 6:
		top2->Visible = 1;
		left21->Visible = 1;
		left22->Visible = 1;
		right21->Visible = 0;
		right22->Visible = 1;
		down2->Visible = 1;
		mid2->Visible = 1;
		break;
	case 7:
		top2->Visible = 1;
		left21->Visible = 0;
		left22->Visible = 0;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 0;
		mid2->Visible = 0;
		break;
	case 8:
		top2->Visible = 1;
		left21->Visible = 1;
		left22->Visible = 1;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 1;
		mid2->Visible = 1;
		break;
	case 9:
		top2->Visible = 1;
		left21->Visible = 1;
		left22->Visible = 0;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 1;
		mid2->Visible = 1;
		break;
	case 0:
		top2->Visible = 1;
		left21->Visible = 1;
		left22->Visible = 1;
		right21->Visible = 1;
		right22->Visible = 1;
		down2->Visible = 1;
		mid2->Visible = 0;
		break;
	default:
		top2->Visible = 0;
		left21->Visible = 0;
		left22->Visible = 0;
		right21->Visible = 0;
		right22->Visible = 0;
		down2->Visible = 0;
		mid2->Visible = 0;
		break;
	}

	switch (number3) {
	case 1:
		top3->Visible = 0;
		left31->Visible = 0;
		left32->Visible = 0;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 0;
		mid3->Visible = 0;
		break;
	case 2:
		top3->Visible = 1;
		left31->Visible = 0;
		left32->Visible = 1;
		right31->Visible = 1;
		right32->Visible = 0;
		down3->Visible = 1;
		mid3->Visible = 1;
		break;
	case 3:
		top3->Visible = 1;
		left31->Visible = 0;
		left32->Visible = 0;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 1;
		mid3->Visible = 1;
		break;
	case 4:
		top3->Visible = 0;
		left31->Visible = 1;
		left32->Visible = 0;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 0;
		mid3->Visible = 1;
		break;
	case 5:
		top3->Visible = 1;
		left31->Visible = 1;
		left32->Visible = 0;
		right31->Visible = 0;
		right32->Visible = 1;
		down3->Visible = 1;
		mid3->Visible = 1;
		break;
	case 6:
		top3->Visible = 1;
		left31->Visible = 1;
		left32->Visible = 1;
		right31->Visible = 0;
		right32->Visible = 1;
		down3->Visible = 1;
		mid3->Visible = 1;
		break;
	case 7:
		top3->Visible = 1;
		left31->Visible = 0;
		left32->Visible = 0;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 0;
		mid3->Visible = 0;
		break;
	case 8:
		top3->Visible = 1;
		left31->Visible = 1;
		left32->Visible = 1;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 1;
		mid3->Visible = 1;
		break;
	case 9:
		top3->Visible = 1;
		left31->Visible = 1;
		left32->Visible = 0;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 1;
		mid3->Visible = 1;
		break;
	case 0:
		top3->Visible = 1;
		left31->Visible = 1;
		left32->Visible = 1;
		right31->Visible = 1;
		right32->Visible = 1;
		down3->Visible = 1;
		mid3->Visible = 0;
		break;
	default:
		top3->Visible = 0;
		left31->Visible = 0;
		left32->Visible = 0;
		right31->Visible = 0;
		right32->Visible = 0;
		down3->Visible = 0;
		mid3->Visible = 0;
		break;
	}

	switch (number4) {
	case 1:
		top4->Visible = 0;
		left41->Visible = 0;
		left42->Visible = 0;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 0;
		mid4->Visible = 0;
		break;
	case 2:
		top4->Visible = 1;
		left41->Visible = 0;
		left42->Visible = 1;
		right41->Visible = 1;
		right42->Visible = 0;
		down4->Visible = 1;
		mid4->Visible = 1;
		break;
	case 3:
		top4->Visible = 1;
		left41->Visible = 0;
		left42->Visible = 0;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 1;
		mid4->Visible = 1;
		break;
	case 4:
		top4->Visible = 0;
		left41->Visible = 1;
		left42->Visible = 0;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 0;
		mid4->Visible = 1;
		break;
	case 5:
		top4->Visible = 1;
		left41->Visible = 1;
		left42->Visible = 0;
		right41->Visible = 0;
		right42->Visible = 1;
		down4->Visible = 1;
		mid4->Visible = 1;
		break;
	case 6:
		top4->Visible = 1;
		left41->Visible = 1;
		left42->Visible = 1;
		right41->Visible = 0;
		right42->Visible = 1;
		down4->Visible = 1;
		mid4->Visible = 1;
		break;
	case 7:
		top4->Visible = 1;
		left41->Visible = 0;
		left42->Visible = 0;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 0;
		mid4->Visible = 0;
		break;
	case 8:
		top4->Visible = 1;
		left41->Visible = 1;
		left42->Visible = 1;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 1;
		mid4->Visible = 1;
		break;
	case 9:
		top4->Visible = 1;
		left41->Visible = 1;
		left42->Visible = 0;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 1;
		mid4->Visible = 1;
		break;
	case 0:
		top4->Visible = 1;
		left41->Visible = 1;
		left42->Visible = 1;
		right41->Visible = 1;
		right42->Visible = 1;
		down4->Visible = 1;
		mid4->Visible = 0;
		break;
	default:
		top4->Visible = 0;
		left41->Visible = 0;
		left42->Visible = 0;
		right41->Visible = 0;
		right42->Visible = 0;
		down4->Visible = 0;
		mid4->Visible = 0;
		break;
	}

}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (counter==0) {
		textBox1->Visible = 0;
		textBox2->Visible = 0;
		textBox3->Visible = 0;
		textBox4->Visible = 0;
		Enter->Visible = 0;
		button1->Visible = 0;

		Stop->Visible = 0;
		start->Visible = 0;
		checkTimer->Visible = 0;
		radioFast->Visible = 0;
		radioSec->Visible = 0;
		radioReal->Visible = 0;
		counter = !counter;

	}
	else {
		textBox1->Visible = 1;
		textBox2->Visible = 1;
		textBox3->Visible = 1;
		textBox4->Visible = 1;

		radioFast->Visible = 1;
		radioSec->Visible = 1;
		radioReal->Visible = 1;
		Stop->Visible = 1;
		start->Visible = 1;
		Enter->Visible = 1;
		button1->Visible = 1;
		checkTimer->Visible = 1;
		counter = !counter;
		
	}
}
private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = 1;
}
private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = 0;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	int number1 = Convert::ToInt32(textBox1->Text);
	int number2 = Convert::ToInt32(textBox2->Text);
	int number3 = Convert::ToInt32(textBox3->Text);
	int number4 = Convert::ToInt32(textBox4->Text);
	bool switch1 = checkTimer->Checked;
	if (switch1 == 0) {
		number4++;
		if (number4 >= 10)
		{
			number3++;
			number4 = 0;
		}
		if (number3 >= 6)
		{
			number2++;
			number3 = 0;
		}
		if (number2 >= 4 && number1 == 2)
		{
			number2 = 0;
			number1 = 0;
		}
		else if (number2 >= 10) {
			number2 = 0;
			number1++;
		}
	}
	else {
		number4--;
		if (number4 < 0)
		{
			number3--;
			number4 = 9;
		}
		if (number3 < 0)
		{
			number2--;
			number3 = 5;
		}
		if (number2 < 0)
		{
			number2 = 9;
			number1 --;
		}
		if (number1 <= 0 && number2 == 0 && number3 == 0 && number4 == 0)
		{
			this->Stop_Click(nullptr, nullptr);
		}
		if (number1 < 0) {
			number1 = 0;
			number2 = 0;
			number3 = 0;
			number4 = 0;
			this->Stop_Click(nullptr, nullptr);
		}
	}
	textBox1->Text = number1.ToString();
	textBox2->Text = number2.ToString();
	textBox3->Text = number3.ToString();
	textBox4->Text = number4.ToString();
	this->Enter_Click(nullptr, nullptr);

}
private: System::Void Kursova_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Enter_Click(nullptr, nullptr);
}
private: System::Void radioFast_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioFast->Checked == 1) timer1->Interval = 50;
	else if(radioReal->Checked ==1) timer1->Interval = 60000;
	else timer1->Interval = 1000;
}
private: System::Void radioReal_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioFast->Checked == 1) timer1->Interval = 50;
	else if (radioReal->Checked == 1) timer1->Interval = 60000;
	else timer1->Interval = 1000;
}
private: System::Void radioSec_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioFast->Checked == 1) timer1->Interval = 50;
	else if (radioReal->Checked == 1) timer1->Interval = 60000;
	else timer1->Interval = 1000;
}
};
}
