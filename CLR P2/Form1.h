#pragma once

//#include <msclr\marshal_cppstd.h>

#include <iostream>
#include <fstream>
#include <list>


namespace CppCLRWinformsProjekt {

	//using namespace System;
	//using namespace System::IO;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	using namespace System::Windows::Forms;
	//using namespace System::Data;
	//using namespace System::Drawing;

	//using namespace std;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			ndobj = gcnew System::Collections::Generic::List<System::String^>;
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;

			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	/// <summary>
	/// ////////////////
	/// </summary>
	private: System::Collections::Generic::List<System::String^>^ ndobj;
	private: System::Collections::Generic::List<System::String^>^ mlist;// = gcnew System::Collections::Generic::List<System::String^>();
	private: System::String^ vard = "";
	private: System::String^ pvrd = "";
	private: System::Double^ nvid = 0.0;
	private: System::Double egz;
	private: System::Double GP = 0.0;
	private: System::String^ failo_vardas = "";
	private: Int32 counter = 0;
	/// <summary>
	/// //////////////
	/// </summary>

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;


	private:

		System::ComponentModel::Container^ components;
		
#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(331, 43);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(358, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Galutinio pažymio skaičiuoklė";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 114);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Vardas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 156);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Pavardė:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 110);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Vardas";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(132, 151);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 26);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Pavardė";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(113, 206);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Namų darbai";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(186, 246);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 26);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 251);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(133, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Viso namų darbų:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(38, 383);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 20);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Egzaminas:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(186, 379);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(45, 26);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(336, 552);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 44);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Išsaugoti kaip..";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 242);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 33);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Patvirtinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(141, 459);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(90, 24);
			this->radioButton1->TabIndex = 12;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Vidurkis";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(141, 489);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(95, 24);
			this->radioButton2->TabIndex = 13;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Mediana";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1058, 33);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(70, 29);
			this->fileToolStripMenuItem->Text = L"Failas";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->openToolStripMenuItem->Text = L"Atidaryti failą";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->saveToolStripMenuItem->Text = L"Išsaugoti";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->saveAsToolStripMenuItem->Text = L"Išsaugoti kaip..";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(232, 34);
			this->exitToolStripMenuItem->Text = L"Išeiti";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(64, 29);
			this->aboutToolStripMenuItem->Text = L"Apie";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(189, 552);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 44);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Pridėti studentą";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(42, 552);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 44);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Atidaryti failą";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->Location = System::Drawing::Point(113, 66);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 22);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Studentas";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label8->Location = System::Drawing::Point(641, 562);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 22);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Failas neatidarytas";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(478, 472);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(242, 29);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Galite skaičiuoti GP";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(77, 419);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(237, 22);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Namų darbų skaičiavimas";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(113, 341);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(106, 22);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Egzaminas";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(478, 114);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(520, 304);
			this->listBox1->TabIndex = 23;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(483, 552);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 44);
			this->button5->TabIndex = 24;
			this->button5->Text = L"Skaičiuoti GP";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(855, 56);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(143, 44);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Ištrinti";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(708, 56);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(143, 44);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Išsaugoti";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 642);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Location = System::Drawing::Point(500, 500);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Galutinio pažymio skaičiuoklė";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//saugoti kaip
		vard = textBox1->Text;
		pvrd = textBox2->Text;
		egz = Convert::ToInt32(textBox4->Text);

		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->InitialDirectory = "..\\";
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);
			failo_vardas = saveFileDialog1->FileName;
			sw->Write(vard + "|" + pvrd + "|");
			for (int i = 0; i < Convert::ToInt32(textBox3->Text); i++){
				sw->Write("ND" + (1 + i).ToString() + "=");
				sw->Write(Controls["nd" + (i).ToString()]->Text + "|");//paima nd reiksmes
			}
			sw->Write("EGZ=" + egz.ToString() + "\r\n");
			sw->Close();
			label8->Text = "Failas: " + failo_vardas;
			label9->Visible = true;
			label10->Visible = true;
			radioButton1->Visible = true;
			radioButton2->Visible = true;
		}
		else MessageBox::Show("Nebuvo failo pavadinimo!", "Klaida", MessageBoxButtons::OK);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//counter++; // kiek paspaudziamas button Patvirtinti.
		if (textBox3->Text == "") {
			MessageBox::Show("Įveskite namų darbus!", "Klaida", MessageBoxButtons::OK);
			return;
		}
		int nd = Convert::ToInt32(textBox3->Text), xb = 15;
		
		//cia reikia sunaikinti sukurtus objektus - jei tokiu yra

		if (nd < 1 || nd > 9) {
			MessageBox::Show("Min 1\nMax 9", "Klaida!", MessageBoxButtons::OK);
			return;
		}
		for (int i = 0; i < nd; i++) {
			TextBox^ b = gcnew TextBox;
			b->Location = System::Drawing::Point(xb, 194);
			b->Show();
			b->Size = Drawing::Size(31, 31);
			this->Controls->Add(b);
			b->Name = "nd" + i.ToString();
			b->Text = "ND" + (1 + i).ToString();
			if (i != 0) b->Location = System::Drawing::Point(xb += 46, 194);
			//	std::this_thread::sleep_for(std::chrono::milliseconds(50));

			ndobj->Add(Controls["nd" + (i).ToString()]->Text);//nebutinas, nes reik paspaudimo, kad issaugotu naujus nd
		}
		//for (int i = 0; i < nd; i++)
		//{
		//	richTextBox1->AppendText( Controls["nd" + (i).ToString()]->Text + "\n");
		//}
		if (nd >6) listBox1->Height = 100;
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form1::Close();
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show(L"  Programa išsaugo įvestus studento duomenis į txt failą;\n  Programa nuskaito txt failą;\n  Programa apskaičiuoja studento galutinį balą.",
		"Apie", MessageBoxButtons::OK);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//prideti stud
	vard = textBox1->Text;
	pvrd = textBox2->Text;
	egz = Convert::ToInt32(textBox4->Text);
	
	String^ z;
	if (textBox1->Text == "") z = " ";
	else z = textBox1->Text;
	if (failo_vardas != "")
	{
		System::IO::StreamWriter^ sw = System::IO::File::AppendText(failo_vardas);
		sw->Write(vard + "|" + pvrd + "|");
		for (int i = 0; i < Convert::ToInt32(textBox3->Text); i++) {
			sw->Write((1 + i).ToString());
			sw->Write(Controls["nd" + (i).ToString()]->Text + "|");//paima nd reiksmes
		}
		sw->Write("EGZ=" + egz.ToString() + "\r\n");
		sw->Close();
		label8->Text = "Failas: " + failo_vardas;
		label9->Visible = true;
		label10->Visible = true;
		radioButton1->Visible = true;
		radioButton2->Visible = true;
		listBox1->Items->Clear();
		openFile(failo_vardas);
	}
	else MessageBox::Show(L" Atidaryk failą!", "Failas nerastas", MessageBoxButtons::OK);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//open file
	listBox1->Items->Clear();
	openFileDialog1->InitialDirectory = "..\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";
	openFileDialog1->InitialDirectory = "..\\";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) openFile(openFileDialog1->FileName);
	if (failo_vardas != "") {
		label9->Visible = true;
		label10->Visible = true;
		radioButton1->Visible = true;
		radioButton2->Visible = true;
	}
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) radioButton2->Checked = false;
	else radioButton2->Checked = true;
	//0.4 * vidurkis + 0.6 * egzaminas
	int nd = Convert::ToInt32(textBox3->Text);
	for (int q = 0; q < nd; q++) {
		//nvid =  nvid + 


		//ndd[q] = (ndd[q] / ndx) * 0.4;
		//e[q] = e[q] * 0.6;
		//g[q] = ndd[q] + e[q];
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked) radioButton1->Checked = false;
	else radioButton1->Checked = true;

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {//skaiciuoti GP
	if (radioButton1->Checked == false || radioButton2->Checked == false)
	{
		MessageBox::Show(L" Pasirink vidurkį\n arba medianą!", "GP Klaida", MessageBoxButtons::OK);
		return;
	}
	if (failo_vardas != "")
	{
		//studInfoFromLine(listBox1->Items[1]->ToString());
	}
	else MessageBox::Show(L" Atidaryk failą!", "Failas nerastas", MessageBoxButtons::OK);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {//istrinti
	for (int i = listBox1->SelectedIndices->Count - 1; i >= 0; i--)
	{
		listBox1->Items->RemoveAt(listBox1->SelectedIndices[i]);
	}
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(failo_vardas);
	for each (auto item in listBox1->Items)
	{
		sw->WriteLine(item->ToString());
	}
	sw->Close();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {//issaugoti
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(failo_vardas);
	for each (auto item in listBox1->Items)
	{
		sw->WriteLine(item->ToString());
	}
	sw->Close();
}
	//public: void studInfoFromLine(System::String^ str)
	//{
	//	std::string str2 = msclr::interop::marshal_as<std::string>(str);//string^ to std string
	//	mlist->Clear();
	//	System::String^ info = "";
	//	for (char x : str2)
	//	{
	//		if (x == '|')
	//		{
	//			mlist->Add(info);
	//			info = "";
	//		}
	//		else info = info + x;
	//	}
	//}
	public: void openFile(System::String^ str)
	{
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(str);
		String^ line;
		listBox1->BeginUpdate();
		while ((line = sr->ReadLine()) != nullptr) listBox1->Items->Add(line);
		listBox1->EndUpdate();
		failo_vardas = openFileDialog1->FileName;
		sr->Close();
		label8->Text = "Failas: " + failo_vardas;
	}
};
}
