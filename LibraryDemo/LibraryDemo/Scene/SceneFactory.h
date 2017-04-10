/**
 * @file	SceneFactory.h
 * @breif	�V�[���̐����N���X�w�b�_
 * @author	shibata
 */

#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include "Scene.h"
#include <Library\DebugSystem.h>

class LogoScene;
class TitleScene;
class MainScene;

class SceneFactory 
{
private:
	SceneFactory();
	~SceneFactory();

public:

	static SceneFactory& Instace()
	{
		static SceneFactory m_scenFactory;
		return m_scenFactory;
	}

	Scene* CreateScene(Scene::ID sceneID_);	
};

#endif // !SCENEFACTORY_H