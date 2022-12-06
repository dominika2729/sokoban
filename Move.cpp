#include "Move.h"
#include <iostream>
#include "Box.cpp"
#include <tuple>

using namespace std;
class Move
{
	tuple<int, int, Box> boxStepBackCoordinates;

	pair<int, int> playerStepBackCoordinates;

public:
	Move(pair<int, int> playerStepBackCoordinates) {
		this->playerStepBackCoordinates = playerStepBackCoordinates;
	}



	tuple<int, int, Box> getBoxStepBackCoordinates() {
		return this->boxStepBackCoordinates;
	}

		
	void setBoxStepBackCoordinates(tuple<int, int, Box> boxStepBackCoordinates) {
		this->boxStepBackCoordinates = boxStepBackCoordinates;
	}

	pair<int, int> getPlayerStepBackCoordinates() {
		return this->playerStepBackCoordinates;
	}


};
