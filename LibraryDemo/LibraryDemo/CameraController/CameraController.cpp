/**
* @file		CameraController.cpp
* @breif	カメラの制御をするクラス実装
* @author	shibata
*/

#include "CameraController.h"
#include <Library\Camera.h>
#include <Library\DebugSystem.h>
#include <Library\Define.h>
#include <Library.h>

namespace
{
	const float		CameraSpeed = 3.0f;					// カメラスピード
	const float		ZoomSpeed = 3.0f;					// ズームスピード
	const float		RollingSpeed = 10.f;				// 回転スピード

}

CameraController::CameraController() : 
m_pCamera(New Camera),
m_rLibrary(Library::Instace()),
m_eyePos(0.0f, 5.0f, -10.0f),
m_lookAtPos(0.0f, 0.0f, 1.0f),
m_angle(50.0f)
{
	MyAssert(m_pCamera, "NULLが入っている");
	m_pCamera->InputWindowSize(m_rLibrary.GetWinWidth(), m_rLibrary.GetWinHeight());
}

CameraController::~CameraController()
{
	SafeDelete(m_pCamera);
}

void CameraController::Control()
{
	D3DXMATRIX		matRotation; // 回転行列

	if (m_rLibrary.CheckKey(DIK_W) == ON)
	{
		D3DXMatrixRotationX(&matRotation, D3DXToRadian(RollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;

	}

	// 下回転
	if (m_rLibrary.CheckKey(DIK_S) == ON)
	{
		D3DXMatrixRotationX(&matRotation, D3DXToRadian(-RollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;
	}

	// 右回転
	if (m_rLibrary.CheckKey(DIK_D) == ON)
	{
		D3DXMatrixRotationY(&matRotation, D3DXToRadian(-RollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;
	}

	// 左回転
	if (m_rLibrary.CheckKey(DIK_A) == ON)
	{
		D3DXMatrixRotationY(&matRotation, D3DXToRadian(RollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;
	}

}

void CameraController::TransformView()
{
	m_pCamera->TransformView(m_eyePos, m_lookAtPos, m_angle);
}