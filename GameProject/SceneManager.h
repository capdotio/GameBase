#pragma once
#include"BaseScene.h"
#include<memory>

class SceneManager
{
public:
	void Render() {
		if (scn) {
			scn->Render(*this);
		}
	}

	void Update() {
		if (scn) {
			scn->Update(*this);
		}
	}

	void ChangeScene(std::shared_ptr<BaseScene> scene) {
		scn = scene;
	}

private:
	std::shared_ptr<BaseScene> scn;
};