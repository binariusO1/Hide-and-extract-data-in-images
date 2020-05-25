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
	this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
	this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->C_button_Process = (gcnew System::Windows::Forms::Button());
	this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->C_groupBox_Hide = (gcnew System::Windows::Forms::GroupBox());
	this->C_label_Height_Hide = (gcnew System::Windows::Forms::Label());
	this->C_label_Width_Hide = (gcnew System::Windows::Forms::Label());
	this->C_listBox_Hide = (gcnew System::Windows::Forms::ListBox());
	this->C_groupBox_Main = (gcnew System::Windows::Forms::GroupBox());
	this->C_label_Height_Main = (gcnew System::Windows::Forms::Label());
	this->C_label_Width_Main = (gcnew System::Windows::Forms::Label());
	this->C_listBox_Main = (gcnew System::Windows::Forms::ListBox());
	this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
	this->D_groupBox = (gcnew System::Windows::Forms::GroupBox());
	this->D_button_Process = (gcnew System::Windows::Forms::Button());
	this->D_label_Height = (gcnew System::Windows::Forms::Label());
	this->D_label_Width = (gcnew System::Windows::Forms::Label());
	this->D_listBox = (gcnew System::Windows::Forms::ListBox());
	this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
	this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->tabControl1->SuspendLayout();
	this->tabPage1->SuspendLayout();
	this->groupBox1->SuspendLayout();
	this->C_groupBox_Hide->SuspendLayout();
	this->C_groupBox_Main->SuspendLayout();
	this->tabPage2->SuspendLayout();
	this->D_groupBox->SuspendLayout();
	this->groupBox2->SuspendLayout();
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
	this->tabPage1->Controls->Add(this->groupBox1);
	this->tabPage1->Controls->Add(this->C_groupBox_Hide);
	this->tabPage1->Controls->Add(this->C_groupBox_Main);
	resources->ApplyResources(this->tabPage1, L"tabPage1");
	this->tabPage1->Name = L"tabPage1";
	this->tabPage1->UseVisualStyleBackColor = true;
	// 
	// groupBox1
	// 
	this->groupBox1->Controls->Add(this->comboBox2);
	this->groupBox1->Controls->Add(this->label3);
	this->groupBox1->Controls->Add(this->C_button_Process);
	this->groupBox1->Controls->Add(this->comboBox1);
	this->groupBox1->Controls->Add(this->label2);
	this->groupBox1->Controls->Add(this->label1);
	resources->ApplyResources(this->groupBox1, L"groupBox1");
	this->groupBox1->Name = L"groupBox1";
	this->groupBox1->TabStop = false;
	// 
	// comboBox2
	// 
	this->comboBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
	this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
		resources->GetString(L"comboBox2.Items"), resources->GetString(L"comboBox2.Items1"),
			resources->GetString(L"comboBox2.Items2")
	});
	resources->ApplyResources(this->comboBox2, L"comboBox2");
	this->comboBox2->Name = L"comboBox2";
	// 
	// label3
	// 
	resources->ApplyResources(this->label3, L"label3");
	this->label3->Name = L"label3";
	// 
	// C_button_Process
	// 
	resources->ApplyResources(this->C_button_Process, L"C_button_Process");
	this->C_button_Process->Name = L"C_button_Process";
	this->C_button_Process->UseVisualStyleBackColor = true;
	this->C_button_Process->Click += gcnew System::EventHandler(this, &WindowCoding::C_button_Process_Start);
	// 
	// comboBox1
	// 
	this->comboBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
	this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
		resources->GetString(L"comboBox1.Items"), resources->GetString(L"comboBox1.Items1"),
			resources->GetString(L"comboBox1.Items2")
	});
	resources->ApplyResources(this->comboBox1, L"comboBox1");
	this->comboBox1->Name = L"comboBox1";
	// 
	// label2
	// 
	resources->ApplyResources(this->label2, L"label2");
	this->label2->Name = L"label2";
	// 
	// label1
	// 
	resources->ApplyResources(this->label1, L"label1");
	this->label1->Name = L"label1";
	// 
	// C_groupBox_Hide
	// 
	this->C_groupBox_Hide->Controls->Add(this->label11);
	this->C_groupBox_Hide->Controls->Add(this->label10);
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
	this->C_groupBox_Main->Controls->Add(this->label9);
	this->C_groupBox_Main->Controls->Add(this->label8);
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
	this->tabPage2->Controls->Add(this->groupBox2);
	this->tabPage2->Controls->Add(this->D_groupBox);
	resources->ApplyResources(this->tabPage2, L"tabPage2");
	this->tabPage2->Name = L"tabPage2";
	this->tabPage2->UseVisualStyleBackColor = true;
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
	// D_button_Process
	// 
	resources->ApplyResources(this->D_button_Process, L"D_button_Process");
	this->D_button_Process->Name = L"D_button_Process";
	this->D_button_Process->Click += gcnew System::EventHandler(this, &WindowCoding::D_button_Process_Start);
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
	// label4
	// 
	resources->ApplyResources(this->label4, L"label4");
	this->label4->Name = L"label4";
	// 
	// groupBox2
	// 
	this->groupBox2->Controls->Add(this->D_button_Process);
	this->groupBox2->Controls->Add(this->comboBox3);
	this->groupBox2->Controls->Add(this->label5);
	this->groupBox2->Controls->Add(this->comboBox4);
	this->groupBox2->Controls->Add(this->label6);
	this->groupBox2->Controls->Add(this->label7);
	resources->ApplyResources(this->groupBox2, L"groupBox2");
	this->groupBox2->Name = L"groupBox2";
	this->groupBox2->TabStop = false;
	// 
	// comboBox3
	// 
	this->comboBox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
	this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
		resources->GetString(L"comboBox3.Items"), resources->GetString(L"comboBox3.Items1"),
			resources->GetString(L"comboBox3.Items2")
	});
	resources->ApplyResources(this->comboBox3, L"comboBox3");
	this->comboBox3->Name = L"comboBox3";
	// 
	// label5
	// 
	resources->ApplyResources(this->label5, L"label5");
	this->label5->Name = L"label5";
	// 
	// comboBox4
	// 
	this->comboBox4->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
	this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
		resources->GetString(L"comboBox4.Items"), resources->GetString(L"comboBox4.Items1"),
			resources->GetString(L"comboBox4.Items2")
	});
	resources->ApplyResources(this->comboBox4, L"comboBox4");
	this->comboBox4->Name = L"comboBox4";
	// 
	// label6
	// 
	resources->ApplyResources(this->label6, L"label6");
	this->label6->Name = L"label6";
	// 
	// label7
	// 
	resources->ApplyResources(this->label7, L"label7");
	this->label7->Name = L"label7";
	// 
	// label8
	// 
	resources->ApplyResources(this->label8, L"label8");
	this->label8->Name = L"label8";
	// 
	// label9
	// 
	resources->ApplyResources(this->label9, L"label9");
	this->label9->Name = L"label9";
	// 
	// label10
	// 
	resources->ApplyResources(this->label10, L"label10");
	this->label10->Name = L"label10";
	// 
	// label11
	// 
	resources->ApplyResources(this->label11, L"label11");
	this->label11->Name = L"label11";
	// 
	// WindowCoding
	// 
	this->AllowDrop = true;
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->CausesValidation = false;
	resources->ApplyResources(this, L"$this");
	this->Controls->Add(this->label4);
	this->Controls->Add(this->tabControl1);
	this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
	this->MaximizeBox = false;
	this->Name = L"WindowCoding";
	this->ShowIcon = false;
	this->tabControl1->ResumeLayout(false);
	this->tabPage1->ResumeLayout(false);
	this->groupBox1->ResumeLayout(false);
	this->groupBox1->PerformLayout();
	this->C_groupBox_Hide->ResumeLayout(false);
	this->C_groupBox_Hide->PerformLayout();
	this->C_groupBox_Main->ResumeLayout(false);
	this->C_groupBox_Main->PerformLayout();
	this->tabPage2->ResumeLayout(false);
	this->D_groupBox->ResumeLayout(false);
	this->D_groupBox->PerformLayout();
	this->groupBox2->ResumeLayout(false);
	this->groupBox2->PerformLayout();
	this->ResumeLayout(false);
	this->PerformLayout();

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

			this->fileNameMain = new std::string(msclr::interop::marshal_as<std::string>(filename));
		}
	}
	if(this->check_ext_C_Hide != -1 && (sptr->CompareSizeOut((this->fileNameMain), (this->fileNameHide))) != 0)
		this->C_button_Process->Enabled = true;

	std::string strR = to_string(sptr->GetImageRows(this->fileNameMain));
	std::string strC = to_string(sptr->GetImageCols(this->fileNameMain));
	String^ rows = gcnew String(strR.c_str());
	String^ cols = gcnew String(strC.c_str());
	this->label8->Text = rows + L" px";
	this->label9->Text = cols + L" px";
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

			this->fileNameHide = new std::string(msclr::interop::marshal_as<std::string>(filename));
		}
	}
	if (this->check_ext_C_Main != -1 && (sptr->CompareSizeOut((this->fileNameMain), (this->fileNameHide))) != 0) {
		this->C_button_Process->Enabled = true;
	}
	else
		this->C_button_Process->Enabled = false;
	std::string strR= to_string(sptr->GetImageRows(this->fileNameHide));
	std::string strC = to_string(sptr->GetImageCols(this->fileNameHide));
	String^ rows = gcnew String(strR.c_str());
	String^ cols = gcnew String(strC.c_str());
	this->label10->Text = rows + L" px";
	this->label11->Text = cols + L" px";
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

			this->fileNameDecoding = new std::string(msclr::interop::marshal_as<std::string>(filename));
		}
	}
	if (this->check_ext_D != -1) {
		this->D_button_Process->Enabled = true;
	}
	else
		this->C_button_Process->Enabled = false;
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

System::Void WindowCoding::C_button_Process_Start(System::Object^ sender, System::EventArgs^ e)
{
	if (this->check_ext_C_Main == -1 || this->check_ext_C_Hide == -1)
		MessageBox::Show("No file", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if (this->check_ext_C_Main == 0 || this->check_ext_C_Hide == 0)
		MessageBox::Show("File extension must be .jpg, .png or .bmp", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	else if ((sptr->CompareSizeOut((this->fileNameMain), (this->fileNameHide))) == 0) {
		MessageBox::Show("Size of main image must be equal or bigger than image to hide", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else {
		MessageBox::Show("Good", "Info", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		String^ temp1 = comboBox1->Text;
		std::string t1 = msclr::interop::marshal_as<std::string>(temp1);
		int k = strtol(t1.c_str(), NULL, 10);
		int f = comboBox2->SelectedIndex;

		sptr->Coding( (this->fileNameMain), (this->fileNameHide),k,f,false);
		cout << "..end of coding" << endl;
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
/*
	this->comboBox1->SelectedIndex = 0;
*/