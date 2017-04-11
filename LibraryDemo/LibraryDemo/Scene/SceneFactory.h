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
	/**
	 * �R���X�g���N�^
	 * @attntion Singleton�p�^�[�����g�p���Ă��邽��private��
	 */
	SceneFactory();

	/**
	 * �f�X�g���N�^
	 * @attntion �R���X�g���N�^�Ɠ��l�̗��R
	 */
	~SceneFactory();

public:

	// �C���X�^���X�̎擾
	static SceneFactory& Instace()
	{
		static SceneFactory m_scenFactory;
		return m_scenFactory;
	}

	/**
	 * �e�V�[���̐����֐�
	 * @param [in] sceneID_	���̃V�[���h�c
	 * @retrun				�A�b�v�L���X�g�����C���X�^���X
	 */
	Scene* CreateScene(Scene::ID sceneID_);	
};

#endif // !SCENEFACTORY_H