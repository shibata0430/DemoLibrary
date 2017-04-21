/**
* @file		MainScene.cpp
* @breif	メインシーンのクラス実装
* @author	shibata
*/

#include "MainScene.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>
#include "../ObjectManager/ObjectManager.h"
#include "../CameraController/CameraController.h"
#include <Library\Light.h>
#include <Library.h>

MainScene::MainScene() : 
Scene(Scene::ID::MAIN_SCENE),
m_pObjectManager(New ObjectManager),
m_pCameraController(&CameraController::Instance()),
m_pLight(New Light({0.0f, 1.5f, 1.5f}))
{
	MyAssert(m_pObjectManager, "NULLが入っています");
	MyAssert(m_pLight, "NULLが入っています");
	m_pLight->Lighting(0x44444444);
}

MainScene::~MainScene()
{
	SafeDelete(m_pObjectManager);
	SafeDelete(m_pLight);
	m_rLibrary.ReleaseAllXFile();		// メインシーンで使っているXファイルのメモリの開放
}

Scene::ID MainScene::Control()
{
	m_pCameraController->Control();
	m_pObjectManager->Control();

	return Scene::ID::MAIN_SCENE;
}

void MainScene::Draw()
{
	m_pObjectManager->Draw();
}