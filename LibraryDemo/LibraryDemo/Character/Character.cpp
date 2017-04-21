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

void Character::Transform3D(const D3DXVECTOR3& localPos_, float angle_)
{
	D3DXMATRIXA16 matWorld;
	D3DXMATRIXA16 matPosition;
	D3DXMATRIXA16 matRotation;

	D3DXMatrixIdentity(&matWorld);
	D3DXMatrixTranslation(&matPosition, localPos_.x, localPos_.y, localPos_.z);
	D3DXMatrixRotationY(&matRotation, angle_);
	D3DXMatrixMultiply(&matWorld, &matRotation, &matPosition);
	m_rLibrary.GetDevice()->SetTransform(D3DTS_WORLD, &matWorld);
}
