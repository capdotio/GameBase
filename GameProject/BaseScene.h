#pragma once

class SceneManager;

class BaseScene
{
public:
	virtual void Init() {};
	virtual void Update(SceneManager& mng) = 0;
	virtual void Render(SceneManager& mng) const = 0;
};