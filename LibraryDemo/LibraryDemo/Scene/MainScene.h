/**
 * @file	MainScene.h
 * @breif	���C���V�[���̃N���X�w�b�_
 * @author	shibata
 */

#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "Scene.h"

class MainScene : public Scene
{
public:
	MainScene();
	virtual ~MainScene();

	virtual Scene::ID Control();
	virtual void Draw();
};

#endif // !MAINSCENE_H