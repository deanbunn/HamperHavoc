#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "utils.h"
#include "contestant.h"

int main()
{

    //Seed for Random (Required for Role Die Function)
    srand((unsigned)time(0));

    //Display Start Message
    std::cout << "\nHamper Havoc!\n\n";

    //std::cout << RoleDie(20) << " was the d20 value";

    //Initiate Constestant
    Contestant contst1;
    contst1.setDisplayName("Lambert");
    contst1.setStr(RoleDie(20));

    std::cout << contst1.getStr() << " is " << contst1.getDisplayName() << " strength rating";

    //Clean view at the end
    std::cout << "\n\n";
        
    //End of Program
    return 0;

}
