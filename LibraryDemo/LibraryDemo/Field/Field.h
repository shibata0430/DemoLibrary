/**
 * @file	Field.h
 * @breif	フィールドに関係するクラスの親クラスヘッダ
 * @author	shibata
 */

#ifndef FIELD_H
#define FIELD_H

class Library;

class Field
{
public:
	Field();
	~Field();

	virtual void Control();
	virtual void Draw() = 0;

protected:
	Library& m_rLibrary;
};

#endif // !FIELD_H