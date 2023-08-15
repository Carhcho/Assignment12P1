#include <iostream>
#include <ctime>
using namespace std;

int getUserChoice();
int getComputerChoice();
bool determineWinner(int, int);
void displayChoice(int);

const int ROCK = 1,
PAPER = 2,
SCISSORS = 3,
LIZARD = 4,
SPOCK = 5;

int main() {
	int userGuess,
		compGuess;

	userGuess = getUserChoice();
	compGuess = getComputerChoice();
	displayChoice(compGuess);
	determineWinner(userGuess, compGuess);

	system("pause");
	return 0;
}

int getUserChoice() {
	int choice;
	cout << "1 - Rock" << endl
		<< "2 - Paper" << endl
		<< "3 - Scissors" << endl
		<< "4 - Lizard" << endl
		<< "5 - Spock" << endl << endl
		<< "Enter your guess: ";
	cin >> choice;
	while ((choice < 1) || (choice > 5)) {
		cout << "choice must be between 1 and 5!" << endl << endl
			<< "Enter a valid guess: ";
		cin >> choice;
	}
	return choice;
}

int getComputerChoice() {
	unsigned seed = time(0);
	srand(seed);
	int choice = (rand() % (5)) + 1;
	return choice;
}

bool determineWinner(int user, int comp) {
	bool winner;
	while (user == comp) {
		winner = false;
		user = getUserChoice();
		comp = getComputerChoice();
		displayChoice(comp);
	}
	if (user != comp) {
		winner = true;
		// winning scenarios
		if ((user == SCISSORS) && (comp == PAPER)) {
			cout << "Scissors cut paper. You Win!" << endl << endl;
		}
		if ((user == PAPER) && (comp == ROCK)) {
			cout << "Paper covers rock. You Win!" << endl << endl;
		}
		if ((user == ROCK) && (comp == LIZARD)) {
			cout << "Rock crushes lizard. You Win!" << endl << endl;
		}
		if ((user == LIZARD) && (comp == SPOCK)) {
			cout << "Lizard poisons Spock. You Win!" << endl << endl;
		}
		if ((user == SPOCK) && (comp == SCISSORS)) {
			cout << "Spock melts scissors. You Win!" << endl << endl;
		}
		if ((user == SCISSORS) && (comp == LIZARD)) {
			cout << "Scissors decapitated lizard. You Win!" << endl << endl;
		}
		if ((user == LIZARD) && (comp == PAPER)) {
			cout << "Lizard eats paper. You Win!" << endl << endl;
		}
		if ((user == PAPER) && (comp == SPOCK)) {
			cout << "Paper disproves Spock. You Win!" << endl << endl;
		}
		if ((user == SPOCK) && (comp == ROCK)) {
			cout << "Spock vaporizes rock. You Win!" << endl << endl;
		}
		if ((user == ROCK) && (comp == SCISSORS)) {
			cout << "Rock breaks scissors. You Win!" << endl << endl;
		}

		// losing senarios
		if ((comp == SCISSORS) && (user == PAPER)) {
			cout << "Scissors cut paper. You Lose!" << endl << endl;
		}
		if ((comp == PAPER) && (user == ROCK)) {
			cout << "Paper covers rock. You Lose!" << endl << endl;
		}
		if ((comp == ROCK) && (user == LIZARD)) {
			cout << "Rock crushes lizard. You Lose!" << endl << endl;
		}
		if ((comp == LIZARD) && (user == SPOCK)) {
			cout << "Lizard poisons Spock. You Lose!" << endl << endl;
		}
		if ((comp == SPOCK) && (user == SCISSORS)) {
			cout << "Spock smashes scissors. You Lose!" << endl << endl;
		}
		if ((comp == SCISSORS) && (user == LIZARD)) {
			cout << "Scissors decapitated lizard. You Lose!" << endl << endl;
		}
		if ((comp == LIZARD) && (user == PAPER)) {
			cout << "Lizard eats paper. You Lose!" << endl << endl;
		}
		if ((comp == PAPER) && (user == SPOCK)) {
			cout << "Paper disproves Spock. You Lose!" << endl << endl;
		}
		if ((comp == SPOCK) && (user == ROCK)) {
			cout << "Spock vaporizes rock. You Lose!" << endl << endl;
		}
		if ((comp == ROCK) && (user == SCISSORS)) {
			cout << "Rock breaks scissors. You Lose!" << endl << endl;
		}
	}

	return winner;
}

void displayChoice(int compChoice) {

	cout << "Computer guess: " << compChoice << endl << endl;
	if (compChoice == 1) {
		cout << "The computer choice is Rock " << endl << endl;
	}
	else if (compChoice == 2) {
		cout << "The computer choice is Paper " << endl << endl;
	}
	else if (compChoice == 3) {
		cout << "The computer choice is Scissors " << endl << endl;
	}
	else if (compChoice == 4) {
		cout << "The computer choice is Lizard " << endl << endl;
	}
	else if (compChoice == 5) {
		cout << "The computer choice is Spock " << endl << endl;
	}

}
