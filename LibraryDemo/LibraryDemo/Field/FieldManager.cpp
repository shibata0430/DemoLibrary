/**
* @file		FieldManager.cpp
* @breif	フィールドを管理しているクラス実装
* @author	shibata
*/

#include "FieldManager.h"
#include "Floor.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>


FieldManager::FieldManager()
{
	m_pField.emplace_back(New Floor);
}

FieldManager::~FieldManager()
{
	for (unsigned int i = 0; i < m_pField.size(); i++)
	{
		SafeDelete(m_pField[i]);
	}
}

void FieldManager::Drwa()
{
	for (unsigned int i = 0; i < m_pField.size(); i++)
	{
		m_pField[i]->Draw();
	}
}
