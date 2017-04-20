/**
 * @file	SceneTransition.h
 * @breif	シーンを遷移するクラスヘッダ
 * @author	shibata
 */

#ifndef SCENETRANSITION_H
#define SCENETRANSITION_H

#include "Scene.h"
class SceneFactory;

class SceneTransition
{
public:
	/**コンストラクタ*/
	SceneTransition();
	/**デストラクタ*/
	~SceneTransition();

	/**
	 * 操作関数
	 * @retval true		操作終了
	 * @retval false	操作継続
	 */
	bool Control();
	/**描画関数*/
	void Render();

public:
	// シーンの現在の状態
	enum State
	{
		CREATE,		// 生成状態
		RUN,		// 処理状態
		RELEASE		// 開放状態
	};

private:
	SceneFactory*	m_pSceneFactory;	// シーンの生成をするクラス
	Scene*			m_pScene;			// シーンの抽象クラス
	Scene::ID		m_nextSceneID;		// 次に繊維するシーンＩＤ
	State			m_state;			// 現在のシーンの状態
	bool			m_isControlEnd;		// 操作が終了したかどうか
};

#endif // !SCENETRANSITION_H