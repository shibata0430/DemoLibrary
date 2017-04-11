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
	// �v���O������Ŏg�p����V�[���̎��
	enum ID
	{
		LOGO_SCENE,
		TITLE_SCENE,
		MAIN_SCENE,
		FINISH
	};

public:
	/**
	 * �R���X�g���N�^
	 * @param [in] sceneID_	�h���N���X�����̍ۂɃV�[���h�c�����̃N���X�ƈ�v�����邽��
	 * @note	explicit�ňÖق̕ϊ����֎~�ɂ��Ă���
	 */
	explicit Scene(Scene::ID sceneID_);
	/**�f�X�g���N�^*/
	virtual ~Scene();

	/**
	 * ����֐�
	 * @retval	�J�ڐ�̃V�[��ID
	 */
	virtual Scene::ID Control() = 0;
	/**�`��֐�*/
	virtual void Draw() = 0;

protected:
	Library&	m_rLibrary;	// ���색�C�u�����N���X
	float		m_width;
	float		m_height;
	float		m_posX;
	float		m_posY;
};

#endif // !SCENE_H