/**
* @file		SceneFactory.cpp
* @breif	シーンの生成クラス実装
* @author	shibata
*/

#include "SceneFactory.h"

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

		break;

	case Scene::ID::TITLE_SCENE:

		break;

	case Scene::ID::MAIN_SCENE:

		break;
	}

	return pScene;
}

