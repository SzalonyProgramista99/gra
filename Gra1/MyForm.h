#include "Shot.h"
#pragma once


namespace Gra1 {

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer_left;
	private: System::Windows::Forms::Timer^ timer_right;
	private: System::Windows::Forms::Timer^ timer_top;
	private: System::Windows::Forms::Timer^ timer_down;


	protected:

	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer_left = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_right = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_top = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_down = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(64, 102);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::PictureBox1_Click_1);
			// 
			// timer_left
			// 
			this->timer_left->Tick += gcnew System::EventHandler(this, &MyForm::Timer_left_Tick);
			// 
			// timer_right
			// 
			this->timer_right->Tick += gcnew System::EventHandler(this, &MyForm::Timer_right_Tick);
			// 
			// timer_top
			// 
			this->timer_top->Tick += gcnew System::EventHandler(this, &MyForm::Timer_up_Tick);
			// 
			// timer_down
			// 
			this->timer_down->Tick += gcnew System::EventHandler(this, &MyForm::Timer_down_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(641, 389);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Left) timer_left->Enabled = true;
	if (e->KeyCode == System::Windows::Forms::Keys::Right) timer_right->Enabled = true;
	if (e->KeyCode == System::Windows::Forms::Keys::Up) timer_top->Enabled = true;
	if (e->KeyCode == System::Windows::Forms::Keys::Down) timer_down->Enabled = true;
	if (e->KeyCode == System::Windows::Forms::Keys::Space)
	{
		Shot shot;
		shot.CreateShot();
	}
}
private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
private: System::Void MyForm_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == System::Windows::Forms::Keys::Left) timer_left->Enabled = false;
	if (e->KeyCode == System::Windows::Forms::Keys::Right) timer_right->Enabled = false;
	if (e->KeyCode == System::Windows::Forms::Keys::Up) timer_top->Enabled = false;
	if (e->KeyCode == System::Windows::Forms::Keys::Down) timer_down->Enabled = false;
}
private: System::Void Timer_left_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Left -= 10;
}
private: System::Void Timer_right_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Left += 10;
}
private: System::Void Timer_up_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Top -= 10;
}
private: System::Void Timer_down_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Top += 10;
}
};
}
