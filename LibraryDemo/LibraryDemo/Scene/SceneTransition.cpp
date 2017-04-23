﻿/**
 * @file	SceneTransition.cpp
 * @breif	シーンを遷移するクラス実装
 * @author	shibata
 */

#include "SceneTransition.h"
#include "Scene.h"
#include "SceneFactory.h"
#include <Library\Define.h>

SceneTransition::SceneTransition() :
m_pSceneFactory(&SceneFactory::Instance()),
m_pScene(NULL),
m_nextSceneID(Scene::ID::LOGO_SCENE),
m_currentSceneID(Scene::ID::LOGO_SCENE),
m_state(CREATE),
m_isControlEnd(false)
{
}

SceneTransition::~SceneTransition()
{
	SafeDelete(m_pScene);	// Factoryで各シーンを動的に確保しているので開放している
}

bool SceneTransition::Control()
{

	switch (m_state)
	{
	case CREATE:
		m_currentSceneID = m_nextSceneID;
		if (m_nextSceneID == Scene::ID::FINISH)
		{
			m_isControlEnd = true;
			return m_isControlEnd;
		}
		else
		{
			m_pScene = m_pSceneFactory->CreateScene(m_currentSceneID);
			m_state = RUN;
		}
		break;

	case RUN:
		if ((m_nextSceneID = m_pScene->Control()) != m_currentSceneID)
		{
			m_state = RELEASE;
		}
		break;

	case RELEASE:
		delete m_pScene;
		m_pScene = NULL;
		m_state = CREATE;
		break;
	}
	return m_isControlEnd;
}

void SceneTransition::Render()
{
	if (m_state == RUN && m_pScene != NULL)
	{
		m_pScene->Draw();
	}
}
