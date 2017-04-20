/**
* @file		CharacterManager.cpp
* @breif	キャラクターを管理しているクラス実装
* @author	shibata
*/

#include "CharacterManager.h"
#include "Player.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>

CharacterManager::CharacterManager()
{
	m_pCharacter.emplace_back(New Player);
}

CharacterManager::~CharacterManager()
{
	for (auto itr = m_pCharacter.begin(); itr != m_pCharacter.end(); ++itr)
	{
		delete (*itr);
	}
}

void CharacterManager::Control()
{
	for (auto itr = m_pCharacter.begin(); itr != m_pCharacter.end(); ++itr)
	{
		(*itr)->Control();
	}
}

void CharacterManager::Draw()
{
	for (auto itr = m_pCharacter.begin(); itr != m_pCharacter.end(); ++itr)
	{
		(*itr)->Draw();
	}
}
