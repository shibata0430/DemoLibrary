/**
 * @file	SceneFactory.h
 * @breif	シーンの生成クラスヘッダ
 * @author	shibata
 */

#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include "Scene.h"
#include <Library\DebugSystem.h>

class LogoScene;
class TitleScene;
class MainScene;

class SceneFactory 
{
private:
	/**
	 * コンストラクタ
	 * @attntion Singletonパターンを使用しているためprivateに
	 */
	SceneFactory();

	/**
	 * デストラクタ
	 * @attntion コンストラクタと同様の理由
	 */
	~SceneFactory();

public:

	// インスタンスの取得
	static SceneFactory& Instace()
	{
		static SceneFactory m_scenFactory;
		return m_scenFactory;
	}

	/**
	 * 各シーンの生成関数
	 * @param [in] sceneID_	次のシーンＩＤ
	 * @retrun				アップキャストしたインスタンス
	 */
	Scene* CreateScene(Scene::ID sceneID_);	
};

#endif // !SCENEFACTORY_H