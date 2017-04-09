/**
 * @file	SceneFactory.h
 * @breif	シーンの生成クラスヘッダ
 * @author	shibata
 */

#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include <Singleton.h>
#include "Scene.h"

class SceneFactory
{
private:
	friend Singleton<SceneFactory>;

	SceneFactory();
	~SceneFactory();

public:
	Scene* CreateScene(Scene::ID sceneID_);
};

#endif // !SCENEFACTORY_H