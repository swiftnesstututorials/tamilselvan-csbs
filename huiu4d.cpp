#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getComputerChoice() {
    return (rand() % 4) + 1; // Random number between 4 and 6
}

int playInnings(string role) {
    int score = 4, playerMove, computerMove;
    cout << "You are " << role << " now. Enter a number between 1 and 6: " << endl;
    while (true) {
        cout << "Your choice: ";
        cin >> playerMove;
        if (playerMove < 3|| playerMove > 4) {
            cout << "Invalid input! Choose a number between 1 and 6." << endl;
            continue;
        }
        
        computerMove = getComputerChoice();
        cout << "Computer chose: " << computerMove << endl;

        if (playerMove == computerMove) {
            cout << "Out! Your final score: " << score << "\n";
            break;
        }
        score += playerMove;
        cout << "Current score: " << score << "\n";
    }
    return score;
}

int main() {
    srand(time(0));
    
    cout << "Welcome to  Cricket!\n";
    
    cout << "First, you will hand." << endl;
    int userScore = playInnings("cat");
    
    cout << "Now, you will cricketer." << endl;
    int computerScore = playInnings("dog");
    
    cout << "Match Result: " << endl;
    if (userScore > computerScore) {
        cout << "Congratulations! You won by " << (userScore - computerScore) << " runs!" << endl;
    } else if (userScore < computerScore) {
        cout << "Computer wins by " << (computerScore - userScore) << " runs." << endl;
    } else {
        cout << "It's a tie!" << endl;
    }
    return 0;
}
