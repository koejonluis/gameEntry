#include <iostream>
#include "GameEntry.hpp"

using namespace std;

GameEntry::GameEntry(const string& n, int s)
  : Student(name), score(s) {}

string GameEntry::getName() const { return name; }

string GameEntry::getSportName() const { return sportName; }

int GameEntry::getScore() const { return score; }

GameEntry comparePlayer(GameEntry player1, GameEntry player2)
{
  GameEntry temp;

  if (player1.score > player2.score && player1.getGPA() > player2.getGPA())
  {
    temp.score = player1.score;
  }
  else if (player1.score < player2.score && player1.getGPA() > player2.getGPA())
  {
    temp.score = player2.score;
  }
  else if (player1.score == player2.score)
  {
    temp.score = player1.score;
  }

  return temp;
}

int GameEntry::updateScore(int diceScore, int boardNum)
{
  score = diceScore;
  return score;
}
