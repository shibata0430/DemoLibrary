/**
 * @file	SceneTransition.h
 * @breif	�V�[����J�ڂ���N���X�w�b�_
 * @author	shibata
 */

#ifndef SCENETRANSITION_H
#define SCENETRANSITION_H

class SceneTransition
{
public:
	SceneTransition();
	~SceneTransition();

	bool Control();
	void Render();

private:
	bool m_isControlEnd;
};

#endif // !SCENETRANSITION_H