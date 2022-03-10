# Customized Game Board 

## *Description*: 
This is a board game using a 2-dimensional array. Any number of players can play and each one will roll a 6-sided dice one after the other. Players score will be affected on which number that they landed on. 

## *Additional Description*:
## main.cpp:

### In this driver file, objects of GameEntry are declared and this is where the game is played between players. 
### void createArray(int boardNum)
Creates an array and lists them out on the terminal.

### getDice()
Rolls a 6-sided dice using a random number generator

### **int positiveFunction(int score)**
- This function will return a positive integer specifying a number of positions to move in ascending order. 
- It will increase overall score by 15 if a player lands on a perfect number.
- It will increase overall score by 2 if a player moves to a position that is divisible by 10.
- 
### **int negativeFunction(int score)**
- This function will return a positive integer specifying number of positions to movie in descending order. 
- It will decrease the overall score by 5 if a player lands on a prime number. Invalid for prime numbers less than or equal to 5.
- It will decrease the overall score by 3 if a player moves to a number which is divisible by 7.

### int perfectNumber(int num)
- Checks whether it is a perfect number

### primeNumber(int num)
- Checks whether it is a prime number

#### Negative function should not impact the player if the final position lands on a positive function.

### GameEntry.hpp 
In this header file, we are declaring GameEntry and it is a child class whereas Student would be the parent class. GameEntry has 2 variables, name and score. The functions getName() returns the name of the object and getScore() returns the score of the object. updateScore(int diceScore, int boardNum) takes in the board number and the current number of the dice and updates the score. It has private members which are diceScore, name, score and boardNum.

### GameEntry.cpp
In this implementation file, we are storing the member functions for the class GameEntry. We define all of the functions we created in the header file. 

### Scores.hpp

### Scores.cpp

### Student.hpp

### Student.cpp







## *Installation*: 
How to install the project. 

## *Usage*: 
How to use project after installation. 

## *Credits*: 
Jon Luis Koe [Github Profile](https://github.com/koejonluis)

