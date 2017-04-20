/**
 * @file	LogoScene.h
 * @breif	ロゴシーンのクラスヘッダ
 * @author	shibata
 */

#ifndef LOGOSCENE_H
#define LOGOSCENE_H

#include "Scene.h"

class LogoScene : public Scene
{
public:
	enum 
	{
		LOGO
	};

public:
	/**コンストラクタ*/
	LogoScene();
	/**デストラクタ*/
	virtual ~LogoScene();

	/**
	 * 操作関数
	 * @retval	遷移先のシーンID
	 */
	virtual Scene::ID Control();
	/**描画関数*/
	virtual void Draw();
private:

};

#endif // !LOGOSCENE_H