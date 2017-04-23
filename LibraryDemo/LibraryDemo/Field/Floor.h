/**
 * @file	Floor.h
 * @breif	床のクラスヘッダ
 * @author	shibata
 */

#ifndef FLOOR_H
#define FLOOR_H

#include "Field.h"
#include <d3dx9.h>

class Floor : public Field
{
public:
	/**コンストラクタ*/
	Floor();
	/**デストラクタ*/
	virtual ~Floor();
	/**描画関数*/
	virtual void Draw();

private:
	D3DXVECTOR3 m_floorPos;	// 床のローカル座標
};

#endif // !FLOOR_H