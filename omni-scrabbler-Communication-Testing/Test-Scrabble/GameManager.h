
#pragma once
#include<iostream>
#include"Comm.h"
#include"GUI.h"
#include"Agent.h"
using namespace std;

class GameManager
{
private:
//GameBoard GameBoard;
Comm* client;
GUI* gui; 
Agent* agent;
int Opponent;
bool Game;
bool turn;  // true is our turn , false is their turn 

string mode;

string MyRack;
string HumanRack;
AgentMove agentmove;
AgentMove hintmove;
vector <WordGUI> HumanMove;
string FbMessage;            // feedback message about the move
string Best;
vector<string> ToExchange;
int Score;
int OpponentScore;
int MoveType;
void ConvertStringToVector(string tiles);
char*ConvertMessageAI(int type); //convert gamestate object to a string containing the message
char*ConvertMessageHuman(int type);
string ConvertIntRackToString(int tiles[7]);
string ConvertVecRackToString(vector<string>);
string GetCorrespondigLetter(int number);
void InterpretMessage(char*message); 
vector<string>Split(string passed);
void ConvertStringToMove(vector<string>);  // for human mode

public:
GameManager();
int InitGame();
void PlayAI(bool &ended);
void PlayHuman();
~ GameManager();
};

