/**
* @file		TitleScene.cpp
* @breif	タイトルシーンのクラス実装
* @author	shibata
*/

#include "TitleScene.h"

TitleScene::TitleScene() : 
Scene(Scene::ID::TITLE_SCENE)
{

}

TitleScene::~TitleScene()
{

}

Scene::ID TitleScene::Control()
{
	return Scene::ID::TITLE_SCENE;
}

void TitleScene::Draw()
{

}
