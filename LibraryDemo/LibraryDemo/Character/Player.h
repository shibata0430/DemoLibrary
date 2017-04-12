/**
 * @file	Player.h
 * @breif	����L�����̃N���X�w�b�_
 * @author	shibata
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character
{
public:
	Player();
	~Player();

	virtual void Control();
	virtual void Draw();

private:
	void Move();
};

#endif // !PLAYER_H