/**
* @file		LogoScene.cpp
* @breif	ロゴシーンのクラス実装
* @author	shibata
*/

#include "LogoScene.h"
#include <Library.h>


LogoScene::LogoScene() : 
Scene(Scene::ID::LOGO_SCENE)
{
	m_width		= 256.0f;
	m_height	= 256.0f;
	m_posX		= 640.0f;
	m_posY		= 360.0f;
	m_rLibrary.LoadTextureFile(LogoScene::LOGO, "Resource/Texture/Logo.png");
	m_rLibrary.SetTexSize(LogoScene::LOGO, m_width, m_height);
}

LogoScene::~LogoScene()
{

}

Scene::ID LogoScene::Control()
{
	return Scene::ID::LOGO_SCENE;
}

void LogoScene::Draw()
{
	m_rLibrary.DrawCenter(LogoScene::LOGO, m_posX, m_posY);
}