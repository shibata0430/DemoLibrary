/**
 * @file	Application.h
 * @breif	アプリの基点のクラスヘッダ
 * @author	shibata
 */

#ifndef APPLICATION_H
#define APPLICATION_H

class Library;
class SceneTransition;

class Application
{
public:
	/**コンストラクタ*/
	Application();
	/**デストラクタ*/
	~Application();

	/**
	 * 処理の開始関数
	 * @retval true		プログラムを終了
	 * @retval false	プログラムを継続
	 */
	bool Run();

private:
	Library&			m_rLibrary;				// 自作ライブラリクラス
	SceneTransition*	m_pSceneTransition;		// シーン遷移をするクラス
	bool				m_isGameEnd;			// ゲーム上で操作が終了したか
};

#endif // !APPLICATION_H