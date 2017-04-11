/**
 * @file	SceneTransition.cpp
 * @breif	�V�[����J�ڂ���N���X����
 * @author	shibata
 */

#include "SceneTransition.h"
#include "Scene.h"
#include "SceneFactory.h"
#include <Library\Define.h>

SceneTransition::SceneTransition() :
m_pSceneFactory(&SceneFactory::Instace()),
m_pScene(NULL),
m_nextSceneID(Scene::ID::LOGO_SCENE),
m_state(CREATE),
m_isControlEnd(false)
{
}

SceneTransition::~SceneTransition()
{
	SafeDelete(m_pScene);	// Factory�Ŋe�V�[���𓮓I�Ɋm�ۂ��Ă���̂ŊJ�����Ă���
}

bool SceneTransition::Control()
{
	Scene::ID currentSceneID = Scene::ID::LOGO_SCENE;

	switch (m_state)
	{
	case CREATE:
		if (m_nextSceneID == Scene::ID::FINISH)
		{
			m_isControlEnd = true;
			return m_isControlEnd;
		}
		else
		{
			m_pScene = m_pSceneFactory->CreateScene(m_nextSceneID);
			m_state = RUN;
		}
		break;

	case RUN:
		if ((m_nextSceneID = m_pScene->Control()) != currentSceneID)
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
