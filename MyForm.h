#pragma once
#include<cmath>
namespace Lab1 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(372, 283);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(364, 254);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 156);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 25);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(163, 106);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 25);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 106);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(143, 92);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 82);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 82);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введіть значення х";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(18, 25);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 53);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(52, 10);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Обчислення значення функції";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(364, 254);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(141, 169);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 28);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Очистити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 170);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 28);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(38, 132);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(60, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"2,5";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(38, 100);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(60, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"9";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(38, 71);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(60, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"5";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 134);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"c=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 105);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"b=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 71);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"a=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(19, 44);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введіть значення";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 6);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(175, 43);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(183, 15);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(97, 27);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"a=5; b=9; c=2,5";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(131, 52);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(122, 110);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 283);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, y;
		x = Convert::ToDouble(textBox1->Text);
		y = ((2*pow(cos(x),2))/1+cos(2*x)) + ((pow(0.4 ,x))/x*log(x)-2*pow(sin(x),2));
		richTextBox1->AppendText("\nx=" + textBox1->Text);
		richTextBox1->AppendText("\ny=" + y.ToString("0.00") + "\r");
	}
private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->AppendText("Лабораторна робота - Лінійні алгоритми" + "\r\n");
	richTextBox2->AppendText("Лабораторна робота - Лінійні алгоритми" + "\r\n");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = " ";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double a, b, c, f;
	a = Convert::ToDouble(textBox3->Text);
	b = Convert::ToDouble(textBox4->Text);
	c = Convert::ToDouble(textBox5->Text);
	f = ((-b - sqrt(pow(b, 2) + 4 * a * c)) / 2 * a) + fabs(c);
	richTextBox2->AppendText("\na=" + textBox3->Text + ", b=" + textBox4->Text + ", c=" + textBox5->Text);
	richTextBox2->AppendText("\nf=" + f.ToString("0.00") + "\r");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = " ";
	textBox4->Text = " ";	
	textBox5->Text = " ";
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}