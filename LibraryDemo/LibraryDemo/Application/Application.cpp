/**
 * @file	Application.cpp
 * @breif	�A�v���̊�_�̃N���X����
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