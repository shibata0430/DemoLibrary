/**
 * @file	Field.h
 * @breif	フィールドに関係するクラスの親クラスヘッダ
 * @author	shibata
 */

#ifndef FIELD_H
#define FIELD_H

#include <d3dx9.h>

class Library;

class Field
{
public:
	/**コンストラクタ*/
	Field();
	/**デストラクタ*/
	~Field();

	/**描画関数*/
	virtual void Draw() = 0;

protected:
	Library& m_rLibrary;
};

#endif // !FIELD_H