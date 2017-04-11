/**
 * @file	Application.h
 * @breif	�A�v���̊�_�̃N���X�w�b�_
 * @author	shibata
 */

#ifndef APPLICATION_H
#define APPLICATION_H

class Library;
class SceneTransition;

class Application
{
public:
	/**�R���X�g���N�^*/
	Application();
	/**�f�X�g���N�^*/
	~Application();

	/**
	 * �����̊J�n�֐�
	 * @retval true		�v���O�������I��
	 * @retval false	�v���O�������p��
	 */
	bool Run();

private:
	Library&			m_rLibrary;				// ���색�C�u�����N���X
	SceneTransition*	m_pSceneTransition;		// �V�[���J�ڂ�����N���X
	bool				m_isGameEnd;			// �Q�[����ő��삪�I��������
};

#endif // !APPLICATION_H