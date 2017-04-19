/**
 * @file	Chips.h
 * @breif	����1��3D�I�u�W�F�N�g�̃`�b�v�X�̃N���X�w�b�_
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