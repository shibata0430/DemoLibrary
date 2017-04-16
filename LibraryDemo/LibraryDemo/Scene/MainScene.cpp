/**
* @file		MainScene.cpp
* @breif	���C���V�[���̃N���X����
* @author	shibata
*/

#include "MainScene.h"
#include "../Character/CharacterManager.h"
#include <Library\DebugSystem.h>
#include <Library\Define.h>
#include "../CameraController/CameraController.h"
#include <Library\Light.h>

MainScene::MainScene() : 
Scene(Scene::ID::MAIN_SCENE),
m_pCharacterManager(New CharacterManager),
m_pCameraController(&CameraController::Instace()),
m_pLight(New Light)
{
	MyAssert(m_pCharacterManager, "NULL�������Ă��܂�");
	MyAssert(m_pLight, "NULL�������Ă��܂�");
	m_pLight->Lighting();
}

MainScene::~MainScene()
{
	SafeDelete(m_pCharacterManager);
	SafeDelete(m_pLight);
}

Scene::ID MainScene::Control()
{
	m_pCameraController->Control();
	m_pCharacterManager->Control();

	return Scene::ID::MAIN_SCENE;
}

void MainScene::Draw()
{
	m_pCharacterManager->Draw();
}