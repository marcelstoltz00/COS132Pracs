#include "Char.h"

char findNextChar(char current) 
{
    //Implement here
(current=='z')?(current='A'):(

    (current=='Z')?(current='a'):(current=current+1));

return current;

}


char findChar(char target, char current)
{
    char relay;
    //Implement here
(target==current)?( relay=target):(relay=findChar(target,findNextChar(current)));
return relay;


}