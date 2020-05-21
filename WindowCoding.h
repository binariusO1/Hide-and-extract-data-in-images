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
			WindowCoding(void) {
				InitializeComponent();
			}
		protected:
			~WindowCoding(){
				if (components){
					delete components;
				}
			}

//************************************************************
//		WINDOW FORM ELEMENTS
//************************************************************
		private: 
			System::Windows::Forms::TabControl^ tabControl1;
			System::Windows::Forms::TabPage^ tabPage1;
			System::Windows::Forms::TabPage^ tabPage2;
			System::ComponentModel::IContainer^ components;
//		C
	private: System::Windows::Forms::ListBox^ C_listBox_Main;
	private: System::Windows::Forms::GroupBox^ C_groupBox_Main;
	private: System::Windows::Forms::Label^ C_label_Height_Main;
	private: System::Windows::Forms::Label^ C_label_Width_Main;
			System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ C_button_Process;
	private: System::Windows::Forms::GroupBox^ C_groupBox_Hide;
	private: System::Windows::Forms::Label^ C_label_Height_Hide;
	private: System::Windows::Forms::Label^ C_label_Width_Hide;
	private: System::Windows::Forms::ListBox^ C_listBox_Hide;
	private: System::Windows::Forms::Button^ C_button_ResProcess;
//		D
	private: System::Windows::Forms::Button^ D_button_Process;
	private: System::Windows::Forms::GroupBox^ D_groupBox;
	private: System::Windows::Forms::Label^ D_label_Height;
	private: System::Windows::Forms::Label^ D_label_Width;
	private: System::Windows::Forms::ListBox^ D_listBox;


#pragma region Windows Form Designer generated code
	private:
		void InitializeComponent(void);

//************************************************************
//		DRAG & DROP EVENTS
//************************************************************
	private:
		System::Void listBox1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void listBox1_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
	};
}
