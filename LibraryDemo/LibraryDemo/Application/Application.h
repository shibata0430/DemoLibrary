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
	Application();
	~Application();

	bool Run();

private:
	Library&			m_rLibrary;
	SceneTransition*	m_pSceneTransition;
	bool				m_isGameEnd;			// �Q�[����ő��삪�I��������
};

#endif // !APPLICATION_H