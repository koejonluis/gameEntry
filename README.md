# Customized Game Board 

## *Description*: 
This is a board game using a 2-dimensional array. Any number of players can play and each one will roll a 6-sided dice one after the other. Players score will be affected on which number that they landed on. 

## *Additional Description*:
## `main.cpp`:

### In this driver file, objects of GameEntry are declared and this is where the game is played between players. 
### `void createArray(int boardNum)`
Creates an array and lists them out on the terminal.

### `getDice()`
Rolls a 6-sided dice using a random number generator

### **`int positiveFunction(int score)`**
- This function will return a positive integer specifying a number of positions to move in ascending order. 
- It will increase overall score by 15 if a player lands on a perfect number.
- It will increase overall score by 2 if a player moves to a position that is divisible by 10.
- 
### **`int negativeFunction(int score)`**
- This function will return a positive integer specifying number of positions to movie in descending order. 
- It will decrease the overall score by 5 if a player lands on a prime number. Invalid for prime numbers less than or equal to 5.
- It will decrease the overall score by 3 if a player moves to a number which is divisible by 7.

### **`int perfectNumber(int num)`**
- Checks whether it is a perfect number

### **`primeNumber(int num)`**
- Checks whether it is a prime number

#### Negative function should not impact the player if the final position lands on a positive function.

### `GameEntry.hpp `
In this header file, we are declaring GameEntry and it is a child class whereas Student would be the parent class. This class takes in the name and the score of the players and updates the score of players after each turn.

### `GameEntry.cpp`
In this implementation file, we are defining the constuctor & destructor and setter & getter functions for the class `GameEntry`. In `void comparePlayer()` we are taking 2 objects of GameEntry and comparing them to see which has the highest GPA. 

### `Scores.hpp`
In this header file, we declare Scores. This class is useful for storing players that have finished going through the board game and placing them into an array.

### `Scores.cpp`
In this implementation file, we are defining the constuctor & destructor and setter & getter functions for the class `Scores`. 

### `Student.hpp`
In this header file, it is a parent class. It has member variables, _name_, _gpa_ and _semester_. We use this to create objects that we can use in the board game.

### `Student.cpp`
In this implementation file, we are defining the constuctor & destructor and setter & getter functions for the class `Student`. 

## *Usage*: 
1. Open up Visual Studio Code.
2. Pull the code from Github.
3. Compile `main.cpp`, `Student.cpp`, `Scores.cpp`, `GameEntry.cpp` in the terminal
4. Run the execution file.
5. Input how many players are playing (For now, default is 3)
6. Input the value for the board number.
7. Watch the game play out.

## *Credits*: 
Jon Luis Koe [Github Profile](https://github.com/koejonluis)

