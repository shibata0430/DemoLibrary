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
	Chips();
	~Chips();

	virtual void Control();
	virtual void Draw();

private:
	D3DXVECTOR3 m_chipPos;
	float		m_rotateAngle;
};


#endif // !CHIPS_H