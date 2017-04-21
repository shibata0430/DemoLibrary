/**
* @file		Chips.cpp
* @breif	もう1つの3Dオブジェクトのチップスのクラス実装
* @author	shibata
*/

#include "Chips.h"
#include "../ObjectManager/ObjectManager.h"
#include <Library.h>

Chips::Chips() : 
m_chipPos(3.0f, 0.0f, 3.0f),
m_rotateAngle(0.0f)
{
	m_rLibrary.LoadXFile(ObjectManager::Kind::CHIPS, "Resource/Texture/Chips.x");
}

Chips::~Chips()
{
}

void Chips::Control()
{
}

void Chips::Draw()
{
	Transform3D(m_chipPos, m_rotateAngle);
	m_rLibrary.DrawXFile(ObjectManager::Kind::CHIPS);
}
