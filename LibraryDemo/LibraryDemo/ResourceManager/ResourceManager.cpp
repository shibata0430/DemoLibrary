/**
* @file		ResourceManager.cpp
* @breif	リソース関係の管理をしているクラス実装
* @author	shibata
*/

#include "ResourceManager.h"
#include <Library.h>

ResourceManager::ResourceManager() : 
m_rLibrary(Library::Instace())
{
	
}

ResourceManager::~ResourceManager()
{
}
