/**
 * @file	CameraController.h
 * @breif	�J�����̐��������N���X�w�b�_
 * @author	shibata
 */

#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

#include <d3dx9.h>
#include <Library\Singleton.h>

class Camera;
class Library;

class CameraController : public Singleton<CameraController>
{
private:
	friend Singleton<CameraController>;

	CameraController();
	~CameraController();

public:
	/**�J��������֐�*/
	void Control();

	/**�r���[�ϊ��֐�*/
	void TransformView();

private:
	Camera*			m_pCamera;
	D3DXVECTOR3		m_eyePos;
	D3DXVECTOR3		m_lookAtPos;
	Library&		m_rLibrary;
	float			m_angle;
};

#endif // !CAMERACONTROLLER_H