#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
	FBullCowGame(); // my constructor

	int32 getMaxTries() const;
	int32 getNumberOfTries() const;
	int32 getCurrentTry() const;
	bool isGameWon() const;

	void reset(); //TODO meka more rich
	bool checkGuessValidity(FString);//TODO make more rich
	//provide a method for counting bulls and cows, and incrementing turn number

//ignore it for now focus above ^^^^^^^^^^
private:
	//constructor on the cpp file
	int32 MyCurrentTry;
	int32 MyMaxTries;
	int32 MyNumberOfTries;
};