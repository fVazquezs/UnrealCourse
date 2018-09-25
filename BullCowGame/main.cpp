#include <iostream>
#include <string>

using namespace std;

void printIntro();
void playGame();
void printGuess(string Guess);
string getGuess();
bool askToPlayAgain();

//the entry point of the application
int main() {
	do {
		printIntro();
		playGame();
	} while (askToPlayAgain());
	return 0;
}

void playGame() {
	string Guess = "";
	//loop for the number of turn asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 0; count < NUMBER_OF_TURNS; count++)
	{
		Guess = getGuess();
		printGuess(Guess);
	}
	return;
}

//introduce the game
void printIntro() {
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows!\n";
	cout << "Can you guess the " << WORD_LENGTH << " isogram that it's in my mind.\n\n";
	return;
}

//get the guess 
string getGuess() {

	//get the guess from the player
	string Guess;
	cout << "Give it a try: ";
	getline(cin, Guess);

	return Guess;
}

//print the guess back
void printGuess(string Guess) {
	cout << "This is your guess: " << Guess << endl << endl;
	return;
}

bool askToPlayAgain()
{
	cout << "Do you want to play again? [y/n]";
	string Response = "";
	getline(cin, Response);

	cout << "Is is y? "<< (Response[0] == 'y');
	return (Response[0] == 'y') || (Response[0] == 'Y');
}
