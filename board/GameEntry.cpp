#include <iostream>
#include "GameEntry.hpp"

using namespace std;

GameEntry::GameEntry(const string& n, int g=0, int sem, int s=0)
  : Student(name, gpa, semester), score(s) {} 

string GameEntry::getName() const { return name; }

string GameEntry::getSportName() const { return sportName; }

int GameEntry::getScore() const { return score; }

void comparePlayer(GameEntry player1, GameEntry player2)
{
  if (player1.score > player2.score && player1.getGPA() > player2.getGPA())
  {
    cout << player1.name << " is the better player." << endl;
  }
  else if (player1.score < player2.score && player1.getGPA() > player2.getGPA())
  {
    cout << player2.name << " is the better player." << endl;
  }
  else if (player1.score == player2.score)
  {
    cout << player1.name << " and " << player2.name << " is the better player." << endl;
  }
}

int GameEntry::updateScore(int diceScore, int boardNum)
{
  score = diceScore;
  return score;
}
