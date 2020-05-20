#include "WindowDecoding.h"
#include "WindowCoding.h"

using namespace Hideandextractdatainimages;

int app_WindowCoding()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hideandextractdatainimages::WindowCoding form;
	Application::Run(% form);
	return 0;
}

int app_WindowDecoding()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hideandextractdatainimages::WindowDecoding form;
	Application::Run(% form);
	return 0;
}

[STAThread]
int main()
{
	app_WindowCoding();
}