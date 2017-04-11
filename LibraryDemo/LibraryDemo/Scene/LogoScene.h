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
	enum 
	{
		LOGO
	};

public:
	/**�R���X�g���N�^*/
	LogoScene();
	/**�f�X�g���N�^*/
	virtual ~LogoScene();

	/**
	 * ����֐�
	 * @retval	�J�ڐ�̃V�[��ID
	 */
	virtual Scene::ID Control();
	/**�`��֐�*/
	virtual void Draw();
private:

};

#endif // !LOGOSCENE_H