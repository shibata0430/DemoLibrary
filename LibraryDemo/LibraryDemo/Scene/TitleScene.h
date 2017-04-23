/**
 * @file	TitleScene.h
 * @breif	タイトルシーンのクラスヘッダ
 * @author	shibata
 */

#ifndef TITLESCENE_H
#define TITLESCENE_H

#include "Scene.h"

class Logo;
class Button;
class TitleBackground;

class TitleScene : public Scene
{
public:
	enum Kind
	{
		TITLE_LOGO,
		MENU_LOGO,
		BUTTON,
		BACKGROUND
	};

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

private:
	Logo*				m_pTitleLogo;			// タイトルロゴ用のロゴクラス
	Logo*				m_pMenuLogo;			// メニューロゴ用のロゴクラス
	Button*				m_pButton;
	TitleBackground*	m_pTitleBackground;
};

#endif // !TITLESCENE_H