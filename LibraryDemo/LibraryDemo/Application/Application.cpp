/**
 * @file	Application.cpp
 * @breif	アプリの基点のクラス実装
 * @author	shibata
 */

#include "Application.h"
#include "../Scene/SceneTransition.h"
#include <Library.h>
#include <Library\DebugSystem.h>
#include <Library\Define.h>


Application::Application() : 
m_rLibrary(Library::Instace()),
m_pSceneTransition(New SceneTransition),
m_isGameEnd(false)
{
	MyAssert(m_pSceneTransition, "NULLが入っています");
}

Application::~Application()
{
	SafeDelete(m_pSceneTransition);
}

bool Application::Run()
{
	m_rLibrary.UpdateDI();

	m_isGameEnd = m_pSceneTransition->Control();

	m_rLibrary.SetFVF();
	m_rLibrary.DrawStart();

	m_pSceneTransition->Render();

	m_rLibrary.DrawEnd();

	return m_isGameEnd;
}