/**
 * @file	Character.h
 * @breif	�L�����N�^�[�̐e�N���X�w�b�_
 * @author	shibata
 */

#ifndef CHARACTER_H
#define CHARACTER_H

class Library;

class Character
{
public:
	/**�R���X�g���N�^*/
	Character();
	/**�f�X�g���N�^*/
	~Character();

	/**����֐�*/
	virtual void Control() = 0;
	/**�`��֐�*/
	virtual void Draw() = 0;

private:
	Library& m_rLibrary;
};

#endif // !CHARACTER_H