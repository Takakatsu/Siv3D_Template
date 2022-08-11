#pragma once
#include "def.h"

//シーンとして扱われるクラスの定義を記述
class Title : public App::Scene
{
public:
	Title(const InitData& init);
	void update() override;
	void draw() const override;
};

class Game : public App::Scene
{
public:
	Game(const InitData& init);
	void update() override;
	void draw() const override;
};
