#include "def.h"

Title::Title(const InitData& init): IScene{ init }
{
}


void Title::update()
{

}
void Title::draw() const
{
	Scene::SetBackground(ColorF{ 0, 0.5, 0 });
}
