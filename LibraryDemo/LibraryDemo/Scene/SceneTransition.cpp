/**
 * @file	SceneTransition.cpp
 * @breif	�V�[����J�ڂ���N���X����
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
