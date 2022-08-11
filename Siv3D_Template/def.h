#pragma once

//各種include、構造体を記述
#include<Siv3D.hpp> // OpenSiv3D v0.6.5

using App = SceneManager<String>;

//グローバル変数
struct GameData
{
	double Vol_BGM;
	double Vol_SE;
};

#include "func.h"
#include "class.h"
