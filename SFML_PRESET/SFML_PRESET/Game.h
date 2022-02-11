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
	sf::Font m_font;
	sf::Text m_message;

public:
	Game();
	void	loadContent();
	void	run();
	void	update();
	void	draw();
};