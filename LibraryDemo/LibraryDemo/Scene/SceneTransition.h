/**
 * @file	SceneTransition.h
 * @breif	シーンを遷移するクラスヘッダ
 * @author	shibata
 */

#ifndef SCENETRANSITION_H
#define SCENETRANSITION_H

class SceneTransition
{
public:
	SceneTransition();
	~SceneTransition();

	bool Control();
	void Render();

private:
	bool m_isControlEnd;
};

#endif // !SCENETRANSITION_H