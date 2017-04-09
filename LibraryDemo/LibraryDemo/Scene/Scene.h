/**
 * @file	Scene.h
 * @breif	各シーンの親クラスヘッダ
 * @author	shibata
 */

#ifndef SCENE_H
#define SCENE_H

class Library;

class Scene
{
public:
	enum ID
	{
		LOGO_SCENE,
		TITLE_SCENE,
		MAIN_SCENE
	};

public:
	Scene(Scene::ID sceneID_);
	~Scene();

	virtual Scene::ID Control() = 0;
	virtual void Draw() = 0;

private:
	Library& m_rLibrary;
};

#endif // !SCENE_H