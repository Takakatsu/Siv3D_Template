#include "def.h"

Game::Game(const InitData& init) : IScene{ init }
{
}


void Game::update()
{

}
void Game::draw() const
{
	Scene::SetBackground(ColorF{ 0.5, 0, 0 });
}
