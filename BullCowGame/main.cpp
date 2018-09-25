#include <iostream>
#include <string>

using namespace std;

// the entry point
int main() {

	printIntro();

	for (int count = 0; count <= 5; count++)
	{
		getGuessAndPrint();
	}

	cout << endl;
	return 0;
}

void printIntro() {
	//introduce the game
	constexpr int WORD_LENGTH = 9;
	cout << "Welcome to Bulls and Cows, a fun word game!\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	return;
}

string getGuessAndPrint() {
	//get the guess from the player
	string Guess = "";
	cout << "Give it a try: ";
	getline(cin, Guess);

	//repeat the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return;
}