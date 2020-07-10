#ifndef GAME_STATE_HPP
#define GAME_STATE_HPP

// Header file for the game state manager

#include "Game.hpp"

class GameState {
public:

	Game* game;

	//Why are these set to 0?
	//Apparently it is to make sure they are inherited, and are themselves abstract.
	//huh
	virtual void draw(const float dt) = 0;
	virtual void update(const float dt) = 0;
	virtual void handleInput() = 0;




};


#endif
