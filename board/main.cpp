#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "GameEntry.hpp"
#include "Scores.hpp"
#include "Student.hpp"

using namespace std;

void createArray(int boardNum);
int negativeFunction(int score, int dice,int boardNum);
int positiveFunction(int score, int dice, int boardNum);
int getDice();

int main()
{   
    int totalNum, diceNum, temp, newNum, currentScore;
    int numOfPlayers = 3;
    int count1 = 1;
    int count2 = 1;
    int count3 = 1;
    int completed = 2;
    srand(time(0));
    cout << "Enter highest number of the board game: ";
    cin >> totalNum;

    // Create Reverse Array
    createArray(totalNum);

    GameEntry g1("Player 1", 0);
    GameEntry g2("Player 2", 0);
    GameEntry g3("Player 3", 0);
    // for (int i = 1; i < 11; i++) /*&& g1.getScore() + diceNum < 100*/
    while(completed < numOfPlayers){
        if (g1.getScore() <= totalNum || g2.getScore() <= totalNum || g3.getScore() <= totalNum)
        {
            if(g1.getScore() <= totalNum){
                //Player 1 
                cout << "\nRound " << count1 << endl;
                cout << g1.getName() << " score is: " << g1.getScore() << endl;
                diceNum = getDice();
                currentScore = g1.getScore();
                temp = diceNum + currentScore;
                temp = negativeFunction(temp, diceNum, totalNum);
                temp = positiveFunction(temp, diceNum, totalNum);
                g1.updateScore(temp, totalNum);
                cout << g1.getName() << " score is: " << g1.getScore() << endl;
                count1++;
            }
            else if (g2.getScore() <= totalNum) { 
                // Player 2
                cout << "\nRound " << count2 << endl;
                cout << g2.getName() << " score is: " << g2.getScore() << endl;
                diceNum = getDice();
                currentScore = g2.getScore();
                temp = diceNum + currentScore;
                temp = negativeFunction(temp, diceNum, totalNum);
                temp = positiveFunction(temp, diceNum, totalNum);
                g2.updateScore(temp, totalNum);
                cout << g2.getName() << " score is: " << g2.getScore() << endl;
                count2++;
            }
            else if (g3.getScore() <= totalNum){
                // Player 3
                cout << "\nRound " << count3 << endl;
                cout << g3.getName() << " score is: " << g3.getScore() << endl;
                diceNum = getDice();
                currentScore = g3.getScore();
                temp = diceNum + currentScore;
                temp = negativeFunction(temp, diceNum, totalNum);
                temp = positiveFunction(temp, diceNum, totalNum);
                g3.updateScore(temp, totalNum);
                cout << g3.getName() << " score is: " << g3.getScore() << endl;
                count3++;
            }
        }
        else{
            cout << "P1 won in round " << count1 << endl;
            cout << "P2 won in round " << count2 << endl;
            cout << "P3 won in round " << count3 << endl;
            completed++;
        }
    }
    return 0;
}



void createArray(int boardNum)
{
    int sqNum = round(sqrt(boardNum));

    int** M = new int*[sqNum];
    
    for (int i = 0; i < sqNum; i ++)
    {
        M[i] = new int[sqNum];
    }

    // Assigning values to board
    for (int i = 0; i < sqNum; i++)
    {
        for (int j = 0; j < sqNum; j++)
        {
            M[i][j] = boardNum;
            // cout << boardNum << endl;
            boardNum--;
        }
        // cout <<"\n";
    }
    for (int i = 0; i < sqNum; i++)
    {
        for (int j = 0; j < sqNum; j++)
        {
            cout << M[i][j] << " ";
        }
        cout <<"\n";
    }

    delete [] M;
}

int getDice()
{
    // srand(time(0));
    int randomNumber;
    randomNumber = (rand() % 6) + 1;
    cout << "You rolled a " << randomNumber << endl;
    return randomNumber;
}

int negativeFunction(int score, int dice, int boardNum)
{
    if (score < boardNum){
        int i, temp;
        bool primeNum = true;
        temp = score;
        if (dice == 6)
        {
            return score;
        }
        else {
            // 0 and 1 are not prime numbers
            if (score <= 5) {
                primeNum = false;
            }

            // loop to check if n is prime
            for (i = 2; i <= score/2; ++i) {
                if (score % i == 0) {
                    primeNum = false;
                    break;
                }
            }

            if (primeNum && score % 7 == 0){
                // cout << score << " is a prime number and divisible by 7\n";
                score = score - 8;
                if (score <= 0)
                {
                    score = 0;
                }
                cout << score << " is your new score\n";
            }
            else if(primeNum){
                // cout << score << " is a prime number\n";
                score = score -5;
                cout << score << " is your new score\n";
            }
            else if(score % 7 == 0 ){
                score = score - 3;
                // cout << score << " is divisble by 7\n";
                if (score <= 0){
                    score = 0;
                }
                cout << score << " is your new score\n";
            }
            else{
                cout << "\n";
            }
            
            // if (score != temp){
            //     return score;
            // }
            // else
            //     break;
            return score;
        }
    }
    else 
        return score;
}

int positiveFunction(int score, int dice, int boardNum)
{
    if (score < boardNum){
        int temp, i = 1,sum = 0;
        temp = score;
        // Perfect Number
        for (int i = 1; i < score; i++){
            if(score % i == 0)
                sum = sum + i;
        }

        
        if (sum == score){
            // cout << score << " is a perfect number\n";
            score = score + 15;
            cout << score << " is your new score\n"; 
        }
        else if(score % 10 == 0){
            // cout << score << " is divisble by 10\n";
            score = score + 2;
            cout << "\n" << score << " is your new score\n"; 
        }
        else
            cout << "\n";
        
    
        // if (score != temp){
        //     return score;
        // }
        // else
        //     break;
        return score;
    }
    else 
        return score;
}

                // cout << "\nRound " << count3 << endl;
                // cout << g3.getName() << " score is: " << g3.getScore() << endl;
                // diceNum = getDice();
                // currentScore = g3.getScore();
                // temp = diceNum + currentScore;
                // cout << "The number of diceNum is " << diceNum << "\n";
                // cout << "The number of currentScore is " << currentScore << "\n";
                // cout << "The number of temp is " << temp << "\n";
                // cout << g3.getName() << " score is: " << g3.getScore() << endl;
                // temp = negativeFunction(temp, diceNum);
                // cout << "The number of temp1 is " << temp << "\n";
                // temp = positiveFunction(temp);
                // cout << "The number of temp2 is " << temp << "\n";
                // g3.updateScore(temp);
                // cout << g3.getName() << " score is: " << g3.getScore() << endl;
                // count3++;