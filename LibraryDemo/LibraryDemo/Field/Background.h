/**
 * @file	Background.h
 * @breif	�w�i�̃N���X�w�b�_
 * @author	shibata
 */

#ifndef BACKGROUND_H
#define BACKGROUND_H

#include "Field.h"

class Background : public Field
{
public:
	Background();
	~Background();

	virtual void Control();
	virtual void Draw();
};

#endif // !BACKGROUND_H