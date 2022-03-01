#pragma once

#include "SFML/Graphics.hpp" 
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Globals.h"

class Game
{
	sf::RenderWindow window;

public:
	sf::Font font;

public:
	Game(); 
	// Basics //
	void	loadContent();
	void	run();
	void	update();
	void	draw();
};