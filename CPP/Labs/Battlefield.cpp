#include <iostream>
#include <cstdlib>
#include <ctime>

class Battleship
{
    private:
    bool board[5][5];
    int guesses;
    int maxGuesses;
    int locationX;
    int locationY;

    public:
    Battleship(int maxGuesses):guesses(0),maxGuesses(maxGuesses)
    {
        srand(std::time(0));
        locationX = rand() % 5;
        locationY = rand() % 5;
    }
    bool guess(int x, int y) 
    {
        guesses++;

        if (x == locationX && y == locationY) 
        {
            std::cout << "You hit the battleship!" << std::endl<<"You won in "<<getGuesses() <<"  guesses"<<std::endl;
            return true;
        } 
        else 
        {
            std::cout << "Miss...  " ;
            if (x == locationX)
            {
                std::cout << "The battleship is in the same row." << std::endl;
            } 
            else if (y == locationY) 
            {
                std::cout << "The battleship is in the same column." << std::endl;
            }
            return false;
        }
    }
    bool gameOver()
    {
        if(guesses == maxGuesses)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    int getGuesses ()
    {
        return guesses;
    }

};

int main()
{
    int maxGuesses = 5;
    Battleship game(maxGuesses);

    std::cout << "Welcome to Battleship!" << std::endl;
    std::cout << "You have " << maxGuesses << " guesses to find the battleship on a 5x5 grid." << std::endl;
    while (!game.gameOver()) 
    {
        int x, y;
        std::cout << "Enter your guess (row and column): ";
        std::cin >> x >> y;

        if (x < 0 || x >= 5 || y < 0 || y >= 5) 
        {
            std::cout << "Invalid coordinates. Please enter values between 0 and 4." << std::endl;
            continue;
        }

        if (game.guess(x, y)) 
        {
            break;
        }

        std::cout << "Guesses remaining: " << (maxGuesses - game.getGuesses()) << std::endl;
    }

    if (game.gameOver() && game.getGuesses() >= maxGuesses) 
    {
        std::cout << "Game over! You've used all your guesses." << std::endl;
    }


    return 0;
}
