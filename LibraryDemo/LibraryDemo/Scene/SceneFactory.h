/**
 * @file	SceneFactory.h
 * @breif	シーンの生成クラスヘッダ
 * @author	shibata
 */

#ifndef SCENEFACTORY_H
#define SCENEFACTORY_H

#include "Scene.h"
#include <Library\DebugSystem.h>
#include <Library\Singleton.h>

class LogoScene;
class TitleScene;
class MainScene;

class SceneFactory : public Singleton<SceneFactory>
{
private:
	friend Singleton<SceneFactory>;

	/**
	 * コンストラクタ
	 * @attntion Singletonパターンを使用しているためprivateに
	 */
	SceneFactory();

	/**
	* デストラクタ
	* @attntion コンストラクタと同様の理由
	*/
	virtual ~SceneFactory();

public:
	/**
	 * 各シーンの生成関数
	 * @param [in] sceneID_	次のシーンＩＤ
	 * @retrun				アップキャストしたインスタンス
	 */
	Scene* CreateScene(Scene::ID sceneID_);	
};

#endif // !SCENEFACTORY_H