/**
 * @file	Character.h
 * @breif	キャラクターの親クラスヘッダ
 * @author	shibata
 */

#ifndef CHARACTER_H
#define CHARACTER_H

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

private:
	Library& m_rLibrary;
};

#endif // !CHARACTER_H