#pragma once
#include "Form2.h"
namespace Application1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïðàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏðîãðàììåToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ñïðàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(291, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(97, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(343, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 210);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(344, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Êîëè÷åñòâî ýëåìåíòîâ ìàññèâà:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(219, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Èñõîäíûé ìàññèâ:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(177, 183);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(192, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Îòñîðòèðîâàííûé èñõîäíûé ìàññèâ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 337);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(97, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ìåòîä âûáîðà";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(291, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Ìåòîä ïåðåñòàíîâîê";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(357, 257);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Âûõîä";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->ñïðàâêàToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(539, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ñïðàâêàToolStripMenuItem
			// 
			this->ñïðàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {
			this->îÏðîãðàììåToolStripMenuItem});
			this->ñïðàâêàToolStripMenuItem->Name = L"ñïðàâêàToolStripMenuItem";
			this->ñïðàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïðàâêàToolStripMenuItem->Text = L"Ñïðàâêà";
			// 
			// îÏðîãðàììåToolStripMenuItem
			// 
			this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
			this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->îÏðîãðàììåToolStripMenuItem->Text = L"Î ïðîãðàììå";
			this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::îÏðîãðàììåToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 310);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Ìàññèâ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private:
		static array<char>^ s = gcnew array<char>(200);
		static array<char>^ l = gcnew array<char>(200);
		static array<int>^ A = gcnew array<int>(50);
		static array<int>^ Q = gcnew array<int>(50);
		static int dim=1;
		static int f=0;
		static int e1=0;

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^>^ as;
		array<Char>^ ar;
		ar=gcnew array<Char> (1);
		ar[0]=' ';
		textBox3->Text="";
		if ((textBox2->Text->Length!=0)&&(textBox1->Text->Length!=0))
        {
			dim=Convert::ToInt32(textBox1->Text);
			e1=0;
			as=textBox2->Text->Split(ar);
			if(as->Length==dim){
				for( int i=0;i<dim;i++)
				{
				A[i]=Convert::ToInt32(as[i]);
				e1++;
				}
				int t=0,max=0,ind=0;
				for(int i=0;i<dim;i++){
					for(int j=0;i+j<dim;j++){
						if(A[j]>max){max=A[j];ind=j;}
					}
					t=A[dim-i-1];A[dim-i-1]=A[ind];A[ind]=t;
					t=0;max=0;ind=0;
				}
				for(int i=0;i<dim;i++){
					 textBox3->Text+=Convert::ToString(A[i]);
					 textBox3->Text+=" ";
				}
			 }
			 else
			 MessageBox::Show("Ââåäåííûå äàííûå íåêîððåêòíû !\n","Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
         }
		else 
        MessageBox::Show("Ââåäåííûå äàííûå íåêîððåêòíû !\n","Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if ((e->KeyChar>='0')&&(e->KeyChar<='9')||(e->KeyChar == (char)Keys::Delete))
			return;
			e->Handled=true;
			if (e->KeyChar == (char)Keys::Enter){
            textBox2->Focus();
            }
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 if( ((e->KeyChar>='0')&&(e->KeyChar<='9'))|| (e->KeyChar==' ')||(e->KeyChar == (char)Keys::Delete)) 
			 return;
			 e->Handled=true;
			 if (e->KeyChar == (char)Keys::Enter){
             textBox3->Focus();
             }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
        array<String^>^ as;
		array<Char>^ ar;
		ar=gcnew array<Char> (1);
		ar[0]=' ';
		textBox3->Text="";
		 if ((textBox2->Text->Length!=0)&&(textBox1->Text->Length!=0))
			 {
			    dim=Convert::ToInt32(textBox1->Text);
				f=0;
				as=textBox2->Text->Split(ar);
				if(as->Length==dim){
					for( int j=0;j<dim;j++){
					Q[j]=Convert::ToInt32(as[j]);
					f++;
					}
                int t=0;
				for(int j=0;j<dim-1;j++){
					 for(int i=0;i+j<dim-1;i++){
						 if(Q[i]>Q[i+1]){t=Q[i+1];Q[i+1]=Q[i];Q[i]=t;}
					 }
				}
				for(int i=0;i<dim;i++){
					 textBox3->Text+=Convert::ToString(Q[i]);
					 textBox3->Text+=" ";}
				}
				else 
		        MessageBox::Show("Ââåäåííûå äàííûå íåêîððåêòíû !\n","Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		     }
		 else 
		 MessageBox::Show("Ââåäåííûå äàííûå íåêîððåêòíû !\n","Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {}
private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form2^f=gcnew Form2();
	f->Show();
}
};
}
