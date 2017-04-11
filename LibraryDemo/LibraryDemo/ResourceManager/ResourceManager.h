/**
 * @file	ResourceManager.h
 * @breif	リソース関係の管理をしているクラスヘッダ
 * @author	shibata
 */

#ifndef RESOURCEMANAGER_H
#define RESOURCEMANAGER_H

class Library;

class ResourceManager
{
public:
	ResourceManager();
	~ResourceManager();

private:
	Library& m_rLibrary;
};

#endif // !RESOURCEMANAGER_H