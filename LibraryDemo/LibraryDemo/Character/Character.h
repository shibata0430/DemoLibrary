/**
 * @file	Character.h
 * @breif	�L�����N�^�[�̐e�N���X�w�b�_
 * @author	shibata
 */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <d3dx9.h>

class Library;


class Character
{
public:
	enum MeshKind
	{
		PLAYER,
	};

public:
	/**�R���X�g���N�^*/
	Character();
	/**�f�X�g���N�^*/
	~Character();

	/**����֐�*/
	virtual void Control() = 0;
	/**�`��֐�*/
	virtual void Draw() = 0;

protected:
	void Transform3D(D3DXVECTOR3 localPos_, float angle_);

protected:
	Library&			m_rLibrary;
};

#endif // !CHARACTER_H