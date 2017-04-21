/**
 * @file	ObjectManager.h
 * @breif	出てくるオブジェクトを管理しているクラスヘッダ
 * @author	shibata
 */

#ifndef OBJECTMANAGER_H
#define OBJECTMANAGER_H

class CharacterManager;
class FieldManager;

class ObjectManager
{
public:
	// 出てくるオブジェクト群
	enum Kind
	{
		PLAYER,		// 操作キャラ
		CHIPS,		// チップス
		FLOOR,		// 床
	};

public:
	/**コンストラクタ*/
	ObjectManager();
	/**デストラクタ*/
	~ObjectManager();
	/**操作関数*/
	void Control();
	/**描画関数*/
	void Draw();

private:
	CharacterManager*	m_pCharacterManager;
	FieldManager*		m_pFieldManager;
};

#endif // !OBJECTMANAGER_H