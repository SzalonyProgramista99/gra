#pragma once


namespace Gra1 {
	public ref class Shot {
	private: System::Windows::Forms::PictureBox^ shot;
	private: System::Windows::Forms::Timer^ timer_shot;
	public:
		void CreateShot();
		void DelateShot();
	};
}