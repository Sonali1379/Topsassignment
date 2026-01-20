#include<iostream>
using namespace std;
int main(){
    int number, guess, attempts = 0;
    const int MAX_ATTEMPTS = 5;

    
    number = 78; 
    cout << "Welcome to the Number Guessing Game!";
    cout << "You have " << MAX_ATTEMPTS << " attempts to guess the correct number.";

    while(attempts < MAX_ATTEMPTS){
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess < number){
            cout << "Too low! Try again.";
        }
        else if(guess > number){
            cout << "Too high! Try again.";
        }
        else{
            cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts.";
            break;
        }
    }

    if(attempts == MAX_ATTEMPTS && guess != number){
        cout << "Sorry, you've used all your attempts. The correct number was " << number << ".";
    }

    return 0;
  
    
}