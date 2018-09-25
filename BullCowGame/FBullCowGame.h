#pragma once
class FBullCowGame {
public:
	void reset(); //TODO meka more rich
	int getMaxTries();
	int getNumberOfTries();
	int getCurrentTry();
	bool isGameWon();
	bool checkGuessValidity(string);//TODO make more rich

//ignore it for now focus above ^^^^^^^^^^
private:
	int MyCurrentTry;
	int MyMaxTries;
};