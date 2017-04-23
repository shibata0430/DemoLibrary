/**
* @file		TitleScene.cpp
* @breif	タイトルシーンのクラス実装
* @author	shibata
*/

#include "TitleScene.h"
#include "../Logo/Logo.h"
#include "../Button/Button.h"
#include "TitleBackground.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>
#include <Library.h>

TitleScene::TitleScene() : 
Scene(Scene::ID::TITLE_SCENE),
m_pTitleLogo(New Logo(512.0f, 128.0f, 640.0f, 120.0f, TITLE_LOGO, "Resource/Texture/TitleLogo.png")),
m_pMenuLogo(New Logo(1024.0f, 128.0f, 640.0f, 520.0f, MENU_LOGO, "Resource/Texture/TitleMenuLogo.png")),
m_pButton(New Button(100.0f, 520.0f, BUTTON)),
m_pTitleBackground(New TitleBackground)
{
	MyAssert(m_pTitleLogo, "TitleLogoが生成できませんでした");
	MyAssert(m_pMenuLogo, "MenuLogoが生成できませんでした");
	MyAssert(m_pButton, "Buttonが生成できませんでした");
	MyAssert(m_pTitleBackground, "TitleBackgroundが生成できませんでした");
}

TitleScene::~TitleScene()
{
	SafeDelete(m_pTitleLogo);
	SafeDelete(m_pMenuLogo);
	SafeDelete(m_pButton);
	SafeDelete(m_pTitleBackground);
	Library::Instance().ReleaseAllTexture();
	Library::Instance().ReleaseAllVirtices();
}

Scene::ID TitleScene::Control()
{
	if (m_pButton->IsPush())
	{
		return Scene::ID::MAIN_SCENE;
	}
	return Scene::ID::TITLE_SCENE;
}

void TitleScene::Draw()
{
	m_pTitleBackground->Draw();
	m_pTitleLogo->Draw();
	m_pMenuLogo->Draw();
	m_pButton->Draw();
}
