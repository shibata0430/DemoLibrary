/**
* @file		Floor.cpp
* @breif	床のクラス実装
* @author	shibata
*/

#include "Floor.h"
#include "../ObjectManager/ObjectManager.h"
#include <Library.h>

Floor::Floor() : 
m_floorPos(2.0f, -5.0f, 0.0f)
{
	m_rLibrary.LoadXFile(ObjectManager::Kind::FLOOR, "Resource/Texture/Ground.x");
}

Floor::~Floor()
{
}

void Floor::Draw()
{
	m_rLibrary.DrawXFile(ObjectManager::Kind::FLOOR);
}
