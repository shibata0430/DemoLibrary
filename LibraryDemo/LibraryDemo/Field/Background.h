/**
 * @file	Background.h
 * @breif	”wŒi‚ÌƒNƒ‰ƒXƒwƒbƒ_
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