#include "RangeBasedPasswordCracker.h"

int decideAndSearch(int guess, int password, int low, int high) {
    // Implement here
    int value;
 (isLessThan(guess,password)?
(value=crackPassword(guess+1,high,password)):
(value=crackPassword(low,guess-1,password)));
return value;

}


int crackPassword(int low, int high, int password) {
    // Implement here
    int guess = (low+high)/2;
    printGuess(guess);
    int value;
    isEqual(guess,password)?    
                (value=foundPassword(guess)):
                (value=decideAndSearch(guess,password,low,high));
    return value;
        
}
