/**
 * @file	Scene.h
 * @breif	�e�V�[���̐e�N���X�w�b�_
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
		MAIN_SCENE,
		FINISH
	};

public:
	explicit Scene(Scene::ID sceneID_);
	virtual ~Scene();

	virtual Scene::ID Control() = 0;
	virtual void Draw() = 0;

protected:
	Library& m_rLibrary;
};

#endif // !SCENE_H