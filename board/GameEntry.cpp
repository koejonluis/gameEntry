#include <iostream>
#include "GameEntry.hpp"

using namespace std;

GameEntry::GameEntry(const string& n, int s)
  : name(n), score(s) {}

string GameEntry::getName() const { return name; }

int GameEntry::getScore() const { return score; }

int GameEntry::updateScore(int diceScore, int boardNum)
{
  // if (diceScore == score)
  // {
  //   return score;
  // }
  // else
  //   score = score + diceScore;
  //   return score;
  score = diceScore;
  return score;
}
