#pragma once
namespace A320AileronDampingTest {

	using namespace System;
	using namespace System::Text;
	using namespace System::Threading::Tasks;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	private: int _x = 78;
	private: int _y = 157;
	private: int objPosition;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::IO::Ports::SerialPort^  serialPort1;


	public:
	private: System::Windows::Forms::Form ^ otherform;
	public:
		MyForm9(System::Windows::Forms::Form ^ o)
		{

			otherform = o;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(78, 157);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(14, 28);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm9::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(309, 390);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(231, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PORT IS NOT CONNECTED";
			// 
			// comboBox1
			// 
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(419, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->TabStop = false;
			this->comboBox1->DropDownClosed += gcnew System::EventHandler(this, &MyForm9::comboBox1_DropDownClosed);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12.75F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(309, 373);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PORT IS NOT OPENED";
			// 
			// serialPort1
			// 
			this->serialPort1->BaudRate = 115200;
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(543, 497);
			this->ControlBox = false;
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Location = System::Drawing::Point(680, 100);
			this->MaximumSize = System::Drawing::Size(559, 535);
			this->MinimumSize = System::Drawing::Size(559, 535);
			this->Name = L"MyForm9";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Interactive Aircraft System Operation and Testing";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			this->VisibleChanged += gcnew System::EventHandler(this, &MyForm9::MyForm9_VisibleChanged);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm9::MyForm9_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	


#pragma endregion

	

	private: System::Void MyForm9_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		if (this->serialPort1->IsOpen)
		{
			if (e->KeyCode == Keys::Up)
			{	
				this->label1->ForeColor = System::Drawing::Color::Lime;
				this->label1->Text = L"PORT IS NOW CONNECTED";
				objPosition = 0;
				this->serialPort1->Write("C");
				this->timer1->Enabled = true;
			}
			else if (e->KeyCode == Keys::Down)
			{
				this->label1->ForeColor = System::Drawing::Color::Lime;
				this->label1->Text = L"PORT IS NOW CONNECTED";
				objPosition = 1;
				this->serialPort1->Write("D");
				this->timer1->Enabled = true;
			}
		}

		else
		{
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Text = L"PORT IS NOT CONNECTED";
		}
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		if (objPosition == 0)
		{
			if (_y <= 119)
			{
				this->timer1->Enabled = false;
			}
			if (_y > 119)
			{
				_y -= 10;
				this->pictureBox1->Location = System::Drawing::Point(_x, _y);
			}
		}
		else if (objPosition == 1)
		{
			if (_y >= 199)
			{
				this->timer1->Enabled = false;
			}
			if (_y < 199)
			{
				_y += 10;
				this->pictureBox1->Location = System::Drawing::Point(_x, _y);
			}
		}

	}


	
	private: System::Void MyForm9_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		array<String^>^ serialPorts = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(serialPorts);
	}

	private: System::Void comboBox1_DropDownClosed(System::Object^  sender, System::EventArgs^  e)
	{
		String^message = "PLEASE TRY ANOTHER PORT AGAIN !";
		System::Windows::Forms::DialogResult result;
		if (this->comboBox1->Text != String::Empty)
		{
			this->serialPort1->PortName = this->comboBox1->Text;
			this->serialPort1->BaudRate = 115200;
			this->comboBox1->Enabled = false;
			try
			{
				this->serialPort1->Open();
				this->label2->ForeColor = System::Drawing::Color::Lime;
				this->label2->Text = L"PORT IS OPENED";
			}
			catch (Exception ^)
			{
				this->serialPort1->Close();
				this->label2->ForeColor = System::Drawing::Color::Red;
				this->label2->Text = L"PORT IS NOT OPENED";
				result = MessageBox::Show(this, message);
				this->comboBox1->Enabled = true;
			}
		}
	}
		private: System::Void MyForm9_VisibleChanged(System::Object^  sender, System::EventArgs^  e)
	{
			this->serialPort1->Close();
			this->comboBox1->ResetText();
			this->comboBox1->SelectedIndex = -1;
			this->comboBox1->Enabled = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Text = L"PORT IS NOT OPENED";
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Text = L"PORT IS NOT CONNECTED";
	}
};
}
