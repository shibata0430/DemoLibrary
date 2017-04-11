/**
 * @file	ResourceManager.h
 * @breif	���\�[�X�֌W�̊Ǘ������Ă���N���X�w�b�_
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