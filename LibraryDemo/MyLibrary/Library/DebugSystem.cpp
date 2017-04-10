/**
 * @file	DebugSystem.cpp
 * @breif	デバッグ機能が使用できるクラスヘッダ
 * @author	shibata
 */

#include "DebugSystem.h"
#include <stdarg.h>
#include <stdio.h>

namespace
{
	static const int g_debugLogMax = 512;
}

DebugSystem::DebugSystem()
{

}

DebugSystem::~DebugSystem()
{

}

void DebugSystem::CheckMemoryLeaK()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
}

void DebugSystem::OutputDebugLog(const char * _pStr, ...)
{
	TCHAR OutputStr[g_debugLogMax];
	va_list ArgsList;

	va_start(ArgsList, _pStr);

	vsprintf_s(OutputStr, sizeof(OutputStr), _pStr, ArgsList);
	OutputDebugString(OutputStr);

	va_end(ArgsList);
}
