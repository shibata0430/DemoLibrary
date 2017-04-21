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
	Floor();
	~Floor();

	virtual void Draw();

private:
	D3DXVECTOR3 m_floorPos;
};

#endif // !FLOOR_H