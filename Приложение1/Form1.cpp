#include "Form1.h"
#include "Form2.h"
using namespace System;
using namespace System::Windows::Forms;
[ STAThreadAttribute ] 
void Main(array<String^>^args){
	Application :: EnableVisualStyles (); 
	Application :: SetCompatibleTextRenderingDefault ( false ); 
	Application1 :: Form1 form;
	Application :: Run (% form ); 
};


