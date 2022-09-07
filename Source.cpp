// main.cpp
#include <SFML/Graphics.hpp>
#include <Windows.h>

#include "Board.h"
#include "Figure.h"
#include "resource.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	sf::RenderWindow window(sf::VideoMode(WND_WIDTH, WND_HEIGHT), WND_CAPTION);
	window.setFramerateLimit(WND_FRAMERATE);

	sf::Event event;
	Board board;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) window.close();
			if (event.type == sf::Event::KeyPressed)
			{
				// ѕолучаем нажатую клавишу - выполн€ем соответствующее действие
				if (event.key.code == sf::Keyboard::Escape) window.close();
			}
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.key.code == sf::Mouse::Left) board.Click(window);
			}
		}

		// ¬ыполн€ем необходимые действи€ по отрисовке
		window.clear();
		board.Update(window);
		window.display();
	}

	return 0;
}