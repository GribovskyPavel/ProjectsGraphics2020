#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[ STAThreadAttribute ] 
void Main(array<String^>^args){
	Application :: EnableVisualStyles (); 
	Application :: SetCompatibleTextRenderingDefault ( false ); 
	Application2 :: Form1 form;
	Application :: Run (% form ); 
};
