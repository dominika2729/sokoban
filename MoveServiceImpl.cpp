#include "MoveServiceImpl.h"
#include "Game.cpp"


class MoveServiceImpl :public MoveService
{
	Game game;
	

	bool isWallNext(int x, int y) {
		return this->game.getPlayground()[x][y] == 1;
	}

	Box findBoxByCoordinates(vector<Box> boxes, pair<int, int> playerCoordinates) {
		for (size_t i = 0; i < boxes.size(); i++)
		{
			if (boxes[i].getCurrentCoordinates() == playerCoordinates) {
				return boxes[i];
			}
		}

		return Box();
	}


	void updateBoard(Player player, pair<int, int> currentCoordinates, pair<int, int> lastStepCoordinates, pair<int, int> boxMovedCoordinates) {
		player.setCurrentCoordinates(currentCoordinates);
		player.decreaseMovesLeft();
		player.getMovesHistory()
			.push(Move(lastStepCoordinates));

		Box box = findBoxByCoordinates(game.getBoxes(), player.getCurrentCoordinates());

		if (box.getCurrentCoordinates() != make_pair(-1, -1) && !isWallNext(boxMovedCoordinates.first, boxMovedCoordinates.second)) {
			box.setY(boxMovedCoordinates.second);

		}
	}


public:

	void makeMove(char move) {
		Player player = this->game.getPlayer();
		switch (move)
		{
		case 'W': {
			if (!isWallNext(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second + 1)) {

				updateBoard(
					player,
					make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second + 1),
					make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second - 1),
					make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second + 2));

				/*player.setY(player.getCurrentCoordinates().second + 1);
				player.decreaseMovesLeft();
				player.getMovesHistory()
					.push(Move(player.getCurrentCoordinates(),
						make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second - 1)));

				Box box =  findBoxByCoordinates(game.getBoxes(), player.getCurrentCoordinates());
				if (box.getCurrentCoordinates() != make_pair(-1, -1) && !isWallNext(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second + 1)) {
					box.setY(box.getCurrentCoordinates().second + 1);
				}*/
			};
		}
		case 'A':
			if (!isWallNext(player.getCurrentCoordinates().first - 1, player.getCurrentCoordinates().second)) {
				updateBoard(
					player,
					make_pair(player.getCurrentCoordinates().first - 1, player.getCurrentCoordinates().second),
					make_pair(player.getCurrentCoordinates().first + 1, player.getCurrentCoordinates().second),
					make_pair(player.getCurrentCoordinates().first - 2, player.getCurrentCoordinates().second));

			};
		case 'S':
			if (!isWallNext(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second - 1)) {
				updateBoard(
					player,
					make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second - 1),
					make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second + 1),
					make_pair(player.getCurrentCoordinates().first, player.getCurrentCoordinates().second - 2));

			};
		case 'D':
			if (!isWallNext(player.getCurrentCoordinates().first + 1, player.getCurrentCoordinates().second)) {
				updateBoard(
					player,
					make_pair(player.getCurrentCoordinates().first + 1, player.getCurrentCoordinates().second),
					make_pair(player.getCurrentCoordinates().first - 1, player.getCurrentCoordinates().second),
					make_pair(player.getCurrentCoordinates().first + 2, player.getCurrentCoordinates().second));
			};
		default:
			break;
		}
	}

	void undo() {
		Player player = this->game.getPlayer();
		player.increaseMovesLeft();
		Move lastMove = player.getMovesHistory().top();
		player.setCurrentCoordinates(lastMove.getPlayerStepBackCoordinates());
		player.getMovesHistory().pop();
	}
};



