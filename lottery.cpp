#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    const int ARR_SIZE = 5;
    int winningDigits[ARR_SIZE];
    int player[ARR_SIZE];
    int winningPlayer[] = {-1, -1, -1, -1, -1};
    int matchCount = 0;
    srand(time(0));
    
    // Generates five random winning numbers between 0 and 9 inclusive
    for (int i = 0; i < ARR_SIZE; i++) {
        winningDigits[i] = rand() % 10;
    }
    
    // Asks player for five digits between 0 and 9 inclusive
    for (int i = 0; i < ARR_SIZE; i++) {
        std::cout << "Enter a number between 0 and 9 inclusive: ";
        std::cin >> player[i];
        
    }
    
    // Counts winning numbers, stores them in an array
    for (int i = 0; i < ARR_SIZE; i++) {
        if ( winningDigits[i] == player[i] ) {
            matchCount++;
            winningPlayer[i] = winningDigits[i];
        }
    }
    
    std::cout << "\x1B[2J\x1B[H" << std::flush;
    
    std::cout << "Your digits are:  "; 
    for (int i = 0; i < ARR_SIZE-1; i++) {
        std::cout << player[i] << ", ";
    }
    std::cout << player[4];
    
    if ( matchCount > 0 ) {
        std::cout << "\nYou have " << matchCount << " matching numbers! " << "Your matching numbers are: " << std::endl;
        for ( int i = 0; i < ARR_SIZE-1; i++) {
            if ( winningPlayer[i] != -1 ) {
                std::cout << winningPlayer[i] << ", ";
            }
        }
        if ( winningPlayer[4] != -1 ) {
                std::cout << winningPlayer[4];
        }
    } else {
        std::cout << "\nYou have " << matchCount << " matching numbers! " << "Try again! " << std::endl;
    }
    
    std::cout << "\nWinning digits were:  "; 
    for (int i = 0; i < ARR_SIZE -1 ; i++) {
        std::cout << winningDigits[i] << ", ";
    }
    std::cout << winningDigits[4];

    return 0;
}