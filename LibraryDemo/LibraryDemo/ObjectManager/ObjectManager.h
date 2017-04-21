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
	enum MeshKind
	{
		PLAYER,
		CHIPS,
		FLOOR,
	};

public:

	/**コンストラクタ*/
	ObjectManager();
	/**デストラクタ*/
	~ObjectManager();
	/**操作関数*/
	void Control();

	void Draw();

private:
	CharacterManager*	m_pCharacterManager;
	FieldManager*		m_pFieldManager;
};

#endif // !OBJECTMANAGER_H