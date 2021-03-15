#pragma once

namespace Application3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected: 

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(484, 367);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form3::pictureBox1_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 391);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form3";
			this->Text = L"Графики y=f(x)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
        int l, b, h, w;
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		h = pictureBox1->Height;          
		w = pictureBox1->Width;           

       e->Graphics->DrawLine(Pens::Black,0,h/2,w,h/2);
       e->Graphics->DrawLine(Pens::Black,w/2,0,w/2,h);
   
       e->Graphics->DrawLine(Pens::Black,w-25,h/2+8,w,h/2);
       e->Graphics->DrawLine(Pens::Black,w-25,h/2-8,w,h/2);
       e->Graphics->DrawLine(Pens::Black,w/2-8,25,w/2,0);
       e->Graphics->DrawLine(Pens::Black,w/2+8,25,w/2,0);
  
       e->Graphics->DrawString("X",this->Font,Brushes::Black,w-15,h/2-25);
       e->Graphics->DrawString("Y",this->Font,Brushes::Black,w/2-25,5);
  
//График y = 3+2/x+3/(x*x)
   double x1, x2, y1, y2, x, y, mx, my, x0, y0, dx,dt;
   x1 = -5;        
   x2 = 5;       
   dx = 0.29;    
   y1 = (3*x1*x1+2*x1+3)/(x1*x1);
   y2 = (3*x2*x2+2*x2+3)/(x2*x2);
   x = x1;
   while(x <= x2)
   {
	 y = (3*x*x+2*x+3)/(x*x);
     if (y < y1) y1 = y;
     if (y > y2) y2 = y;
     x+=dx;
   }
   my =h/(y2-y1);                 
   mx =w/(x2-x1);                 
   x = x1;
   y1=(3*x1*x1+2*x1+3)/(x1*x1);
   x+=dx;
   while(x <= x2)
   {
	  x+=dx;
      y = (3*x*x+2*x+3)/(x*x);
      e->Graphics->DrawLine(Pens::Blue,(int)(x1*mx+w/2),(int)(h/2-y1*my),(int)(x*mx+w/2),(int)(h/2-y*my));
	  x1=x;
      y1=y;
     
   }
   double t=0;
   // Кардиоида
   x1 = -5;                      
   x2 = 5;
   dt = 0.001;                    
   y1 = -5;
   y2 = 5;
   my = h/(y2-y1);                
   mx = w/(x2-x1);                
   t = 0;
   int a=1;
   x1=2*a*Math::Cos(t)-a*Math::Cos(2*t);
   y1=2*a*Math::Sin(t)-a*Math::Sin(2*t);
   t+=dt;
   while(t <= 2*Math::Acos(-1))
   {
       x=2*a*Math::Cos(t)-a*Math::Cos(2*t);
       y=2*a*Math::Sin(t)-a*Math::Sin(2*t);
       e->Graphics->DrawLine(Pens::Red,(int)(x1*mx+w/2),(int)(h/2-y1*my),(int)(x*mx+w/2),(int)(h/2-y*my));
	   t+=dt;
       x1=x;
       y1=y;
   }
}
};
}

