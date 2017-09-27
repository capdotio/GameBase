#pragma once

class BaseScene
{
public:
	virtual void Init() {};
	virtual void Update() = 0;
	virtual void Draw() = 0;
};