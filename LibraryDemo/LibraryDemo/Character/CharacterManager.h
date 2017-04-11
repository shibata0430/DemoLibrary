/**
 * @file	CharacterManager.h
 * @breif	キャラクターを管理しているクラスヘッダ
 * @author	shibata
 */

#ifndef CHARACTERMANAGER_H
#define CHARACTERMANAGER_H

class CharacterManager
{
public:
	CharacterManager();
	~CharacterManager();

	void Control();
	void Draw();
};

#endif // !CHARACTERMANAGER_H