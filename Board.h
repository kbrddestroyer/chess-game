#pragma once
#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <vector>

#include "Figure.h"
#include "point.h"
#include "resource.h"

class Board
{
private:
	struct board {
		sf::RectangleShape	shape;
		sf::Vector2f		rootPoint;
	} S_Board[CELLS * CELLS];

	const sf::Color blackCell	= sf::Color(110, 63, 24);
	const sf::Color whiteCell	= sf::Color(240, 195, 128);
	const float		width		= WND_WIDTH / CELLS;
	const float		height		= WND_HEIGHT / CELLS;

	float				scale;
	unsigned int		activeChessColor = 0;
	unsigned int		playerColor = 0;
	signed int			selectedChessId = -1;
	Figure				p_figures[16];
	Figure				e_figures[16];
public:
	Board(unsigned int CELL_COUNT = CELLS);

	void Click(sf::RenderWindow&);
	void Update(sf::RenderWindow&);
};
