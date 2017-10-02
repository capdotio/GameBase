#pragma once

class GameScene:public BaseScene
{
public:
	GameScene();
	void Update(SceneManager& mng)override {};
	void Render(SceneManager& mng)const override {};
	~GameScene();

private:

};