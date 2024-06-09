#pragma once
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
namespace A320AileronDampingTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>

	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^ otherform;
	public:
		MyForm5(System::Windows::Forms::Form ^ o)
		{
			otherform = o;
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
				MyForm7 ^ frm7 = gcnew MyForm7(this);
				MyForm9 ^ frm9 = gcnew MyForm9(this);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm5()
		{
			if (components)
			{
				
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	private: System::ComponentModel::IContainer^  components;


	protected:

	private: int card;
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
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->button7 = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->SuspendLayout();
				 // 
				 // button1
				 // 
				 this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				 this->button1->Location = System::Drawing::Point(97, 139);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(295, 23);
				 this->button1->TabIndex = 0;
				 this->button1->Text = L"─ SELECT ELAC 1 + 2 ON";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
				 // 
				 // button2
				 // 
				 this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button2->ForeColor = System::Drawing::Color::White;
				 this->button2->Location = System::Drawing::Point(87, 181);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(305, 23);
				 this->button2->TabIndex = 1;
				 this->button2->Text = L"─ SELECT SEC 1 + 2 OFF";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
				 // 
				 // button3
				 // 
				 this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button3->ForeColor = System::Drawing::Color::White;
				 this->button3->Location = System::Drawing::Point(87, 222);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(320, 23);
				 this->button3->TabIndex = 2;
				 this->button3->Text = L"─ SELECT BGY HYD PRESS";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
				 // 
				 // button4
				 // 
				 this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button4->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button4->ForeColor = System::Drawing::Color::White;
				 this->button4->Location = System::Drawing::Point(97, 269);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(329, 23);
				 this->button4->TabIndex = 3;
				 this->button4->Text = L"─ SELECT ADIRU 1 + 2 + 3 OFF";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
				 // 
				 // button5
				 // 
				 this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button5->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button5->ForeColor = System::Drawing::Color::White;
				 this->button5->Location = System::Drawing::Point(72, 316);
				 this->button5->Name = L"button5";
				 this->button5->Size = System::Drawing::Size(320, 23);
				 this->button5->TabIndex = 4;
				 this->button5->Text = L"< START LEFT AIL TEST";
				 this->button5->UseVisualStyleBackColor = true;
				 this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button5_Click);
				 // 
				 // button6
				 // 
				 this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button6->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button6->ForeColor = System::Drawing::Color::White;
				 this->button6->Location = System::Drawing::Point(72, 357);
				 this->button6->Name = L"button6";
				 this->button6->Size = System::Drawing::Size(320, 23);
				 this->button6->TabIndex = 5;
				 this->button6->Text = L"< START RIGHT AIL TEST";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &MyForm5::button6_Click);
				 // 
				 // button7
				 // 
				 this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->button7->BackColor = System::Drawing::Color::Black;
				 this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
				 this->button7->Font = (gcnew System::Drawing::Font(L"新細明體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->button7->ForeColor = System::Drawing::Color::Aqua;
				 this->button7->Location = System::Drawing::Point(32, 413);
				 this->button7->Name = L"button7";
				 this->button7->Size = System::Drawing::Size(111, 23);
				 this->button7->TabIndex = 6;
				 this->button7->Text = L"< RETURN";
				 this->button7->UseVisualStyleBackColor = false;
				 this->button7->Click += gcnew System::EventHandler(this, &MyForm5::button7_Click);
				 // 
				 // label1
				 // 
				 this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->label1->AutoSize = true;
				 this->label1->BackColor = System::Drawing::Color::Transparent;
				 this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->label1->ForeColor = System::Drawing::Color::White;
				 this->label1->Location = System::Drawing::Point(163, 57);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(223, 17);
				 this->label1->TabIndex = 7;
				 this->label1->Text = L"AILERON DAMPING TEST";
				 // 
				 // label2
				 // 
				 this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->label2->AutoSize = true;
				 this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->label2->ForeColor = System::Drawing::Color::Red;
				 this->label2->Location = System::Drawing::Point(152, 105);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(255, 17);
				 this->label2->TabIndex = 8;
				 this->label2->Text = L"CAUTION : SURF WILL MOVE";
				 // 
				 // label3
				 // 
				 this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->label3->AutoSize = true;
				 this->label3->BackColor = System::Drawing::Color::Transparent;
				 this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(136)));
				 this->label3->ForeColor = System::Drawing::Color::White;
				 this->label3->Location = System::Drawing::Point(239, 22);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(60, 17);
				 this->label3->TabIndex = 9;
				 this->label3->Text = L"EFCS1";
				 // 
				 // MyForm5
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::Black;
				 this->ClientSize = System::Drawing::Size(543, 497);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button7);
				 this->Controls->Add(this->button6);
				 this->Controls->Add(this->button5);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button1);
				 this->MaximumSize = System::Drawing::Size(559, 535);
				 this->MinimumSize = System::Drawing::Size(559, 535);
				 this->Name = L"MyForm5";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Interactive Aircraft System Operation and Testing";
				 this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm5::MyForm5_FormClosing_1);
				 this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
				 this->MouseEnter += gcnew System::EventHandler(this, &MyForm5::MyForm5_MouseEnter);
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion

	private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->Hide();
		otherform->Show();

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm6 ^ frm6 = gcnew MyForm6(this);
		frm6->Show();
		frm7->Show();
		this->Hide();
	}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm8 ^ frm8 = gcnew MyForm8(this);
		frm8->Show();
		frm9->Show();
		this->Hide();
		
	}
private: System::Void MyForm5_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
	{
		frm7->Hide();
		frm9->Hide();
	}
private: System::Void MyForm5_FormClosing_1(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e)
	{
		Application::Exit();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	String^message = "This is not a correct button. Please try another one !";
	System::Windows::Forms::DialogResult result;
	result = MessageBox::Show(this, message);
	}
};

}