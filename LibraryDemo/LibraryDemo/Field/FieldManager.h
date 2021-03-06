﻿/**
 * @file	FieldManager.h
 * @breif	フィールドを管理しているクラスヘッダ
 * @author	shibata
 */

#ifndef FIELDMANAGER_H
#define FIELDMANAGER_H

#include <vector>

class Field;

class FieldManager
{
public:
	/**コンストラクタ*/
	FieldManager();
	/**デストラクタ*/
	~FieldManager();

	/**描画関数*/
	void Drwa();

private:
	std::vector<Field*> m_pField;
};

#endif // !FIELDMANAGER_H