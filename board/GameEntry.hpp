#ifndef GAMEENTRY_H
#define GAMEENRTY_H
#pragma once

using namespace std;

class GameEntry {                               // a game score entry
public:
    GameEntry(const string& n="", int s=0);     // constructor
    string getName() const;                     // get player name
    int getScore() const;                       // get score
    int updateScore(int diceScore, int boardNum);

private:
    mutable int diceScore;
    string name;                                // player's name
    mutable int score;                                  // player's score
    mutable int boardNum;

};

#endif