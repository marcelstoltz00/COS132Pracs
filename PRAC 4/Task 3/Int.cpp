#include "Int.h"

int findInt(int target, int current)
{
    //Implement here
    int value;
(current==target)?(value=current):(value=findInt(target,current+1));

return value;


}

char convertChar(int character){
    //Implement here
    character=character+'0';
return character;

}

