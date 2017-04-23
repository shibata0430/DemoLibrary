/**
* @file		TitleBackground.cpp
* @breif	ƒ^ƒCƒgƒ‹‚Ì”wŒi•`‰æƒNƒ‰ƒXŽÀ‘•
* @author	shibata
*/


#include "TitleBackground.h"
#include "TitleScene.h"
#include <Library.h>


TitleBackground::TitleBackground() :
m_rLibrary(Library::Instance()),
m_width(1280.0f),
m_height(720.0f),
m_posX(0.0f),
m_posY(0.0f)
{
	m_rLibrary.LoadTextureFile(TitleScene::Kind::BACKGROUND, "Resource/Texture/TitleBackground.png");
	m_rLibrary.SetTexSize(TitleScene::Kind::BACKGROUND, m_width, m_height);
}

TitleBackground::~TitleBackground()
{
}

void TitleBackground::Draw()
{
	m_rLibrary.DrawLeftTop(TitleScene::Kind::BACKGROUND, m_posX, m_posY);
}
