/**
 * @file	Define.h
 * @breif	メモリリークの場所を教えてくれる定義ヘッダ
 * @author	shibata
 */

#ifndef DEFINE_H
#define DEFINE_H


/// メモリを動的に確保するときに使うnewは必ずNewの方を使ってください
#ifdef _DEBUG
#include <crtdbg.h>
#define New new(_NORMAL_BLOCK, __FILE__, __LINE__)
#else
#define New new
#endif

#ifdef _DEBUG    // NDEBUG定義時(RELESEコンパイル時)は何もしない.
#define assert(x)  \
do\
{\
	if (!(x))\
	{\
		printf("Assertion failed: %s, file %s, line %d\n", #x, __FILE__, __LINE__);\
		exit(1);\
	}\
} while (0)
#else            // NDEBUG未定儀時(DEBUGコンパイル時)は条件をチェック.
#define assert(x)
#endif

#endif // !DEFINE_H