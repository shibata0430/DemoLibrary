/**
 * @file	CameraController.h
 * @breif	カメラの制御をするクラスヘッダ
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
	/**カメラ制御関数*/
	void Control();

	/**ビュー変換関数*/
	void TransformView();

private:
	Camera*			m_pCamera;
	D3DXVECTOR3		m_eyePos;
	D3DXVECTOR3		m_lookAtPos;
	Library&		m_rLibrary;
	float			m_angle;
};

#endif // !CAMERACONTROLLER_H