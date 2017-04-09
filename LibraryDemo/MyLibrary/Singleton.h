/**
 * @file	Singleton.h
 * @breif	シングルトンを使用する際に継承する親クラスヘッダ
 * @author	shibata
 */

#ifndef SINGLETON_H
#define SINGLETON_H

#include "SearchMemoryLeak.h"
#include <memory>

template<class Type>
class Singleton
{
public:

	static void Create()
	{
		if (m_pSingleton == NULL)
		{
			m_pSingleton = New Type;
		}
	}

	static Type& Instace()
	{
		return type;
	}

	static void Delete()
	{
		if (m_pSingleton != NULL)
		{
			delete m_pSingleton;
			m_pSingleton = NULL;
		}
	}

private:
	static Type* m_pSingleton;

	Singleton();
	~Singleton();

private:
	Singleton(const Singleton&) = delete;
	Singleton& operator = (const Singleton&) = delete;
};

#endif // !SINGLETON_H