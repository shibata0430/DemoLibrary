﻿/**
 * @file	Logo.h
 * @breif	色んなロゴの表示をするクラスヘッダ
 * @author	shibata
 */

#ifndef LOGO_H
#define LOGO_H

class Library;

class Logo
{
public:
	/**
	 * 色んなロゴを描画するクラスのコンストラクタ
	 * @param [in] width_		ロゴの描画時の幅
	 * @param [in] height_		ロゴの描画時の高さ
	 * @param [in] posX_		ロゴの表示するX座標
	 * @param [in] posY_		ロゴの表示するY座標
	 * @param [in] texindex_	ロゴのID番号
	 * @param [in] pFilePath_	読み込むロゴのファイルパス
	 */
	Logo(float width_, float height_, float posX_, float posY_,int texindex_, const char* pFilePath_);
	/**デストラクタ*/
	~Logo(); 

	/**描画関数*/
	void Draw();

private:
	Library&	m_rLibrary;
	float		m_width;		// ロゴの描画時の幅を格納
	float		m_height;		// ロゴの描画時の高さを格納
	float		m_posX;			// ロゴの表示するX座標を格納
	float		m_posY;			// ロゴの表示するY座標を格納
	int			m_texindex;		// ロゴのID番号を格納
	const char* m_pFilePath;	// 読み込むロゴのファイルパスを格納
};

#endif // !LOGO_H