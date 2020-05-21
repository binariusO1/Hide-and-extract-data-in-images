/*
2020-05-21 binariusO1
Programing challenge
Hide and extract data in images
*/

#include "WindowCoding.h"
#include "Steganography.h"

using namespace Hideandextractdatainimages;

int app_WindowCoding(Steganography& obj)
{ 
	Application::EnableVisualStyles();  
	Application::SetCompatibleTextRenderingDefault(false);
	Hideandextractdatainimages::WindowCoding form(obj);
	Application::Run(% form);
	return 0;
}
#include <iostream>
using namespace std;
[STAThread]
int main()
{
	Steganography stegObj;
	app_WindowCoding(stegObj);
}
