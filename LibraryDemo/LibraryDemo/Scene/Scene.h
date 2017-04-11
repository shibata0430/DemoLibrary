/**
 * @file	Scene.h
 * @breif	各シーンの親クラスヘッダ
 * @author	shibata
 */

#ifndef SCENE_H
#define SCENE_H

class Library;

class Scene
{
public:
	// プログラム上で使用するシーンの種類
	enum ID
	{
		LOGO_SCENE,
		TITLE_SCENE,
		MAIN_SCENE,
		FINISH
	};

public:
	/**
	 * コンストラクタ
	 * @param [in] sceneID_	派生クラス生成の際にシーンＩＤをそのクラスと一致させるため
	 * @note	explicitで暗黙の変換を禁止にしている
	 */
	explicit Scene(Scene::ID sceneID_);
	/**デストラクタ*/
	virtual ~Scene();

	/**
	 * 操作関数
	 * @retval	遷移先のシーンID
	 */
	virtual Scene::ID Control() = 0;
	/**描画関数*/
	virtual void Draw() = 0;

protected:
	Library&	m_rLibrary;	// 自作ライブラリクラス
	float		m_width;
	float		m_height;
	float		m_posX;
	float		m_posY;
};

#endif // !SCENE_H