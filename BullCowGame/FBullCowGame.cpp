#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() { reset(); }

int32 FBullCowGame::getMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::getNumberOfTries() const { return MyNumberOfTries; }
int32 FBullCowGame::getCurrentTry() const { return MyCurrentTry; }
int32 FBullCowGame::getHiddenWordLentgh() const { return MyHiddenWord.length(); }

void FBullCowGame::reset()
{
	MyCurrentTry = 1;
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "test";
	MyHiddenWord = HIDDEN_WORD;

	MyNumberOfTries = 1;
	return;	
}


bool FBullCowGame::isGameWon() const
{
	return false;
}

bool FBullCowGame::checkGuessValidity(FString) const
{
	return false;
}

//receive valid guess, increments turn and returns count
FBullCowCount FBullCowGame::SubmitGuess(FString Guess)
{
	//increment the return 
	MyCurrentTry++;

	//setup return variable 
	FBullCowCount BullCowCount;

	//loop trough  all letter in the gues
	for (int32 GuessChar = 0; GuessChar < getHiddenWordLentgh(); GuessChar++)
	{
		//compare letters  against the answer
		for (int32 HiddenWordChar = 0; HiddenWordChar < getHiddenWordLentgh(); HiddenWordChar++)
		{
			//if they match 
			if (MyHiddenWord[HiddenWordChar] == Guess[GuessChar])
			{
				//increment bull in the same place
				if (GuessChar == HiddenWordChar) {
					BullCowCount.Bulls++;
				}
				//increment cows if they r not
				else {
					BullCowCount.Cows++;
				}
			}
		}
	}
	return BullCowCount;
}
