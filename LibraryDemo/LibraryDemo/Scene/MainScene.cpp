/**
* @file		MainScene.cpp
* @breif	���C���V�[���̃N���X����
* @author	shibata
*/

#include "MainScene.h"

MainScene::MainScene() : 
Scene(Scene::ID::MAIN_SCENE)
{

}

MainScene::~MainScene()
{

}

Scene::ID MainScene::Control()
{
	return Scene::ID::MAIN_SCENE;
}

void MainScene::Draw()
{

}
