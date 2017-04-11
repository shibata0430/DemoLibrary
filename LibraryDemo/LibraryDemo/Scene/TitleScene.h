/**
 * @file	TitleScene.h
 * @breif	タイトルシーンのクラスヘッダ
 * @author	shibata
 */

#ifndef TITLESCENE_H
#define TITLESCENE_H

#include "Scene.h"

class TitleScene : public Scene
{
public:
	/**コンストラクタ*/
	TitleScene();
	/**デストラクタ*/
	virtual ~TitleScene();

	/**
	 * 操作関数
	 * @retval	遷移先のシーンID
	 */
	virtual Scene::ID Control();
	/**描画関数*/
	virtual void Draw();
};

#endif // !TITLESCENE_H