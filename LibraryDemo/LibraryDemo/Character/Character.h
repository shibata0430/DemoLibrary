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
	/**コンストラクタ*/
	Character();
	/**デストラクタ*/
	~Character();

	/**操作関数*/
	virtual void Control() = 0;
	/**描画関数*/
	virtual void Draw() = 0;

protected:
	/**
	 * 座標変換関数
	 * @param [in] localPos_	オブジェクトのローカル座標
	 * @param [in] angle_		オブジェクトの回転角度
	 */
	void Transform3D(const D3DXVECTOR3& localPos_, float angle_);

protected:
	Library&			m_rLibrary;
};

#endif // !CHARACTER_H