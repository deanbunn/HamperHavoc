#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include "utils.h"
#include "contestant.h"

int main()
{

    //Seed for Random (Required for Role Die Function)
    srand((unsigned)time(0));

    //Contestants Vector
    std::vector<Contestant> vContestants; 

    //Contestant Names Vector
    std::vector<std::string> vContestantsNames {"Funmi","Alex","Owen","Sophie","Lambert","Melanie","Jesus"};

    //Var for Constestant ID
    int nHHID {0};

    //Declare Contestant Selections
    int nCnstSelctOne{0};
    int nCnstSelctTwo{0};
   
    //Declare Contestant Attack Values
    int nAttackOne{0};
    int nAttackTwo{0};

    //Sort Contestant Names
    sort(vContestantsNames.begin(),vContestantsNames.end());

    //Load Up Contestants Vector
    for(std::string hhcn: vContestantsNames)
    {
        //Initialize Contestant
        Contestant hhc { hhcn };

        //Increment Contestant ID 
        nHHID++;

        //Set Contestant ID
        hhc.setID(nHHID);

        //Set Contestant Stats
        hhc.setStr(RoleDie(6) + RoleDie(6) + RoleDie(6));
        hhc.setDex(RoleDie(6) + RoleDie(6) + RoleDie(6));
        hhc.setCon(RoleDie(6) + RoleDie(6) + RoleDie(6));
        hhc.setInt(RoleDie(6) + RoleDie(6) + RoleDie(6));
        hhc.setWis(RoleDie(6) + RoleDie(6) + RoleDie(6));
        hhc.setChr(RoleDie(6) + RoleDie(6) + RoleDie(6));

        //Add Contestant to Contestants Vector
        vContestants.push_back(hhc);
    }

    //Display Start Message
    std::cout << "\nHamper Havoc!\n\n";

    //Display List of Fighters 
    std::cout << "Contestants for this event:\n";

    //Display Contestant Menu
    for(Contestant hhcon: vContestants)
    {
        std::cout << hhcon.getID() << " = " << hhcon.getDisplayName() << "\n";
    }

    //Do While Loop Goes Here

    std::cout << "\n";
    std::cout << "Enter the number of your champion: ";
    std::cin >> nCnstSelctOne;

    std::cout << "\n";
    std::cout << "Enter the number of contender: ";
    std::cin >> nCnstSelctTwo;

    std::cout << "\n\n";



    
    //Clean view at the end
    std::cout << "\n\n";
        
    //End of Program
    return 0;

}
