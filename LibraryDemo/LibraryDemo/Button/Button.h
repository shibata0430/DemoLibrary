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
	/**
	 * コンストラクタ
	 * @param [in] posX_	Ｘ軸の表示位置
	 * @param [in] posY_	Ｙ軸の表示位置
	 */
	Button(int posX_, int posY_);
	/**デストラクタ*/
	~Button();

private:
	int m_buttonPosX;	// ボタンのＸの表示位置
	int m_butoonPosY;	// ボタンのＹの表示位置
};

#endif // !BUTTON_H