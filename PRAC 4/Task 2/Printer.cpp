#include "Printer.h"
#include <iostream>
using namespace std;

void printGuess(int guess)
{
    cout << "I Guessed: " << guess << endl;
}

void printNotFound()
{
    cout << "Not Found" << endl;
}

int foundPassword(int password)
{
    cout << "You cracked it!" << endl;
    cout << "The password is " << password << endl;
    return password;
}

void printCurrentGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess)
{
    //
cout<<password<<" <<password "<<guessedDigit << "<<guessed digit "<<numDigitsLeftToGuess<<"<<digits left "<<currentPasswordGuess<<"<< current password guess"<<endl;


/*

    //
    string equal = "";
    string passwordGuessStr = to_string(currentPasswordGuess);

    int length = passwordGuessStr.length();
cout<<2;

    if (currentPasswordGuess == 0)
    {
        passwordGuessStr = "";
        for (int i = 0; i < numDigitsLeftToGuess; i++)
        {
            passwordGuessStr += "_";
        }
    }
    else
    {
        for (int i = 1; i <= numDigitsLeftToGuess; i++)
        {
            passwordGuessStr.replace(length - i, 1, "_");
        }
    }

    cout<<3;

    if(numDigitsLeftToGuess != 0){
        cout << "Current Progress: " << passwordGuessStr;
        cout << "\t Guessing Digit: " << guessedDigit << endl;
    }else{
        foundPassword(password);
    }*/
    cout<<"after"<<endl;
}
