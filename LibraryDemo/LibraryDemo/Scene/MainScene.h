/**
 * @file	MainScene.h
 * @breif	メインシーンのクラスヘッダ
 * @author	shibata
 */

#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "Scene.h"

class CharacterManager;
class CameraController;
class Light;

class MainScene : public Scene
{
public:
	/**コンストラクタ*/
	MainScene();
	/**デストラクタ*/
	virtual ~MainScene();

	/**
	 * 操作関数
	 * @retval	遷移先のシーンID
	 */
	virtual Scene::ID Control();
	/**描画関数*/
	virtual void Draw();

private:
	CharacterManager*	m_pCharacterManager;
	CameraController*	m_pCameraController;
	Light*				m_pLight;
};

#endif // !MAINSCENE_H