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

    //Declare Keep Fighting 
    bool bKeepFighting = true;

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

    do
    {
        //Declare Contestant Selections
        int nCnstSelctOne{0};
        int nCnstSelctTwo{0};
   
        //Declare Contestant Attack Values
        int nAttackChamp{0};
        int nAttackCntdr{0};

        //Initiate Contestants
        Contestant cnstChamp;
        Contestant cnstCntdr; 

        //Var for Keep Fighting Question Answer
        std::string sKeepFighting{""};

        // Display List of Fighters
        std::cout << "Contestants for this event:\n";

        // Display Contestant Menu
        for (Contestant hhcon : vContestants)
        {
            std::cout << hhcon.getID() << " = " << hhcon.getDisplayName() << "\n";
        }

        std::cout << "\n";
        std::cout << "Enter the number of your champion: ";
        std::cin >> nCnstSelctOne;

        std::cout << "\n";
        std::cout << "Enter the number of the contender: ";
        std::cin >> nCnstSelctTwo;

        //Check Submitted Numbers
        if(nCnstSelctOne > 0 && nCnstSelctOne <= vContestants.size() && nCnstSelctTwo > 0 && nCnstSelctTwo <= vContestants.size())
        {
            //Configure Contestants
            for(Contestant hhcnst : vContestants)
            {

                //Configure Champion
                if(nCnstSelctOne == hhcnst.getID())
                {
                    cnstChamp = hhcnst;
                }

                // Configure Contender
                if(nCnstSelctTwo == hhcnst.getID())
                {
                    cnstCntdr = hhcnst;
                }

            }// End of Configure Havoc Contestants for this Bout

            //Report Bout Choices
            std::cout << "\nYou chose to have " << cnstChamp.getDisplayName() << " fight " << cnstCntdr.getDisplayName() << "\n\n";

            //Calculate Fight
            nAttackChamp = cnstChamp.getCombinedStatBlock() + RoleDie(20);
            nAttackCntdr = cnstCntdr.getCombinedStatBlock() + RoleDie(20);

            //Report the Bout Results
            if(nAttackChamp >= nAttackCntdr)
            {
                std::cout << cnstChamp.getDisplayName() << " defeated " << cnstCntdr.getDisplayName() << " by a score of " << nAttackChamp << " to " << nAttackCntdr  << "\n";
            }
            else
            {
                std::cout << cnstCntdr.getDisplayName() << " defeated " << cnstChamp.getDisplayName() << " by a score of " << nAttackCntdr << " to " << nAttackChamp << "\n";
            }

            //Ask for Another Bout
            std::cout << "\nDo you want to have another bout? Enter \'Y\' for Yes\n\n";
            std::cin >> sKeepFighting;

            //Check for Another Bout Answer
            if(sKeepFighting != "Y")
            {
                bKeepFighting = false;
            }

        }
        else
        {
            bKeepFighting = false;
        }

    } while (bKeepFighting == true);
    

    //Clean view at the end
    std::cout << "\n\n";
        
    //End of Program
    return 0;

}
