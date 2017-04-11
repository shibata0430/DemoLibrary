/**
 * @file	TitleScene.h
 * @breif	�^�C�g���V�[���̃N���X�w�b�_
 * @author	shibata
 */

#ifndef TITLESCENE_H
#define TITLESCENE_H

#include "Scene.h"

class TitleScene : public Scene
{
public:
	/**�R���X�g���N�^*/
	TitleScene();
	/**�f�X�g���N�^*/
	virtual ~TitleScene();

	/**
	 * ����֐�
	 * @retval	�J�ڐ�̃V�[��ID
	 */
	virtual Scene::ID Control();
	/**�`��֐�*/
	virtual void Draw();
};

#endif // !TITLESCENE_H