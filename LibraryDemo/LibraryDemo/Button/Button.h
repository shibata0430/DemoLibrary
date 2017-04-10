/**
 * @file	Button.h
 * @breif	作品で出てくるボタン関係のクラスヘッダ
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