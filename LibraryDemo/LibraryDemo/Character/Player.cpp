/**
* @file		Player.cpp
* @breif	操作キャラのクラス実装
* @author	shibata
*/

#include "Player.h"
#include <Library.h>

Player::Player() : 
m_playerPos(0.0f, 0.0f, 0.0f),
m_rotateAngle(0.0f)
{
	m_rLibrary.LoadXFile(Character::MeshKind::PLAYER, "Resource/Texture/Human.x");
}

Player::~Player()
{
}

void Player::Control()
{
	Move();
}

void Player::Draw()
{
	Transform3D(m_playerPos, m_rotateAngle);
	m_rLibrary.DrawXFile(Character::MeshKind::PLAYER);
}

void Player::Move()
{
	// 上下左右の移動
	if (m_rLibrary.CheckKey(DIK_LEFT) == ON)
	{
		m_playerPos.x -= 1.0f;
	}
	if (m_rLibrary.CheckKey(DIK_RIGHT) == ON)
	{
		m_playerPos.x += 1.0f;
	}
	if (m_rLibrary.CheckKey(DIK_UP) == ON)
	{
		m_playerPos.z += 1.0f;
	}
	if (m_rLibrary.CheckKey(DIK_DOWN) == ON)
	{
		m_playerPos.z -= 1.0f;
	}
	// ズームインアウト
	if (m_rLibrary.CheckKey(DIK_Z) == ON)
	{
		m_rotateAngle += 0.5f;
	}
	if (m_rLibrary.CheckKey(DIK_X) == ON)
	{
		m_rotateAngle -= 0.5f;
	}
}
