/**
 * @file	Singleton.h
 * @breif	�V���O���g�����g�p����ۂɌp������e�N���X�w�b�_
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