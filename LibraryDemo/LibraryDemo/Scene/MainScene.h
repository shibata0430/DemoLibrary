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
	/**�R���X�g���N�^*/
	MainScene();
	/**�f�X�g���N�^*/
	virtual ~MainScene();

	/**
	 * ����֐�
	 * @retval	�J�ڐ�̃V�[��ID
	 */
	virtual Scene::ID Control();
	/**�`��֐�*/
	virtual void Draw();
};

#endif // !MAINSCENE_H