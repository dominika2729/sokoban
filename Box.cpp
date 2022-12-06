#include "Box.h"
#include <iostream>

using namespace std;
class Box
{
	pair<int, int> currentCoordinates = make_pair(-1, -1);
	bool isInPlace;
	pair<int, int> neededCoordinates;

public:
	pair<int, int> getCurrentCoordinates() {
	
		return this->currentCoordinates;
	};


	void setX(int x) {
		this->currentCoordinates.first = x;
	}

	void setY(int y) {
		this->currentCoordinates.first = y;
	}

};