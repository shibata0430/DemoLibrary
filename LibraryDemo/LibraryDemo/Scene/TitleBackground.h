/**
 * @file	TitleBackground.h
 * @breif	�^�C�g���̔w�i�`��N���X�w�b�_
 * @author	shibata
 */

#ifndef TITLEBACKGROUND_H
#define TITLEBACKGROUND_H

class Library;

class TitleBackground
{
public:
	TitleBackground();
	~TitleBackground();

	void Draw();

private:
	Library&	m_rLibrary;
	float		m_width;		// �w�i�̕`�掞�̕�
	float		m_height;		// �w�i�̕`�掞�̍���
	float		m_posX;			// �w�i��X���W
	float		m_posY;			// �w�i��Y���W
};

#endif // !TITLEBACKGROUND_H