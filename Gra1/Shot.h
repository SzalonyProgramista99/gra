#pragma once


namespace Gra1 {
	using namespace System::Windows::Forms;

	public ref class Shot {
	private: 
		System::Windows::Forms::PictureBox^ shot;
		System::Windows::Forms::Timer^ timer_shot;
	public:
		void CreateShot(System::Windows::Forms::Form^ form);
	};
}