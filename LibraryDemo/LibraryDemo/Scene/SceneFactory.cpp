/**
* @file		SceneFactory.cpp
* @breif	�V�[���̐����N���X����
* @author	shibata
*/

#include "SceneFactory.h"
#include "LogoScene.h"
#include "MainScene.h"
#include "TitleScene.h"
#include <Library\DebugSystem.h>

SceneFactory::SceneFactory()
{

}

SceneFactory::~SceneFactory()
{

}

Scene* SceneFactory::CreateScene(Scene::ID sceneID_)
{
	Scene* pScene = NULL;

	switch (sceneID_)
	{
	case Scene::ID::LOGO_SCENE:
		pScene = New LogoScene;
		break;

	case Scene::ID::TITLE_SCENE:
		pScene = New TitleScene;
		break;

	case Scene::ID::MAIN_SCENE:
		pScene = New MainScene;
		break;
	}

	return pScene;
}

