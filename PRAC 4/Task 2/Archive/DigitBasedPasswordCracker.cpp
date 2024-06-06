#include "DigitBasedPasswordCracker.h"
#include <iostream>
using namespace std;


int crackPassswordPerDigit(int password, int numDigits){
    // Implement here
   // cout<<"the number of digits"<<numDigits<<endl;
    return crackDigit(password,0,numDigits,0);

}

// Modified processDigitGuess function
int processDigitGuess(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {

    
    int result;
    int divider = (pow(10,numDigitsLeftToGuess-1));//works
 // cout<<divider<<"<<divider"<<numDigitsLeftToGuess<<endl;

   int valueOfNewDigit= password/divider % 10;//works
//cout<<valueOfNewDigit<<"<<new digit"<<endl;
         (valueOfNewDigit==guessedDigit)?
            (//result is equal dws volgende digit in die ry 
            result = crackDigit(password,0,numDigitsLeftToGuess-1,(currentPasswordGuess=((currentPasswordGuess)*10+valueOfNewDigit))))
                
               :
                ( result=crackDigit(password,guessedDigit+1,numDigitsLeftToGuess,currentPasswordGuess));
    return result;

}


// Modified crackDigit function to use processDigitGuess
int crackDigit(int password, int guessedDigit, int numDigitsLeftToGuess, int currentPasswordGuess) {
    // Implement here
    int value;
    printCurrentGuess(password,guessedDigit,numDigitsLeftToGuess,currentPasswordGuess);
            (numDigitsLeftToGuess==0)?
                    (value=currentPasswordGuess):
                    (value=processDigitGuess(password,guessedDigit,numDigitsLeftToGuess,currentPasswordGuess));
    return value;
}
