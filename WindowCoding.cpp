#include "WindowCoding.h"
#include <string>
#include <fstream>
#include <windows.h>
/*
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

[STAThread]
int app_WindowCoding()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hideandextractdatainimages::WindowCoding form;
	Application::Run(% form);
	return 0;
}
*/
using namespace Hideandextractdatainimages;
using namespace System;

//************************************************************
//		WINDOW FORM ELEMENTS
//************************************************************
void WindowCoding::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WindowCoding::typeid));
	this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
	this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
	this->C_button_ResProcess = (gcnew System::Windows::Forms::Button());
	this->C_button_Process = (gcnew System::Windows::Forms::Button());
	this->C_groupBox_Hide = (gcnew System::Windows::Forms::GroupBox());
	this->C_label_Height_Hide = (gcnew System::Windows::Forms::Label());
	this->C_label_Width_Hide = (gcnew System::Windows::Forms::Label());
	this->C_listBox_Hide = (gcnew System::Windows::Forms::ListBox());
	this->C_groupBox_Main = (gcnew System::Windows::Forms::GroupBox());
	this->C_label_Height_Main = (gcnew System::Windows::Forms::Label());
	this->C_label_Width_Main = (gcnew System::Windows::Forms::Label());
	this->C_listBox_Main = (gcnew System::Windows::Forms::ListBox());
	this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
	this->D_button_Process = (gcnew System::Windows::Forms::Button());
	this->D_groupBox = (gcnew System::Windows::Forms::GroupBox());
	this->D_label_Height = (gcnew System::Windows::Forms::Label());
	this->D_label_Width = (gcnew System::Windows::Forms::Label());
	this->D_listBox = (gcnew System::Windows::Forms::ListBox());
	this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->tabControl1->SuspendLayout();
	this->tabPage1->SuspendLayout();
	this->C_groupBox_Hide->SuspendLayout();
	this->C_groupBox_Main->SuspendLayout();
	this->tabPage2->SuspendLayout();
	this->D_groupBox->SuspendLayout();
	this->SuspendLayout();
	// 
	// tabControl1
	// 
	this->tabControl1->AllowDrop = true;
	this->tabControl1->Controls->Add(this->tabPage1);
	this->tabControl1->Controls->Add(this->tabPage2);
	resources->ApplyResources(this->tabControl1, L"tabControl1");
	this->tabControl1->Name = L"tabControl1";
	this->tabControl1->SelectedIndex = 0;
	this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
	// 
	// tabPage1
	// 
	this->tabPage1->Controls->Add(this->C_button_ResProcess);
	this->tabPage1->Controls->Add(this->C_button_Process);
	this->tabPage1->Controls->Add(this->C_groupBox_Hide);
	this->tabPage1->Controls->Add(this->C_groupBox_Main);
	resources->ApplyResources(this->tabPage1, L"tabPage1");
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->UseVisualStyleBackColor = true;
	// 
	// C_button_ResProcess
	// 
	resources->ApplyResources(this->C_button_ResProcess, L"C_button_ResProcess");
	this->C_button_ResProcess->Name = L"C_button_ResProcess";
	this->toolTip4->SetToolTip(this->C_button_ResProcess, resources->GetString(L"C_button_ResProcess.ToolTip"));
	this->C_button_ResProcess->UseVisualStyleBackColor = true;
	this->C_button_ResProcess->Click += gcnew System::EventHandler(this, &WindowCoding::C_button_ResProcess_Start);
	// 
	// C_button_Process
	// 
	resources->ApplyResources(this->C_button_Process, L"C_button_Process");
	this->C_button_Process->Name = L"C_button_Process";
	this->C_button_Process->UseVisualStyleBackColor = true;
	this->C_button_Process->Click += gcnew System::EventHandler(this, &WindowCoding::C_button_Process_Start);
	// 
	// C_groupBox_Hide
	// 
	this->C_groupBox_Hide->Controls->Add(this->C_label_Height_Hide);
	this->C_groupBox_Hide->Controls->Add(this->C_label_Width_Hide);
	this->C_groupBox_Hide->Controls->Add(this->C_listBox_Hide);
	resources->ApplyResources(this->C_groupBox_Hide, L"C_groupBox_Hide");
	this->C_groupBox_Hide->Name = L"C_groupBox_Hide";
	this->C_groupBox_Hide->TabStop = false;
	// 
	// C_label_Height_Hide
	// 
	resources->ApplyResources(this->C_label_Height_Hide, L"C_label_Height_Hide");
	this->C_label_Height_Hide->Name = L"C_label_Height_Hide";
	// 
	// C_label_Width_Hide
	// 
	resources->ApplyResources(this->C_label_Width_Hide, L"C_label_Width_Hide");
	this->C_label_Width_Hide->Name = L"C_label_Width_Hide";
	// 
	// C_listBox_Hide
	// 
	this->C_listBox_Hide->AllowDrop = true;
	this->C_listBox_Hide->Cursor = System::Windows::Forms::Cursors::Hand;
	this->C_listBox_Hide->FormattingEnabled = true;
	resources->ApplyResources(this->C_listBox_Hide, L"C_listBox_Hide");
	this->C_listBox_Hide->Name = L"C_listBox_Hide";
	this->C_listBox_Hide->SelectionMode = System::Windows::Forms::SelectionMode::None;
	this->toolTip2->SetToolTip(this->C_listBox_Hide, resources->GetString(L"C_listBox_Hide.ToolTip"));
	this->C_listBox_Hide->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragDrop_C_listBox_Hide);
	this->C_listBox_Hide->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragEnter_C_listBox_Hide);
	// 
	// C_groupBox_Main
	// 
	this->C_groupBox_Main->Controls->Add(this->C_label_Height_Main);
	this->C_groupBox_Main->Controls->Add(this->C_label_Width_Main);
	this->C_groupBox_Main->Controls->Add(this->C_listBox_Main);
	resources->ApplyResources(this->C_groupBox_Main, L"C_groupBox_Main");
	this->C_groupBox_Main->Name = L"C_groupBox_Main";
	this->C_groupBox_Main->TabStop = false;
	// 
	// C_label_Height_Main
	// 
	resources->ApplyResources(this->C_label_Height_Main, L"C_label_Height_Main");
	this->C_label_Height_Main->Name = L"C_label_Height_Main";
	// 
	// C_label_Width_Main
	// 
	resources->ApplyResources(this->C_label_Width_Main, L"C_label_Width_Main");
	this->C_label_Width_Main->Name = L"C_label_Width_Main";
	// 
	// C_listBox_Main
	// 
	this->C_listBox_Main->AllowDrop = true;
	this->C_listBox_Main->Cursor = System::Windows::Forms::Cursors::Hand;
	this->C_listBox_Main->FormattingEnabled = true;
	resources->ApplyResources(this->C_listBox_Main, L"C_listBox_Main");
	this->C_listBox_Main->Name = L"C_listBox_Main";
	this->C_listBox_Main->SelectionMode = System::Windows::Forms::SelectionMode::None;
	this->toolTip1->SetToolTip(this->C_listBox_Main, resources->GetString(L"C_listBox_Main.ToolTip"));
	this->C_listBox_Main->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragDrop_C_listBox_Main);
	this->C_listBox_Main->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragEnter_C_listBox_Main);
	// 
	// tabPage2
	// 
	this->tabPage2->Controls->Add(this->D_button_Process);
	this->tabPage2->Controls->Add(this->D_groupBox);
	resources->ApplyResources(this->tabPage2, L"tabPage2");
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->UseVisualStyleBackColor = true;
	// 
	// D_button_Process
	// 
	resources->ApplyResources(this->D_button_Process, L"D_button_Process");
	this->D_button_Process->Name = L"D_button_Process";
	this->D_button_Process->Click += gcnew System::EventHandler(this, &WindowCoding::D_button_Process_Start);
	// 
	// D_groupBox
	// 
	this->D_groupBox->Controls->Add(this->D_label_Height);
	this->D_groupBox->Controls->Add(this->D_label_Width);
	this->D_groupBox->Controls->Add(this->D_listBox);
	resources->ApplyResources(this->D_groupBox, L"D_groupBox");
	this->D_groupBox->Name = L"D_groupBox";
	this->D_groupBox->TabStop = false;
	// 
	// D_label_Height
	// 
	resources->ApplyResources(this->D_label_Height, L"D_label_Height");
	this->D_label_Height->Name = L"D_label_Height";
	// 
	// D_label_Width
	// 
	resources->ApplyResources(this->D_label_Width, L"D_label_Width");
	this->D_label_Width->Name = L"D_label_Width";
	// 
	// D_listBox
	// 
	this->D_listBox->AllowDrop = true;
	this->D_listBox->Cursor = System::Windows::Forms::Cursors::Hand;
	this->D_listBox->FormattingEnabled = true;
	resources->ApplyResources(this->D_listBox, L"D_listBox");
	this->D_listBox->Name = L"D_listBox";
	this->D_listBox->SelectionMode = System::Windows::Forms::SelectionMode::None;
	this->toolTip3->SetToolTip(this->D_listBox, resources->GetString(L"D_listBox.ToolTip"));
	this->D_listBox->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragDrop_D_listBox);
	this->D_listBox->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragEnter_D_listBox);
	// 
	// WindowCoding
	// 
	this->AllowDrop = true;
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->CausesValidation = false;
	resources->ApplyResources(this, L"$this");
	this->Controls->Add(this->tabControl1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
	this->MaximizeBox = false;
	this->Name = L"WindowCoding";
	this->ShowIcon = false;
	this->tabControl1->ResumeLayout(false);
	this->tabPage1->ResumeLayout(false);
	this->C_groupBox_Hide->ResumeLayout(false);
	this->C_groupBox_Hide->PerformLayout();
	this->C_groupBox_Main->ResumeLayout(false);
	this->C_groupBox_Main->PerformLayout();
	this->tabPage2->ResumeLayout(false);
	this->D_groupBox->ResumeLayout(false);
	this->D_groupBox->PerformLayout();
	this->ResumeLayout(false);

}

#include <iostream>
using namespace std;

//************************************************************
//		DRAG & DROP EVENTS
//************************************************************
// C_Main
System::Void WindowCoding::listBox1_DragDrop_C_listBox_Main(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	this->C_listBox_Main->Items->Clear();
	cli::array<String^>^ files = (cli::array<String^>^)e->Data->GetData(DataFormats::FileDrop, false);
	for each (String ^ file in files){
		if (files->Length == 1){
			std::string s_file = msclr::interop::marshal_as<std::string>(file);
			this->check_ext_C_Main = checkFile(s_file);

			String^ filename = Path::GetFileName(file);
			this->C_listBox_Main->Items->Add(filename);
			this->fileNameMain = &(msclr::interop::marshal_as<std::string>(filename));
		}
	}
}
System::Void WindowCoding::listBox1_DragEnter_C_listBox_Main(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	if (e->Data->GetDataPresent(DataFormats::FileDrop, false) == true){
		e->Effect = DragDropEffects::All;
	}
}

// C_Hide
System::Void WindowCoding::listBox1_DragDrop_C_listBox_Hide(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	this->C_listBox_Hide->Items->Clear();
	cli::array<String^>^ files = (cli::array<String^>^)e->Data->GetData(DataFormats::FileDrop, false);
	for each (String ^ file in files) {
		if (files->Length == 1) {
			std::string s_file = msclr::interop::marshal_as<std::string>(file);
			this->check_ext_C_Hide = checkFile(s_file);

			String^ filename = Path::GetFileName(file);
			this->C_listBox_Hide->Items->Add(filename);
			this->fileNameHide = &(msclr::interop::marshal_as<std::string>(filename));
		}
	}
}
System::Void WindowCoding::listBox1_DragEnter_C_listBox_Hide(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	if (e->Data->GetDataPresent(DataFormats::FileDrop, false) == true) {
		e->Effect = DragDropEffects::All;
	}
}
// D
System::Void WindowCoding::listBox1_DragDrop_D_listBox(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	this->D_listBox->Items->Clear();
	cli::array<String^>^ files = (cli::array<String^>^)e->Data->GetData(DataFormats::FileDrop, false);
	for each (String ^ file in files) {
		if (files->Length == 1) {
			std::string s_file = msclr::interop::marshal_as<std::string>(file);
			this->check_ext_D = checkFile(s_file);

			String^ filename = Path::GetFileName(file);
			this->D_listBox->Items->Add(filename);
			this->fileNameDecoding = &(msclr::interop::marshal_as<std::string>(filename));
		}
	}
}
System::Void WindowCoding::listBox1_DragEnter_D_listBox(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	if (e->Data->GetDataPresent(DataFormats::FileDrop, false) == true) {
		e->Effect = DragDropEffects::All;
	}
}


System::Void WindowCoding::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
}

int WindowCoding::checkFile(std::string path)
{
	std::fstream file;
	std::string extension;
	for (size_t i = path.size() - 1; i >= path.size() - 3; i--)
	{
		extension += path[i];
	}
	file.open(path, std::ios::in);
	if (file.good() == false)
	{
		file.close();
		return -1;
	}
	else if (extension == "gpj" || extension == "gnp" || extension == "pmb")
	{
		extension.clear();
		file.close();
		return 1;
	}
	else
	{
		extension.clear();
		file.close();
		return 0;
	}
}

System::Void WindowCoding::C_button_ResProcess_Start(System::Object^ sender, System::EventArgs^ e)
{
		if (this->check_ext_C_Main == -1 || this->check_ext_C_Hide == -1)
			MessageBox::Show("No file", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		else if (this->check_ext_C_Main == 0 || this->check_ext_C_Hide == 0 )
			MessageBox::Show("File extension should be .jpg, .png or .bmp", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		else {
			MessageBox::Show("Good", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			sptr->Coding( *(this->fileNameMain) , *(this->fileNameHide) );
		}

}
System::Void WindowCoding::C_button_Process_Start(System::Object^ sender, System::EventArgs^ e)
{
	if (this->check_ext_C_Main == -1 || this->check_ext_C_Hide == -1)
		MessageBox::Show("No file", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (this->check_ext_C_Main == 0 || this->check_ext_C_Hide == 0)
		MessageBox::Show("File extension should be .jpg, .png or .bmp", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else {
		MessageBox::Show("Good", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		sptr->Coding(*(this->fileNameMain), *(this->fileNameHide));
	}

}
System::Void WindowCoding::D_button_Process_Start(System::Object^ sender, System::EventArgs^ e)
{
	if (this->check_ext_D == -1)
		MessageBox::Show("No file", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (this->check_ext_D == 0)
		MessageBox::Show("File extension should be .jpg, .png or .bmp", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else {
		MessageBox::Show("Good", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		sptr->Decoding(*(this->fileNameDecoding) );
	}

}