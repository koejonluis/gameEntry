#ifndef GAMEENTRY_H
#define GAMEENRTY_H
#pragma once

#include <iostream>
#include "Student.hpp"

using namespace std;

class GameEntry: public Student{                               // a game score entry
public:
    GameEntry(const string& n="", int g=0, int sem, int s=0);     // constructor
    string getName() const;                     // get player name
    string getSportName() const; 
    int getScore() const;                       // get score
    friend void comparePlayer(GameEntry player1, GameEntry player2);
    friend void operator<<(ostream& os, const GameEntry& ge);
    int updateScore(int diceScore, int boardNum);

private:
    mutable int diceScore;
    string sportName;
    // string name;                                // player's name
    mutable int score;                                  // player's score
    mutable int boardNum;

};
 
#endif