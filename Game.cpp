#include "Game.h"
#include <iostream>

#include "Player.cpp"
#include "Box.cpp"
#include <vector>

using namespace std;
class Game
{
	Player player;
	vector<vector<int>> playground;
    vector<Box> boxes;

public:
	Player getPlayer() {
		return this->player;
	}
	vector<vector<int>> getPlayground() {
		return this->playground;
	}

	vector<Box> getBoxes() {
		return this->boxes;
	}

};