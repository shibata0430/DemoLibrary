/**
* @file		Player.cpp
* @breif	操作キャラのクラス実装
* @author	shibata
*/

#include "Player.h"
#include <Library.h>
#include "../CameraController/CameraController.h"
#include "../ObjectManager/ObjectManager.h"

namespace
{
	const float moveSpeed = 0.5f;
	const float rotateSpeed = 0.5f;
}

Player::Player() : 
m_playerPos(0.0f, 0.0f, 0.0f),
m_rotateAngle(0.0f),
m_pCameracontroller(&CameraController::Instace())
{
	m_rLibrary.LoadXFile(ObjectManager::MeshKind::PLAYER, "Resource/Texture/Human.x");
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
	m_pCameracontroller->TransformView();
	m_rLibrary.DrawXFile(ObjectManager::MeshKind::PLAYER);
}

void Player::Move()
{
	// 上下左右の移動
	if (m_rLibrary.CheckKey(DIK_LEFT) == ON)
	{
		m_playerPos.x -= moveSpeed;
	}
	if (m_rLibrary.CheckKey(DIK_RIGHT) == ON)
	{
		m_playerPos.x += moveSpeed;
	}
	if (m_rLibrary.CheckKey(DIK_UP) == ON)
	{
		m_playerPos.z += moveSpeed;
	}
	if (m_rLibrary.CheckKey(DIK_DOWN) == ON)
	{
		m_playerPos.z -= moveSpeed;
	}
	// 回転
	if (m_rLibrary.CheckKey(DIK_Z) == ON)
	{
		m_rotateAngle += rotateSpeed;
	}
	if (m_rLibrary.CheckKey(DIK_X) == ON)
	{
		m_rotateAngle -= rotateSpeed;
	}
}
