/**
* @file		Character.cpp
* @breif	�L�����N�^�[�̐e�N���X����
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

void Character::Transform3D(D3DXVECTOR3 localPos_, float angle_)
{
	D3DXMATRIXA16 matWorld;
	D3DXMATRIXA16 matPosition;
	D3DXMATRIXA16 matRotation;

	// �P�ʍs������֐�
	/*
	* ���[���h�g�����X�t�H�[�����ŏ��̒P�ʍs��Łu�������v���Ă���
	*/
	D3DXMatrixIdentity(&matWorld);

	// ���s�ړ��s������֐�
	/*
	* ���A��O�A��l�����̃x�N�g��(���W)�����Ƃɑ����������������Ă���
	*/
	D3DXMatrixTranslation(&matPosition, localPos_.x, localPos_.y, localPos_.z);

	// Y�����̒��S�Ƀ��b�V������]������֐�
	/*
	* �������F�����������s��
	* �������F���b�V���̉�]����p�x
	*/
	D3DXMatrixRotationY(&matRotation, angle_);

	// �s�����������֐�
	/*
	* ���A��O�����̍s���������(�~)�������Ɍv�Z���ʂ����Ă���
	* 2�������Ȃ�(�~)�ƍ��W�n����ʂɔ��f����Ȃ�����
	*/
	D3DXMatrixMultiply(&matWorld, &matRotation, &matPosition);

	/*
	* �������F���[���h�g�����X�t�H�[�����w�肵�Ă�
	* �������F���[���h�g�����X�t�H�[�����ǂ̍s��ɂ���čs���������߂Ă���
	*/
	m_rLibrary.GetDevice()->SetTransform(D3DTS_WORLD, &matWorld);
}
