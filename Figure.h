#pragma once
#include <SFML/Graphics.hpp>
#include <Windows.h>

#include "resource.h"

class Figure : public sf::Sprite
{
private:
	sf::Texture		texture;
	sf::Vector2f	position;
	unsigned int	type;
	bool			color;
public:
	bool			alive = true;

	Figure();
	void setChessColor(bool color) { this->color = color; }
	bool getChessColor() { return color; }
	void setChessType(unsigned int type) { this->type = type; }
	unsigned int getChessType() { return type; }

	void fitTextureToType();
};

