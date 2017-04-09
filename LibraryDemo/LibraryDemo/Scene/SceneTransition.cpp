/**
 * @file	SceneTransition.cpp
 * @breif	シーンを遷移するクラス実装
 * @author	shibata
 */

#include "SceneTransition.h"

SceneTransition::SceneTransition() :
m_isControlEnd(false)
{

}

SceneTransition::~SceneTransition()
{

}

bool SceneTransition::Control()
{
	return m_isControlEnd;
}

void SceneTransition::Render()
{

}
