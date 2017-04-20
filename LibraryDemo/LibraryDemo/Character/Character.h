/**
 * @file	Character.h
 * @breif	キャラクターの親クラスヘッダ
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
		CHIPS
	};

public:
	/**コンストラクタ*/
	Character();
	/**デストラクタ*/
	~Character();

	/**操作関数*/
	virtual void Control() = 0;
	/**描画関数*/
	virtual void Draw() = 0;

protected:
	void Transform3D(D3DXVECTOR3 localPos_, float angle_);

protected:
	Library&			m_rLibrary;
};

#endif // !CHARACTER_H