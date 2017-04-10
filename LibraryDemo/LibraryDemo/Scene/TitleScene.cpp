/**
* @file		TitleScene.cpp
* @breif	�^�C�g���V�[���̃N���X����
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
