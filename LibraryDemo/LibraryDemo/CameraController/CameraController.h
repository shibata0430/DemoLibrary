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

	/**
	 * コンストラクタ
	 * @attention	Singletonパターンを使用しているためprivate
	 */
	CameraController();
	/**
	* デストラクタ
	* @attention	Singletonパターンを使用しているためprivate
	*/
	virtual ~CameraController();

public:
	/**カメラ制御関数*/
	void Control();

	/**ビュー変換関数*/
	void TransformView();

private:
	Camera*			m_pCamera;		// 自作のカメラクラス
	D3DXVECTOR3		m_eyePos;		// カメラの位置座標
	D3DXVECTOR3		m_lookAtPos;	// カメラの注視座標
	Library&		m_rLibrary;		// 自作ライブラリクラス
	float			m_angle;		// カメラの角度
};

#endif // !CAMERACONTROLLER_H