/**
 * @file	Singleton.h
 * @breif	シングルトンを使用する際に継承する親クラスヘッダ
 * @author	shibata
 */

#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>

template<class Type>
class Singleton
{
public:

	static Type& Instace()
	{
		static Type type;
		return type;
	}

protected:
	Singleton();

private:
	Singleton(const shingleton&) = delete;
	Singleton& operator = (const singleton&) = delete;
};

#endif // !SINGLETON_H