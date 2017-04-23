﻿#include "Logo.h"
#include <Library.h>

Logo::Logo(float width_, float height_, float posX_, float posY_, int texindex_, const char* pFilePath_) :
m_rLibrary(Library::Instance()),
m_posX(posX_),
m_posY(posY_),
m_width(width_),
m_height(height_),
m_texindex(texindex_),
m_pFilePath(pFilePath_)
{
	m_rLibrary.LoadTextureFile(m_texindex, m_pFilePath);
	m_rLibrary.SetTexSize(m_texindex, m_width, m_height);
}

Logo::~Logo()
{
}

void Logo::Draw()
{
	m_rLibrary.DrawCenter(m_texindex, m_posX, m_posY);
}
