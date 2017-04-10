/**
* @file		LogoScene.cpp
* @breif	���S�V�[���̃N���X����
* @author	shibata
*/

#include "LogoScene.h"
#include <Library.h>


LogoScene::LogoScene() : 
Scene(Scene::ID::LOGO_SCENE)
{
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

}