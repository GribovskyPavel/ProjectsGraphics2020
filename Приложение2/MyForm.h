#pragma once

namespace Application2 {

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
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;



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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(227, 141);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 164);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(420, 141);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(146, 164);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(125, 170);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(125, 214);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(78, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(463, 372);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(68, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(253, 329);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(447, 329);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(253, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"�������� ������� ���� �� ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"��������� �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 177);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"�������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(255, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"������� ����";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(460, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"���������";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(610, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openToolStripMenuItem,
					this->toolStripSeparator1, this->saveToolStripMenuItem, this->toolStripSeparator2, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(139, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(139, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 470);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimizeBox = false;
			this->Name = L"Form1";
			this->Text = L"�������";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//-��������� ������� � TextBox ������ ����������� �������

private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 

			  if( ((e->KeyChar>='0')&&(e->KeyChar<='9'))||(e->KeyChar==8)|| (e->KeyChar==' ')||
              (e->KeyChar==(char)Keys::Enter)) return;
             //��������� ������� ���������
              e->Handled=true;
			 }
			 //-������ "��������" ��� �������� ���� (textBox1)
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
           
          textBox1->Text="";
			 

		 }
		 //-������ "��������" ��� �������� ���� (textBox2)
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 textBox2->Text="";
		 }
		 //-������ "�������� ������� ������ ��:"
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
         int n,m,k,i,j,t;
		 String^s="";
		 array<Char>^ ar;
		 ar=gcnew array<Char> (1);
		 ar[0]=' ';
		 array<int,2>^ A;

		 n=Convert::ToInt32(textBox3->Text);
		 m=Convert::ToInt32(textBox4->Text);
		 k=Convert::ToInt32(textBox5->Text);

		 //���������, ��� ������� ���� �������� ����������
		 if(textBox1->Lines->Length==0)
		  {
		   MessageBox::Show("������� ������� !\n",
								 "������",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
		   return;
		  }

		 //���������, ��� ������� ������� �� �������� ���� ��������� � ���������,
		 //��������� � ���� textBox2 � textBox3.
		 if(textBox1->Lines->Length!=n)
		  {

		   MessageBox::Show("��������� ������� ����� �������� ������� !\n",
								 "������",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
   
		   return;
		  }

		 //������ ������������ ��������������� ������� �[n][m]
		 A=gcnew array<int,2> (n,m);
		 //��������� ������� � ���������� �������� ���� (textBox1).
		array<String^>^ as;
		 for(i=0;i<n;i++)
		  {
		   as=textBox1->Text->Split(ar);
		   for(j=0;j<m;j++)
			A[i,j]=Convert::ToInt32(as[j]);
		  }

		 //�������� ������� � ������ �� k �������
		///* for(int ik=1;ik<=k;ik++)
		//  for(i=0;i<n;i++)
		//   for(j=0;j<m-1;j++)
		//	{
		//	 t=A[i,j];
		//	 A[i,j]=A[i,m-1];
		//	 A[i,m-1]=t;
		//	}*/
		 //�������� ������� � ����� �� k �������
		 for (int ik = 1; ik <= k; ik++)
			 for (i = 0; i<n; i++)
				 for (j = 0; j<m ; j++)
				 {
					 t = A[i, j];
					 A[i, j] = A[ m - 1,j];
					 A[m - 1, j] = t;
				 }

		 textBox2->Text="";
		 as= gcnew array<String^> (n);
		 //��������������� ������� � ������� � ���� ������ ���������� (Memo2)
		//s="";
		 for(i=0;i<n;i++)
		  {
			  s="";
			 for(j=0;j<m;j++)
			s+=A[i,j].ToString()+"  ";
		   //s+="\n";
			 //textBox2->Lines[i]=s;
			 as[i]=s;
		  }
		  // textBox2->Text=s;
		   textBox2->Lines=as;
				 }
				 //-���������� ������ ���� "�������"
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

          System::Windows::Forms::DialogResult dr;
   String^ fn;	
		openFileDialog1->FileName = String::Empty;

		// ���������� ������ �������

		dr = openFileDialog1->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK)
		{
			fn = openFileDialog1->FileName;		
			try
			{
				// ��������� ������ �� �����
				System::IO::StreamReader^ sr =
					gcnew System::IO::StreamReader(fn);

				textBox1->Text = sr->ReadToEnd();
				 sr->Close();
				}
			catch (  System::IO::FileLoadException^ e)
			{
				MessageBox::Show("������ �����:\n" + e->Message,
                                                                                                              "�������",
						MessageBoxButtons::OK,
						MessageBoxIcon::Error);
			}
		}

		 }
		 //-���������� ������ ���� "���������"
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

          System::Windows::Forms::DialogResult dr;
   String^ fn;
		// ���������� ������ ���������
		dr = saveFileDialog1->ShowDialog();
        if (dr ==System::Windows::Forms::DialogResult::OK)
        {
			
            fn = saveFileDialog1->FileName;
              // ��������� ����
     try
        {
			// ������� ���������� � ����� fn
			System::IO::FileInfo^ fi =
				gcnew System::IO::FileInfo(fn);

            // ����� ��� ������
			System::IO::StreamWriter^ sw =
                      fi->CreateText();
            sw->Write(textBox2->Text);

            sw->Close(); // ��������� �����
			
        }
       catch ( System::IO::IOException^ e)
        {
			MessageBox::Show(e->ToString(),
                  "�������",
				  MessageBoxButtons::OK,
				  MessageBoxIcon::Error);
        }

 }

		 }
//-���������� ������ ���� "�����"
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

          this->Close();
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
