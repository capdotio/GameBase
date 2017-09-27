#include "SceneManager.h"
#include "iostream"

SceneManager::SceneManager()
{
	m_scene = nullptr;
}

void SceneManager::ChangeScene(SCENE scene) {

	if (m_scene == nullptr) {
		delete m_scene;
	}

	switch (scene)
	{
	case SceneManager::TITLE:

		break;
	case SceneManager::GAME:
		break;
	case SceneManager::RESULT:
		break;
	case SceneManager::CONFIG:
		break;
	default:
		break;
	}

}

void SceneManager::Update() {
	m_scene->Update();
}

void SceneManager::Render() {
	m_scene->Draw();
}