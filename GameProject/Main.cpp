
#include <Siv3D.hpp>
#include "SceneManager.h"
#include "TitleScene.h"

void Main()
{
	SceneManager mng;
	mng.ChangeScene(std::shared_ptr<BaseScene>(new TitleScene()));

	while (System::Update())
	{
		mng.Update();
		mng.Render();
	}
}
