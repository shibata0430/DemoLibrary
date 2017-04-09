/**
 * @file	SceneFactory.h
 * @breif	�V�[���̐����N���X�w�b�_
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