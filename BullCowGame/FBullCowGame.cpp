#include "FBullCowGame.h"

using int32 = int32;

FBullCowGame::FBullCowGame() { reset(); }

int32 FBullCowGame::getMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::getNumberOfTries() const { return MyNumberOfTries; }
int32 FBullCowGame::getCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::reset()
{
	MyCurrentTry = 1;
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	MyNumberOfTries = 0;
	return;	
}


bool FBullCowGame::isGameWon() const
{
	return false;
}

bool FBullCowGame::checkGuessValidity(FString)
{
	return false;
}
