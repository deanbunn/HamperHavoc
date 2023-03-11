#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include "utils.h"

int main()
{

    //Seed for Random (Required for Role Die Function)
    srand((unsigned)time(0));

    //Display Start Message
    std::cout << "\nHamper Havoc!\n\n";

    std::cout << RoleDie(20) << " was the d20 value";

    //Clean view at the end
    std::cout << "\n\n";
        
    //End of Program
    return 0;

}
