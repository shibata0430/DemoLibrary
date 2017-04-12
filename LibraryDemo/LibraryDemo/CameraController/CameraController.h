/**
 * @file	CameraController.h
 * @breif	カメラの制御をするクラスヘッダ
 * @author	shibata
 */

#ifndef CAMERACONTROLLER_H
#define CAMERACONTROLLER_H

class Library;

class CameraController
{
public:
	CameraController();
	~CameraController();

private:
	Library& m_rLibrary;
};

#endif // !CAMERACONTROLLER_H