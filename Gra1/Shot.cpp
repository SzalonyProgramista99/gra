#include "Shot.h"
namespace Gra1 {
	void Shot::CreateShot(System::Windows::Forms::Form^ form) {
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(form->GetType()));

		this->shot = (gcnew System::Windows::Forms::PictureBox());

		this->shot->BackColor = System::Drawing::Color::Transparent;
		this->shot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
		this->shot->Location = System::Drawing::Point(170, 128);
		this->shot->Name = L"pictureBox2";
		this->shot->Size = System::Drawing::Size(58, 22);
		this->shot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
		this->shot->TabIndex = 1;
		this->shot->TabStop = false;

		form->Controls->Add(this->shot);
	}
}