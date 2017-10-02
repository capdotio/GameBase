#pragma once
#include"BaseScene.h"

class ResultScene: public BaseScene
{
public:
	ResultScene();
	void Update(SceneManager& mng)override {};
	void Render(SceneManager& mng)const override {};
	~ResultScene();

private:
	
};