/**
 * @file	Application.h
 * @breif	�A�v���̊�_�̃N���X�w�b�_
 * @author	shibata
 */

#ifndef APPLICATION_H
#define APPLICATION_H

class Application
{
public:
	Application();
	~Application();

	bool Run();

private:
	bool m_isGameEnd;
};

#endif // !APPLICATION_H