#ifndef SCORES_H
#define SCORES_H
#pragma once 

#include "GameEntry.hpp"

using namespace std;

class Scores {                                  // stores game high scores
public:
    Scores(int maxEnt = 10);                    // constructor
    ~Scores();                                  // destructor
    void add(const GameEntry& e);               // add a game entry         
    int positiveFunction(int score);
    int negativeFunction(int score);
    GameEntry remove(int i);                     // remove the ith entry
        // throw(IndexOutOfBounds);
              
private:                    
    int maxEntries;                             // maximum number of entries
    int numEntries;                             // actual number of entries
    GameEntry* entries;                         // array of game entries
};

#endif