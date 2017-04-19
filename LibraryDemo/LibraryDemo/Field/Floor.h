/**
 * @file	Floor.h
 * @breif	床のクラスヘッダ
 * @author	shibata
 */

#ifndef FLOOR_H
#define FLOOR_H

#include "Field.h"

class Floor : public Field
{
public:
	Floor();
	~Floor();

	virtual void Control();
	virtual void Draw();
};

#endif // !FLOOR_H