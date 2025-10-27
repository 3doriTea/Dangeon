#include <iostream>
#include "DiggingDungeon.h"
#include "DungeonViewer.h"

int main()
{
	std::string input{};
	while (input != "exit")
	{
		DiggingDungeon dungeon{ 43, 13 };

		std::cout << "¶¬...";

		dungeon.Generate();

		std::cout << "Š®—¹" << std::endl;

		DungeonViewer viewer{ dungeon };

		std::cout << "o—ˆã‚ª‚Á‚½‚à‚Ì‚ª‚±‚¿‚ç‚É‚È‚è‚Ü‚·B" << std::endl << std::endl;

		viewer.View();

		std::cin >> input;
	}

	return 0;
}