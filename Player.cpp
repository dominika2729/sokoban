#include "Player.h"
#include <iostream>
#include <stack>
#include "Move.cpp"

using namespace std;
class Player
{
	pair<int, int> currentCoordinates;
	stack<Move> movesHistory;
	int movesLeft;

public:
	pair<int, int> getCurrentCoordinates() {
		return this->currentCoordinates;
	};
	stack<Move> getMovesHistory() {
		return this->movesHistory;
	}

	int getMovesLeft() {
		return this->movesLeft;
	}

	int decreaseMovesLeft() {
		return this->movesLeft--;
	}

	int increaseMovesLeft() {
		return this->movesLeft++;
	}

	void setCurrentCoordinates(pair<int, int> coordinates) {
		this->currentCoordinates = coordinates;
	}
};
