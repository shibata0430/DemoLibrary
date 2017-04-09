/**
* @file		Scene.cpp
* @breif	各シーンの親クラス実装
* @author	shibata
*/

#include "Scene.h"
#include <Library.h>

Scene::Scene(Scene::ID sceneID_) :
m_rLibrary(Library::Instace())
{

}

Scene::~Scene()
{

}