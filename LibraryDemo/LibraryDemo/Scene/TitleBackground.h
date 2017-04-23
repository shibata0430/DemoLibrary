/**
 * @file	TitleBackground.h
 * @breif	ƒ^ƒCƒgƒ‹‚Ì”wŒi•`‰æƒNƒ‰ƒXƒwƒbƒ_
 * @author	shibata
 */

#ifndef TITLEBACKGROUND_H
#define TITLEBACKGROUND_H

class Library;

class TitleBackground
{
public:
	TitleBackground();
	~TitleBackground();

	void Draw();

private:
	Library&	m_rLibrary;
	float		m_width;		// ”wŒi‚Ì•`‰æ‚Ì•
	float		m_height;		// ”wŒi‚Ì•`‰æ‚Ì‚‚³
	float		m_posX;			// ”wŒi‚ÌXÀ•W
	float		m_posY;			// ”wŒi‚ÌYÀ•W
};

#endif // !TITLEBACKGROUND_H