#pragma once

class Dungeon;

class DungeonViewer
{
public:
	DungeonViewer(const Dungeon& _dungeon);
	~DungeonViewer();

	void View();

private:
	const Dungeon& dungeon_;
};
