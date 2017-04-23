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
	/**コンストラクタ*/
	CharacterManager();
	/**デストラクタ*/
	~CharacterManager();

	/**操作関数*/
	void Control();
	/**描画関数*/
	void Draw();

private:
	std::vector<Character*> m_pCharacter;
};

#endif // !CHARACTERMANAGER_H