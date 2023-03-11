#include <cstdlib>
#include "utils.h"

//Role Die Function
int RoleDie(int dSides)
{
   //Calculate Role Value
   int roleValue = (rand() % dSides) + 1;
 
   return roleValue;
}

