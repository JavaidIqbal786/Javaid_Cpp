#include <iostream>
#include <cstdlib>    //For rand() Function
#include <ctime>
using namespace std;

class Score {
    int score;

public:

    Score(int initialScore) : score(initialScore) {}
// Overloading Pre-increment and pre-decrement operator
    Score& operator++() {
        ++score;
        return *this;
    }

    Score& operator--() {
        --score;
        return *this;
    }
//// Overloading Post-increment and post-decrement operator
    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;

    Score operator--(int) {
        Score temp = *this;
        score--;
        return temp;
    }

    int getScore() const {
        return score;
    }


    bool isZero() const {
        return score <= 0;
    }
};

// GuessingGame class
class GuessingGame {
    int targetNumber;  // Randomly generated target number
    Score playerScore; // Player's score

public:

    GuessingGame() : playerScore(5) {
        srand(time(0)); 
        targetNumber = 1+ (rand() % 10);       // Generate a random number between 1 and 10
    }

    void play() {
        cout << "Virtual Guessing Game Starts!"<<endl;;
        cout << "The virtual player will guess a number between 1 and 10."<<endl;
        cout << "Score decreases for incorrect guesses and increases for correct ones."<<endl;

        int attempt = 0;
        while (!playerScore.isZero()) {
            attempt++;
            int guess = rand() % 10 + 1; // Random guess between 1 and 10

            cout << "Attempt " << attempt << ": Virtual player guesses " << guess << ". ";

            if (guess > targetNumber) {
                --playerScore;
                cout << "Too high! Score decreases. ";
            } else if (guess < targetNumber) {
                playerScore--;
                cout << "Too low! Score decreases. ";
            } else {
                ++playerScore;
                cout << "Correct! Score increases!\n";
                break;
            }

            cout << "Current score: " << playerScore.getScore() << endl;
        }

        // Game over message
        if (playerScore.isZero()) {
            cout << "Game Over! The virtual player failed to guess the correct number.\n";
        } else {
            cout << "The virtual player guessed the correct number: " << targetNumber << endl;
        }

        cout << "Final score: " << playerScore.getScore() << endl;
    }
};

int main() {
    GuessingGame game;
    game.play();
    return 0;
}
