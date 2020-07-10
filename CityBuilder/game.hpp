#ifndef GAME_HPP
#define GAME_HPP

//The header for the game class

// so it seems like even tho game state is abstract
// we can inherit its functions through the reference

#include <stack>

#include <SFML/Graphics.hpp>

class GameState;

class Game {
public:


    std::stack<GameState*> states;

    sf::RenderWindow window;

    void pushState(GameState* state);
    void popState();
    void changeState(GameState* state);

    GameState* peekState();

    void gameLoop();

    Game();
    ~Game();
};

#endif