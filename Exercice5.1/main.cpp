#include <iostream>
#include <cstdlib>

enum class GameState {
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(int& mystery) {
	mystery = rand();
}

void FindMystery() {
	int userChoice;
	std::cout << "Enter an integer between 0 and 100\n";
	std::cin >> userChoice;
}

void turnNumber() {
	int turn;

}

int main() {
	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber;

	while (gameState != GameState::EXIT);
	{
		switch (gameState) {
		case GameState::INIT:
			mysteryNumber = (rand() % 100) + 1;
			gameState = GameState::PLAY;
			break;

		case GameState::PLAY:
			FindMystery();
			if (userChoice == mysteryNumber) {
				GameState::END;
			}
			break;

		case GameState::END:
			turnNumber();
			turn = userChoice;
			std::cout << "Number of turn : " << turn << "\n";
			std::cout << "Mystery number was : " << mysteryNumber << "\n";
			break;

		case GameState::EXIT:
			break;
		}
	}
	
	system("pause");
	return EXIT_SUCCESS;
}