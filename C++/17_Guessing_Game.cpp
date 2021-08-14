#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7                   ;
    int guess                           ;
    int guessCount = 0                  ;
    int guessLimit = 3                  ;

    bool outofGuesses = false           ;


    while(secretNum != guess)
    {
        cout << "Enter Guess : "                        ;
        cin  >> guess                                   ;
        guessCount += 1                                 ;
        cout << "\tGuess Count : " << guessCount<< endl ;

        if(guessCount == guessLimit)
        {
            cout << "\nGuess Count Limited"     << endl ;
            outofGuesses = true                         ;
            break                                       ;
        }
    }

    if(outofGuesses == true)
    {
        cout << "\nYou Loose"                           ;
    }
    else
    {
        cout << "\nYou Win"                             ;
    }

    return 0 ;
}