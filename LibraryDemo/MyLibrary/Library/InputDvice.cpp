﻿/**
 * @file	InputDevice.cpp
 * @breif	入力機器の初期化クラス実装
 * @author	shibata
 */

#include "InputDvice.h"
#include "Define.h"

InputDevice::InputDevice() :
m_pDinput(NULL),
m_pKeyDevice(NULL)
{

}

InputDevice::~InputDevice()
{

	SafeRelease(m_pKeyDevice);
	SafeRelease(m_pDinput);
}

bool InputDevice::InitInput()
{
	if (FAILED(DirectInput8Create(GetModuleHandle(NULL),
		DIRECTINPUT_VERSION, IID_IDirectInput8,
		(VOID**)&m_pDinput, NULL)))
	{
		MessageBox(0, "DirectInputオブジェクト生成に失敗しました。", NULL, MB_OK);
		return false;
	}
	return true;
}

bool InputDevice::InitInputKey(HWND hWnd_)
{
	if (FAILED(m_pDinput->CreateDevice(GUID_SysKeyboard,
		&m_pKeyDevice, NULL)))
	{
		MessageBox(0, "DirectInputデバイスの生成に失敗しました。", NULL, MB_OK);
		return false;
	}

	//	データフォーマット
	if (FAILED(m_pKeyDevice->SetDataFormat(&c_dfDIKeyboard)))
	{
		MessageBox(0, "データフォーマットの設定に失敗しました。", NULL, MB_OK);
		return false;
	}

	//	協調レベル
	if (FAILED(m_pKeyDevice->SetCooperativeLevel(
		hWnd_, DISCL_NONEXCLUSIVE | DISCL_FOREGROUND)))
	{
		MessageBox(0, "協調levelの設定に失敗しました。", NULL, MB_OK);
		return false;
	}

	// アクセス許可
	m_pKeyDevice->Acquire();
	return true;
}