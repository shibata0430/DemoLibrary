/**
 * @file	Button.h
 * @breif	��i�ŏo�Ă���{�^���֌W�̃N���X�w�b�_
 * @author	shibata
 */

#ifndef BUTTON_H
#define BUTTON_H

class Button
{
public:
	Button(int posX_, int posY_);
	~Button();

private:
	int m_buttonPosX;
	int m_butoonPosY;
};

#endif // !BUTTON_H