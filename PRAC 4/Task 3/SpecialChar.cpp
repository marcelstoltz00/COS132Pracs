#include "SpecialChar.h"

char findSpecialChar(char target, int current)
{ 
    //Implement here
    int send;
(target==current)?(send=current):(send=findSpecialChar(target,current+1));
return send;





}