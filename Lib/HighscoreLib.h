#ifndef HIGHSCORE
#define HIGHSCORE



#include <string>

#include <iostream>

using namespace std;

struct PlayerReg
{
	string PlayerName;
	int PlayerScore;
};



void InitPlayerReg(PlayerReg  playerReg[], int  playerRegLenght, string playerName, int  playerScore);

void UpdateValues(PlayerReg  playerReg[], int  playerRegLenght, int newValue, string newPlayer);

void PrintHighScores(PlayerReg  playerReg[], int  playerRegLenght);

#endif