#pragma once


namespace Gra1 {
	using namespace System::Windows::Forms;

	public ref class Shot {
	private: 
		System::Windows::Forms::PictureBox^ shot;
		System::Windows::Forms::Timer^ timer_shot;
	public:
<<<<<<< HEAD
		void CreateShot();
		void DelateShot();
=======
		void CreateShot(System::Windows::Forms::Form^ form);
>>>>>>> 2b9541d895535d9d124d5c179aea7302a718e781
	};
}