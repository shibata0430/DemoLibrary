/**
 * @file	Chips.h
 * @breif	もう1つの3Dオブジェクトのチップスのクラスヘッダ
 * @author	shibata
 */

#ifndef CHIPS_H
#define CHIPS_H

#include "Character.h"

class Chips : public Character
{
public:
	Chips();
	~Chips();

	virtual void Control();
	virtual void Draw();
};


#endif // !CHIPS_H