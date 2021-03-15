#include "Form3.h"
using namespace System;
using namespace System::Windows::Forms;
[ STAThreadAttribute ] 
void main(array<String^>^args){
	Application :: EnableVisualStyles (); 
	Application :: SetCompatibleTextRenderingDefault ( false ); 
	Application3 :: Form3 form;
	Application :: Run (% form ); 
};

