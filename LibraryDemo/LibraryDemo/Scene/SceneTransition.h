/**
 * @file	SceneTransition.h
 * @breif	�V�[����J�ڂ���N���X�w�b�_
 * @author	shibata
 */

#ifndef SCENETRANSITION_H
#define SCENETRANSITION_H

#include "Scene.h"
class SceneFactory;

class SceneTransition
{
public:
	/**�R���X�g���N�^*/
	SceneTransition();
	/**�f�X�g���N�^*/
	~SceneTransition();

	/**
	 * ����֐�
	 * @retval true		����I��
	 * @retval false	����p��
	 */
	bool Control();
	/**�`��֐�*/
	void Render();

public:
	// �V�[���̌��݂̏��
	enum State
	{
		CREATE,		// �������
		RUN,		// �������
		RELEASE		// �J�����
	};

private:
	SceneFactory*	m_pSceneFactory;	// �V�[���̐���������N���X
	Scene*			m_pScene;			// �V�[���̒��ۃN���X
	Scene::ID		m_nextSceneID;		// ���ɑ@�ۂ���V�[���h�c
	State			m_state;			// ���݂̃V�[���̏��
	bool			m_isControlEnd;		// ���삪�I���������ǂ���
};

#endif // !SCENETRANSITION_H