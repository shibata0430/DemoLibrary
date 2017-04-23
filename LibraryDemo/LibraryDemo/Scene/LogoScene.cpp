/**
* @file		LogoScene.cpp
* @breif	ロゴシーンのクラス実装
* @author	shibata
*/

#include "LogoScene.h"
#include "../Logo/Logo.h"
#include <Library.h>
#include <Library\DebugSystem.h>
#include <Library\Define.h>


LogoScene::LogoScene() : 
Scene(Scene::ID::LOGO_SCENE),
m_pLogo(New Logo(256, 256, 640, 360, LOGO, "Resource/Texture/Logo.png")),
m_chageCount(0)
{
	MyAssert(m_pLogo, "Logoが生成できませんでした");
}

LogoScene::~LogoScene()
{
	SafeDelete(m_pLogo);
	m_rLibrary.ReleaseAllTexture();
	m_rLibrary.ReleaseAllVirtices();
}

Scene::ID LogoScene::Control()
{
	m_chageCount++;

	if (m_chageCount > 300)
	{
		return Scene::ID::TITLE_SCENE;
	}
	return Scene::ID::LOGO_SCENE;
}

void LogoScene::Draw()
{
	m_pLogo->Draw();
	m_rLibrary.DrawFont("5秒後にタイトル画面へ移行します", 500.0f, 540.0f);
}