/**
* @file		CameraController.cpp
* @breif	�J�����̐��������N���X����
* @author	shibata
*/

#include "CameraController.h"
#include <Library\Camera.h>
#include <Library\DebugSystem.h>
#include <Library\Define.h>
#include <Library.h>

namespace
{
	const float		zoomSpeed		= 1.0f;				// �Y�[���X�s�[�h
	const float		rollingSpeed	= 5.f;				// ��]�X�s�[�h

}

CameraController::CameraController() : 
m_pCamera(New Camera),
m_rLibrary(Library::Instace()),
m_eyePos(0.0f, 5.0f, -10.0f),
m_lookAtPos(0.0f, 0.0f, 1.0f),
m_angle(50.0f)
{
	MyAssert(m_pCamera, "NULL�������Ă���");
	m_pCamera->InputWindowSize(m_rLibrary.GetWinWidth(), m_rLibrary.GetWinHeight());
}

CameraController::~CameraController()
{
	SafeDelete(m_pCamera);
}

void CameraController::Control()
{
	D3DXMATRIX		matRotation; // ��]�s��

	// �㉺���E�̉�]
	if (m_rLibrary.CheckKey(DIK_W) == ON)
	{
		D3DXMatrixRotationX(&matRotation, D3DXToRadian(rollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;

	}
	if (m_rLibrary.CheckKey(DIK_S) == ON)
	{
		D3DXMatrixRotationX(&matRotation, D3DXToRadian(-rollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;
	}
	if (m_rLibrary.CheckKey(DIK_D) == ON)
	{
		D3DXMatrixRotationY(&matRotation, D3DXToRadian(-rollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;
	}
	if (m_rLibrary.CheckKey(DIK_A) == ON)
	{
		D3DXMatrixRotationY(&matRotation, D3DXToRadian(rollingSpeed));
		D3DXVECTOR3 pos = m_eyePos - m_lookAtPos;
		D3DXVec3TransformCoord(&pos, &pos, &matRotation);
		m_eyePos = pos + m_lookAtPos;
	}
	// �Y�[���C���A�E�g
	if (m_rLibrary.CheckKey(DIK_C) == ON)
	{
		m_angle += zoomSpeed;
	}
	if (m_rLibrary.CheckKey(DIK_V) == ON)
	{
		m_angle -= zoomSpeed;
	}
}

void CameraController::TransformView()
{
	m_pCamera->TransformView(m_eyePos, m_lookAtPos, m_angle);
}

void CameraController::SetLookAtPos(const D3DXVECTOR3 & rplayerPos_)
{
	m_eyePos = rplayerPos_;
}
