/**
* @file		Field.cpp
* @breif	フィールドに関係するクラスの親クラス実装
* @author	shibata
*/

#include "Field.h"
#include <Library.h>

Field::Field() : 
m_rLibrary(Library::Instace())
{
}

Field::~Field()
{
}

void Field::Control()
{
}
