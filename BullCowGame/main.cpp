/* This is the console executable that makes the use of the BullCow class
This acts as the view  in the MVC pattern, and is responsible for all
user interaction . For game logic see FBullCow class.
*/

#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int32;

void printIntro();
void playGame();
void printGuess(FText Guess);
FText getGuess();
bool askToPlayAgain();

FBullCowGame BCGame;//instantiate a new game 

//the entry point of the application
int main() {
	do {
		printIntro();
		playGame();
	} while (askToPlayAgain());
	return 0;
}

void playGame() {

	BCGame.reset();
	int32 MaxTries = BCGame.getMaxTries();

	//loop for the number of turn asking for guesses
	FText Guess = "";
	for (int32 count = 0; count < MaxTries; count++)//TODO change for to while loop bc of the  validation
	{
		Guess = getGuess();//TODO implement the guess validation, make loop checking valid
		
		//submit the valid guess 
		//print number of bulls and cows
		
		printGuess(Guess);
	}
	return;
	//TODO implement if the game is won 
	//TODO add game summary
}

//introduce the game
void printIntro() {
	constexpr int32 WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows!\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " isogram that it's in my mind.\n\n";
	return;
}

//get the guess 
FText getGuess() {
	int32 CurrentTry = BCGame.getCurrentTry();

	//get the guess from the player
	FText Guess;
	std::cout << "Give it your try number " << CurrentTry << ": ";
	std::getline(std::cin, Guess);

	return Guess;
}

//print the guess back
void printGuess(FText Guess) {
	std::cout << "This is your guess: " << Guess << std::endl << std::endl;
	return;
}

bool askToPlayAgain()
{
	std::cout << "Do you want to play again? [y/n]";
	FText Response = "";
	std::getline(std::cin, Response);

	std::cout << "Is is y? "<< (Response[0] == 'y');
	return (Response[0] == 'y') || (Response[0] == 'Y');
}