#include <Library.h>
#include <Library\DebugSystem.h>
#include <Library\Define.h>
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
	DebugSystem*	pDebugSystem = New DebugSystem;
	Application*	pApplication = NULL;

	pDebugSystem->CheckMemoryLeaK();

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


	SafeDelete(pDebugSystem);
	SafeDelete(pApplication);
	return 0;
}