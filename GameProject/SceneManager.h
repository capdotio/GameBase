#pragma once
#include"BaseScene.h"

class SceneManager
{
public:
	enum SCENE {
		TITLE,
		GAME,
		RESULT,
		CONFIG
	};
	static void ChangeScene(SCENE scene);
	static void Update();
	static void Render();

	SceneManager();
private:
	static BaseScene* m_scene;
};