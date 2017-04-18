/**
 * @file	Player.h
 * @breif	操作キャラのクラスヘッダ
 * @author	shibata
 */

#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"
#include <d3dx9.h>

class CameraController;

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
	D3DXVECTOR3			m_playerPos;
	D3DXVECTOR3			m_lookAtPos;
	float				m_rotateAngle;
	CameraController*	m_pCameracontroller;
};

#endif // !PLAYER_H