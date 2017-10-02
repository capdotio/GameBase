#pragma once
#include"BaseScene.h"

class ConfigScene:public BaseScene
{
public:
	ConfigScene();
	void Update(SceneManager& mng)override {};
	void Render(SceneManager& mng)const override {};
	~ConfigScene();

private:

};