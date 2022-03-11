#ifndef GAMEENTRY_H
#define GAMEENRTY_H
#pragma once

#include <iostream>
#include "Student.hpp"

using namespace std;

class GameEntry: public Student{                               // a game score entry
public:
    GameEntry(const string& n="", int s=0);     // constructor
    string getName() const;                     // get player name
    string getSportName() const; 
    int getScore() const;                       // get score
    friend GameEntry comparePlayer(GameEntry player1, GameEntry player2);
    int updateScore(int diceScore, int boardNum);

private:
    mutable int diceScore;
    string sportName;
    // string name;                                // player's name
    mutable int score;                                  // player's score
    mutable int boardNum;

};
 
#endif