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
	SceneTransition();
	~SceneTransition();

	bool Control();
	void Render();

public:
	enum State
	{
		CREATE,
		RUN,
		RELEASE
	};

private:
	SceneFactory*	m_pSceneFactory;
	Scene*			m_pScene;
	Scene::ID		m_nextSceneID;
	State			m_state;
	bool			m_isControlEnd;
};

#endif // !SCENETRANSITION_H