#include "def.h"

void Main()
{
	//ウィンドウサイズ等の初期設定
	Window::Resize(1280, 720);


	//以下はシーン追加時に編集
	App manager;
	manager.add<Title>(U"Title");
	manager.add<Game>(U"Game");

	//manager.init(U"Game");//デバッグ用、特定のシーンから開始

	while (System::Update())
	{
		if (!manager.update())
		{
			break;
		}
	}
}
