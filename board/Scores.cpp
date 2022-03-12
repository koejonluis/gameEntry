#include <iostream>
#include "Scores.hpp"

using namespace std;

Scores::Scores(int maxEnt) {                        // constructor
    maxEntries = maxEnt;                            // save the max size
    entries = new GameEntry[maxEntries];            // allocate array storage
    numEntries = 0;                                 // initially no elements
}

Scores::~Scores() {                                 // destructor
    delete[ ] entries;
}

void Scores::add(const GameEntry& e) { // add a game entry
    int newScore = e.getScore(); // score to add
    if (numEntries == maxEntries) { // the array is full
        if (newScore <= entries[maxEntries - 1].getScore())
            return; // not high enough - ignore
    }
    else numEntries++; // if not full, one more entry
    
    int i = numEntries - 2; // start with the next to last
    while ( i >= 0 && newScore > entries[i].getScore() ) {
        entries[i+1] = entries[i]; // shift right if smaller
        i--;
    }
    entries[i+1] = e; // put e in the empty spot
}

