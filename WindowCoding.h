#pragma once

namespace Hideandextractdatainimages {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class WindowCoding : public System::Windows::Forms::Form
	{
	public:
		WindowCoding(void)
		{
			InitializeComponent();
		}

	protected:
		~WindowCoding()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(300,300);
			this->Text = L"WindowCoding";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		}
#pragma endregion
	};
}
