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
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::ComponentModel::IContainer^ components;


	private:



#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WindowCoding::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
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
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			resources->ApplyResources(this->tabPage1, L"tabPage1");
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->groupBox3);
			resources->ApplyResources(this->tabPage2, L"tabPage2");
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Name = L"listBox1";
			this->listBox1->AllowDrop = true;
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->FormattingEnabled = true;
			resources->ApplyResources(this->listBox1, L"listBox1");
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->toolTip1->SetToolTip(this->listBox1, resources->GetString(L"listBox1.ToolTip"));
			this->listBox1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragDrop);
			this->listBox1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &WindowCoding::listBox1_DragEnter);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->listBox1);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// listBox2
			// 
			this->listBox2->AllowDrop = true;
			this->listBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox2->FormattingEnabled = true;
			resources->ApplyResources(this->listBox2, L"listBox2");
			this->listBox2->Name = L"listBox2";
			this->toolTip1->SetToolTip(this->listBox2, resources->GetString(L"listBox2.ToolTip"));
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->listBox2);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->listBox3);
			resources->ApplyResources(this->groupBox3, L"groupBox3");
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->TabStop = false;
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			// 
			// listBox3
			// 
			this->listBox3->AllowDrop = true;
			this->listBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox3->FormattingEnabled = true;
			resources->ApplyResources(this->listBox3, L"listBox3");
			this->listBox3->Name = L"listBox3";
			this->toolTip1->SetToolTip(this->listBox3, resources->GetString(L"listBox3.ToolTip"));
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
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
			this->tabPage2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}

		//************************************************************
//		DRAG & DROP
//************************************************************

	private: System::Void listBox1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
	{
		/*
		this->listBox1->Items->Clear();
		cli::array<String^>^ files = (cli::array<String^>^)e->Data->GetData(DataFormats::FileDrop, false);
		//String^ file;
		for each (String ^ file in files)
		{
			if (files->Length == 1)
			{
				//MessageBox::Show("Check1: " + on_off + " ");
				std::string s_file = msclr::interop::marshal_as<std::string>(file);


				on_off = fbom_sprawdzenie(s_file);
				String^ filename = bom_filename = Path::GetFileName(file);
				bom_filepath = Path::GetDirectoryName(file);
				this->listBox1->Items->Add(filename);
				//MessageBox::Show("Filename: " + filename + " "+on_off+" ");
			}

			//THEN DO WHATEVER YOU WANT TO EACH file in files
		}
		*/
	}
	private: System::Void listBox1_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
	{
		if (e->Data->GetDataPresent(DataFormats::FileDrop, false) == true)
		{
			e->Effect = DragDropEffects::All;
		}
	}

#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
