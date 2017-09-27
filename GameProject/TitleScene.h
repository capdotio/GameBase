#pragma once
#include"BaseScene.h"

class TitleScene:public BaseScene
{
public:
	TitleScene();
	void Update(SceneManager& mng)override {};
	void Render(SceneManager& mng)const override {};
	~TitleScene();

private:

};
