#pragma once
#include <string>

using FString = std::string;
using int32 = int;

//two integer initialize two zero
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame {
public:
	FBullCowGame(); // my constructor

	int32 getMaxTries() const;
	int32 getNumberOfTries() const;
	int32 getCurrentTry() const;
	int32 getHiddenWordLentgh() const;
	bool isGameWon() const;

	void reset(); //TODO meka more rich
	bool checkGuessValidity(FString) const;//TODO make more rich
	FBullCowCount SubmitGuess(FString);

//ignore it for now focus above ^^^^^^^^^^
private:
	//constructor on the cpp file
	int32 MyCurrentTry;
	int32 MyMaxTries;
	int32 MyNumberOfTries;
	FString MyHiddenWord;
};