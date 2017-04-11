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
	/**
	 * �R���X�g���N�^
	 * @param [in] posX_	�w���̕\���ʒu
	 * @param [in] posY_	�x���̕\���ʒu
	 */
	Button(int posX_, int posY_);
	/**�f�X�g���N�^*/
	~Button();

private:
	int m_buttonPosX;	// �{�^���̂w�̕\���ʒu
	int m_butoonPosY;	// �{�^���̂x�̕\���ʒu
};

#endif // !BUTTON_H