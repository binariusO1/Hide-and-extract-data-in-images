#pragma once

#include <msclr\marshal_cppstd.h>	//To convert String^ to string
#include "Steganography.h"
#include <string>
namespace Hideandextractdatainimages 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//Drag & Drop
	using namespace System::Collections::Generic;
	//Path::GetFileName(file);
	using namespace System::IO;

	public ref class WindowCoding : public System::Windows::Forms::Form
	{
		public:
			WindowCoding(Steganography & obj) {
				InitializeComponent();
				this->check_ext_C_Main = -1;
				this->check_ext_C_Hide = -1;
				this->check_ext_D = -1;
				sptr = &obj;
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
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::ToolTip^ toolTip3;
	private: System::Windows::Forms::ToolTip^ toolTip4;
	private: System::Windows::Forms::ListBox^ D_listBox;

#pragma region Windows Form Designer generated code
	private:
		void InitializeComponent(void);

//************************************************************
//		DRAG & DROP EVENTS
//************************************************************
	private:
		System::Void listBox1_DragDrop_C_listBox_Main(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void listBox1_DragEnter_C_listBox_Main(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void listBox1_DragDrop_C_listBox_Hide(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void listBox1_DragEnter_C_listBox_Hide(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void listBox1_DragDrop_D_listBox(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void listBox1_DragEnter_D_listBox(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
		System::Void C_button_ResProcess_Start(System::Object^ sender, System::EventArgs^ e);
		System::Void C_button_Process_Start(System::Object^ sender, System::EventArgs^ e);
		System::Void D_button_Process_Start(System::Object^ sender, System::EventArgs^ e);

		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e);

		int checkFile(std::string path);

	private:
		int check_ext_C_Main;
		int check_ext_C_Hide;
		int check_ext_D;
		Steganography* sptr;
		std::string* fileNameMain;
		std::string* fileNameHide;
		std::string* fileNameDecoding;

		//String^ fileName;
		//String^ filePath = "NULL";

#pragma endregion
	};
}
