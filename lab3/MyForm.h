#pragma once
#include<cmath>
namespace lab3 {

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
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:







	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ обчислитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ обчислитиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem1;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->обчислитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->обчислитиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(786, 591);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Orange;
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(778, 558);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 2";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::SpringGreen;
			this->button4->Location = System::Drawing::Point(536, 431);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(119, 41);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::SpringGreen;
			this->button3->Location = System::Drawing::Point(536, 297);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 41);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LemonChiffon;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(290, 255);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(224, 284);
			this->listBox1->TabIndex = 8;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(59, 122);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(669, 127);
			this->panel1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox2->Location = System::Drawing::Point(396, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox1->Location = System::Drawing::Point(212, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"b";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(250, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"a";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(59, 48);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(670, 57);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->обчислитиToolStripMenuItem,
					this->очиститиToolStripMenuItem, this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(772, 36);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// обчислитиToolStripMenuItem
			// 
			this->обчислитиToolStripMenuItem->BackColor = System::Drawing::Color::Linen;
			this->обчислитиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Arial Black", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->обчислитиToolStripMenuItem->Name = L"обчислитиToolStripMenuItem";
			this->обчислитиToolStripMenuItem->Size = System::Drawing::Size(140, 32);
			this->обчислитиToolStripMenuItem->Text = L"Обчислити";
			this->обчислитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обчислитиToolStripMenuItem_Click);
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->BackColor = System::Drawing::Color::Tan;
			this->очиститиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(116, 32);
			this->очиститиToolStripMenuItem->Text = L"Очистити";
			this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->BackColor = System::Drawing::Color::Linen;
			this->проПрограмуToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(174, 32);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->BackColor = System::Drawing::Color::Tan;
			this->проАвтораToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(146, 32);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Controls->Add(this->menuStrip2);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(778, 558);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(210, 507);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(292, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Кількість додатних елементів:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(488, 448);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(181, 448);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->richTextBox1->Location = System::Drawing::Point(258, 114);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(244, 314);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(671, 41);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->обчислитиToolStripMenuItem1,
					this->очиститиToolStripMenuItem1, this->проПрограмуToolStripMenuItem1, this->проАвтораToolStripMenuItem1
			});
			this->menuStrip2->Location = System::Drawing::Point(3, 3);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(772, 36);
			this->menuStrip2->TabIndex = 5;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// обчислитиToolStripMenuItem1
			// 
			this->обчислитиToolStripMenuItem1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->обчислитиToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->обчислитиToolStripMenuItem1->Name = L"обчислитиToolStripMenuItem1";
			this->обчислитиToolStripMenuItem1->Size = System::Drawing::Size(140, 32);
			this->обчислитиToolStripMenuItem1->Text = L"Обчислити";
			this->обчислитиToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::обчислитиToolStripMenuItem1_Click);
			// 
			// очиститиToolStripMenuItem1
			// 
			this->очиститиToolStripMenuItem1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->очиститиToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->очиститиToolStripMenuItem1->Name = L"очиститиToolStripMenuItem1";
			this->очиститиToolStripMenuItem1->Size = System::Drawing::Size(124, 32);
			this->очиститиToolStripMenuItem1->Text = L"Очистити";
			this->очиститиToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::очиститиToolStripMenuItem1_Click);
			// 
			// проПрограмуToolStripMenuItem1
			// 
			this->проПрограмуToolStripMenuItem1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->проПрограмуToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->проПрограмуToolStripMenuItem1->Name = L"проПрограмуToolStripMenuItem1";
			this->проПрограмуToolStripMenuItem1->Size = System::Drawing::Size(174, 32);
			this->проПрограмуToolStripMenuItem1->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem1_Click);
			// 
			// проАвтораToolStripMenuItem1
			// 
			this->проАвтораToolStripMenuItem1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->проАвтораToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->проАвтораToolStripMenuItem1->Name = L"проАвтораToolStripMenuItem1";
			this->проАвтораToolStripMenuItem1->Size = System::Drawing::Size(146, 32);
			this->проАвтораToolStripMenuItem1->Text = L"Про автора";
			this->проАвтораToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(789, 602);
			this->Controls->Add(this->tabControl1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота 3";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int  i = 1, k = 0, num;
		Random^ rnd = gcnew Random();
		while (i <= 10)
		{
			num = (float)rnd->Next(-100, 101) / 10.0;
			richTextBox1->AppendText(Convert::ToString(num) + "\r\n");
			if (num > 0)
			{
				k++;
			}
			i++;
		}
		label1->Text = "Кількість додатних k=" + Convert::ToString(k);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);
		double h = 0.05; // Обчислюємо крок h

		listBox1->Items->Add("x\t|\ty");
		listBox1->Items->Add("=====================");

		for (double x = a; x <= b; x += h)
		{
			// Перевіряємо, щоб x належав допустимому діапазону для функції Math::Asin(x)
			if (x >= -1 && x <= 1)
			{
				double y = Math::Asin(x);
				listBox1->Items->Add(x.ToString("0.00") + "\t|\t" + y.ToString("0.00"));
			}
		}
	}
	private: System::Void обчислитиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);
		double h = 0.05; // Обчислюємо крок h

		listBox1->Items->Add("x\t|\ty");
		listBox1->Items->Add("=====================");

		for (double x = a; x <= b; x += h)
		{
			// Перевіряємо, щоб x належав допустимому діапазону для функції Math::Asin(x)
			if (x >= -1 && x <= 1)
			{
				double y = Math::Asin(x);
				listBox1->Items->Add(x.ToString("0.00") + "\t|\t" + y.ToString("0.00"));
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void очиститиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
	}
	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Це програма, яка дає змогу нам протабулювати задану функцію, тобто обчислити значення функції на відрізку з кроком h.", "Про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Автор цієї програми-Брицова Ілона Богданівна. Студентка Вінницького державного педагогічного університету імені Михайла Коцюбинського за спеціальністю Математика, Інфоматика. 3 курс.", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void обчислитиToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		int  i = 1, k = 0, num;
		Random^ rnd = gcnew Random();
		while (i <= 10)
		{
			num = (float)rnd->Next(-100, 101) / 10.0;
			richTextBox1->AppendText(Convert::ToString(num) + "\r\n");
			if (num > 0)
			{
				k++;
			}
			i++;
		}
		label1->Text = "Кількість додатних k=" + Convert::ToString(k);
	}
	private: System::Void очиститиToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
	}
private: System::Void проПрограмуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Це програма, яка дає змогу ввести 10 дійсних чисел та обчислити кількість додатних елементів", "Про програму", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void проАвтораToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Автор цієї програми-Брицова Ілона Богданівна. Студентка Вінницького державного педагогічного університету імені Михайла Коцюбинського за спеціальністю Математика, Інфоматика. 3 курс.", "Про автора", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
	}
