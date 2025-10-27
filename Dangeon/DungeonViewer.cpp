#include "DungeonViewer.h"
#include <iostream>
#include "Dungeon.h"

DungeonViewer::DungeonViewer(const Dungeon& _dungeon) :
	dungeon_{ _dungeon }
{
}

DungeonViewer::~DungeonViewer()
{
}

void DungeonViewer::View()
{
	for (int y = 0; y < dungeon_.GetHeight(); y++)
	{
		for (int x = 0; x < dungeon_.GetWidth(); x++)
		{
			switch (dungeon_.GetTile(x, y))
			{
			case Dungeon::TileType::Wall:
				std::cout << "#";
				break;
			case Dungeon::TileType::None:
			default:
				std::cout << " ";
				break;
			}
		}
		std::cout << std::endl;
	}
}
