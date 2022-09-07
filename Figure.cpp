#include "Figure.h"

Figure::Figure()
{
	this->setPosition({ WND_WIDTH / (CELLS * 2.f), WND_HEIGHT / (CELLS * 2.f)});
}

void Figure::fitTextureToType()
{
	switch (type)
	{
	case 1:
	{
		texture.loadFromFile((color > 0) ? T_BPAWN : T_WPAWN);
	} break;
	case 2:
	{
		texture.loadFromFile((color > 0) ? T_BKNIGHT : T_WKNIGHT);
	} break;
	case 3:
	{
		texture.loadFromFile((color > 0) ? T_BBISHOP : T_WBISHOP);
	} break;
	case 4:
	{
		texture.loadFromFile((color > 0) ? T_BROOK : T_WROOK);
	} break;
	case 5:
	{
		texture.loadFromFile((color > 0) ? T_BQUEEN : T_WQUEEN);
	} break;
	case 6:
	{
		texture.loadFromFile((color > 0) ? T_BKING : T_WKING);
	} break;
	}
	texture.setSmooth(true);
	setTexture(texture);
	this->setScale(T_SCALE, T_SCALE);
	this->setOrigin({ getTexture()->getSize().x / 2.f, getTexture()->getSize().y / 2.f });
}