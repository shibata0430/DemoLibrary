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
	Application();
	~Application();

	bool Run();

private:
	Library&			m_rLibrary;
	SceneTransition*	m_pSceneTransition;
	bool				m_isGameEnd;			// ゲーム上で操作が終了したか
};

#endif // !APPLICATION_H