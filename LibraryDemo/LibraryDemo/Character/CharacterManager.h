/**
 * @file	CharacterManager.h
 * @breif	キャラクターを管理しているクラスヘッダ
 * @author	shibata
 */

#ifndef CHARACTERMANAGER_H
#define CHARACTERMANAGER_H

#include <vector>
class Character;

class CharacterManager
{
public:
	CharacterManager();
	~CharacterManager();

	void Control();
	void Draw();

private:
	std::vector<Character*> m_pCharacter;
};

#endif // !CHARACTERMANAGER_H