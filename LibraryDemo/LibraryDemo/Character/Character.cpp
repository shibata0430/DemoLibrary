/**
* @file		Character.cpp
* @breif	キャラクターの親クラス実装
* @author	shibata
*/

#include "Character.h"
#include <Library.h>

Character::Character() : 
m_rLibrary(Library::Instace())
{
}

Character::~Character()
{
}

void Character::Control()
{
}

void Character::Draw()
{
}
