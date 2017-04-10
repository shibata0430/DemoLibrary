/**
 * @file	LogoScene.h
 * @breif	���S�V�[���̃N���X�w�b�_
 * @author	shibata
 */

#ifndef LOGOSCENE_H
#define LOGOSCENE_H

#include "Scene.h"

class LogoScene : public Scene
{
public:
	LogoScene();
	virtual ~LogoScene();

	virtual Scene::ID Control();
	virtual void Draw();
};

#endif // !LOGOSCENE_H