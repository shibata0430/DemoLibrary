/**
* @file		ObjectManager.cpp
* @breif	出てくるオブジェクトを管理しているクラス実装
* @author	shibata
*/

#include "ObjectManager.h"
#include "../Character/CharacterManager.h"
#include "../Field/FieldManager.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>


ObjectManager::ObjectManager() : 
m_pCharacterManager(New CharacterManager),
m_pFieldManager(New FieldManager)
{
	MyAssert(m_pCharacterManager, "NULLが入っています");
	MyAssert(m_pFieldManager, "NULLが入っています");
}

ObjectManager::~ObjectManager()
{
	SafeDelete(m_pCharacterManager);
	SafeDelete(m_pFieldManager);
}

void ObjectManager::Control()
{
	m_pCharacterManager->Control();
}

void ObjectManager::Draw()
{
	m_pFieldManager->Drwa();
	m_pCharacterManager->Draw();
}
