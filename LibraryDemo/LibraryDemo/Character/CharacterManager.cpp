/**
* @file		CharacterManager.cpp
* @breif	キャラクターを管理しているクラス実装
* @author	shibata
*/

#include "CharacterManager.h"
#include "Player.h"
#include "Chips.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>

CharacterManager::CharacterManager()
{
	m_pCharacter.emplace_back(New Player);
	m_pCharacter.emplace_back(New Chips);
}

CharacterManager::~CharacterManager()
{
	for (unsigned int i = 0; i < m_pCharacter.size(); i++)
	{
		SafeDelete(m_pCharacter[i]);
	}
}

void CharacterManager::Control()
{
	for (unsigned int i = 0; i < m_pCharacter.size(); i++)
	{
		m_pCharacter[i]->Control();
	}
}

void CharacterManager::Draw()
{
	for (unsigned int i = 0; i < m_pCharacter.size(); i++)
	{
		m_pCharacter[i]->Draw();
	}
}
