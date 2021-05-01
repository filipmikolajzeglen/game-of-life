#pragma once

#include <vector>
#include "Cell.h"

class GameOfLife {
public:

	template<typename T = char, typename U = char>
	GameOfLife(T alive, U dead, int size);

		std::vector<std::vector<Cell>> boardPtr;
		int size;

		template<typename T>
		static T alive;
		template<typename U>
		static U dead;

		void printBoard();
		void createBoard();
		void processBoard();
		void syncStateOfCellBoards();
		int getAmmountOfLiveSiblings(int y, int x);
		int determineIfDeadOrAlife(int amountOfLiveSiblings, bool initialyAliveOrDead);
		int checkInitialyAlive(int amountOfLiveSiblings);
		int checkInitialyDead(int amountOfLiveSiblings);
};