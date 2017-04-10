/**
 * @file	Define.h
 * @breif	メモリリークの場所を教えてくれる定義ヘッダ
 * @author	shibata
 */

#ifndef DEFINE_H
#define DEFINE_H

template<typename Type>
void SafeRelease(Type* type_)
{
	if (type_ != NULL)
	{
		type_->Release();
		type_ = NULL;
	}
}

template<typename Type>
void SafeDelete(Type* type_)
{
	if (type_ != NULL)
	{
		delete type_;
		type_ = NULL;
	}
}

template<typename Type>
void SafeArrayDelete(Type* type_)
{
	if (type_ != NULL)
	{
		delete[] type_;
		type_ = NULL;
	}
}

#endif // !DEFINE_H