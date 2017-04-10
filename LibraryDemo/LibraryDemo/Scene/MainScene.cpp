/**
* @file		MainScene.cpp
* @breif	メインシーンのクラス実装
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
