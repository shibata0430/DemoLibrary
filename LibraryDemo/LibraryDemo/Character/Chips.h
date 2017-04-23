/**
 * @file	Chips.h
 * @breif	もう1つの3Dオブジェクトのチップスのクラスヘッダ
 * @author	shibata
 */

#ifndef CHIPS_H
#define CHIPS_H

#include "Character.h"
#include <d3dx9.h>

class Chips : public Character
{
public:
	/**コンストラクタ*/
	Chips();
	/**デストラクタ*/
	~Chips();

	/**操作関数*/
	virtual void Control();
	/**描画関数*/
	virtual void Draw();

private:
	D3DXVECTOR3 m_chipPos;		// チップスのローカル座標
	float		m_rotateAngle;	// 回転のアングル
};


#endif // !CHIPS_H