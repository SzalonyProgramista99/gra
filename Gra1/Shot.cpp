//
//namespace Gra1 {
//	public class Shot
//	{
//	public: 
//		Shot(void) {
//
//		}
//	
//	private: System::Void Timer_shot_Tick(System::Object^ sender, System::EventArgs^ e) {
//
//		//this->shot->Left -= 20;
//
//	}
//	public: System::Void Create_Shot() {
//
//		/*System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
//
//		this->shot = (gcnew System::Windows::Forms::PictureBox());
//		this->shot->BackColor = System::Drawing::Color::Transparent;
//		this->shot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
//		this->shot->Location = System::Drawing::Point(170, 128);
//		this->shot->Name = L"pictureBox2";
//		this->shot->Size = System::Drawing::Size(58, 22);
//		this->shot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
//		this->shot->TabIndex = 1;
//		this->shot->TabStop = false;
//
//		this->Controls->Add(this->shot);*/
//	}
//	};
//}


#include "Shot.h"
namespace Gra1 {
	void Shot::CreateShot() {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Shot::typeid));

		this->shot = (gcnew System::Windows::Forms::PictureBox());
		this->shot->BackColor = System::Drawing::Color::Transparent;
		this->shot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
		this->shot->Location = System::Drawing::Point(170, 128);
		this->shot->Name = L"pictureBox2";
		this->shot->Size = System::Drawing::Size(58, 22);
		this->shot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->shot->TabIndex = 1;
		this->shot->TabStop = false;

		this->Controls->Add(this->shot);
	}

	}
