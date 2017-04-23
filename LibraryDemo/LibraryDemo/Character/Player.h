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
	/**コンストラクタ*/
	Player();
	/**デストラクタ*/
	~Player();

	/**操作関数*/
	virtual void Control();
	/**描画関数*/
	virtual void Draw();

private:
	/**移動関数*/
	void Move();

private:
	D3DXVECTOR3			m_playerPos;			// プレイヤーのローカル座標
	float				m_rotateAngle;			// 回転のアングル
	CameraController*	m_pCameracontroller;
};

#endif // !PLAYER_H