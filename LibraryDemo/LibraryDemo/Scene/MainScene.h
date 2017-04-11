/**
 * @file	MainScene.h
 * @breif	メインシーンのクラスヘッダ
 * @author	shibata
 */

#ifndef MAINSCENE_H
#define MAINSCENE_H

#include "Scene.h"

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
};

#endif // !MAINSCENE_H