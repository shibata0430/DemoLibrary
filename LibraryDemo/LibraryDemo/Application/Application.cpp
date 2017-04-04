/**
 * @file	Application.cpp
 * @breif	アプリの基点のクラス実装
 * @author	shibata
 */

#include "Application.h"

Application::Application() : 
m_isGameEnd(false)
{

}

Application::~Application()
{

}

bool Application::Run()
{

	return m_isGameEnd;
}