#include <Library.h>
#include "Application\Application.h"

namespace
{
	const int	clientWidth		= 1280;
	const int	clientHeight	= 720;
	const char*	title			= "LibTest";
	const int	gameFPS			= 60;
}

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT)
{
	Library*		pLibrary = &Library::Instace();
	Application*	pApplication = NULL;

	pLibrary->CheckMemoryLeaK();

	pLibrary->InitLibrary(title, clientWidth, clientHeight, false);

	pApplication = New Application;
	DWORD currentTime;
	DWORD oldTime = gameFPS * timeGetTime();

	while (!pLibrary->Update())
	{
		currentTime = gameFPS * timeGetTime();
		if (currentTime - oldTime >= 1000)
		{
			if (pApplication->Run())
			{
				break;
			}
			oldTime += 1000;
		}
	}

	delete pApplication;
	return 0;
}