#include <SFML/Graphics.hpp>
#include <Circle.hpp>
#include <Game.hpp>

int main()
{
    a::Game game(1000, 600, "Game");
    game.Setup(1);
    game.LifeCycle();

    return 0;
}