/**
 * @file	Player.h
 * @breif	����L�����̃N���X�w�b�_
 * @author	shibata
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include <d3dx9.h>

class Player : public Character
{
public:
	Player();
	~Player();

	virtual void Control();
	virtual void Draw();

private:
	void Move();

private:
	D3DXVECTOR3 m_playerPos;
	float		m_rotateAngle;
};

#endif // !PLAYER_H