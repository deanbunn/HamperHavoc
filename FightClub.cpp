#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>


//Fighter Definition
struct fighter
{
   int id{0};
   int str{0};
   int dex{0};
   int wis{0};
   int con{0};
   int chr{0};
   int itl{0};
   std::string name{""};
};

//Role Die Function
int RoleDie(int dSides)
{
   //Calculate Role Value
   int roleValue = (rand() % dSides) + 1;

   return roleValue;
}


int main()
{

   //Seed for Random (Required for Role Die Function)
   srand((unsigned)time(0));

   //Declare Fighter Vector
   std::vector<fighter> vFighters;

   //Declare Fighter Choices
   int nFighterOne{0};
   int nFighterTwo{0};
   
   //Declare Fighter Attack Values
   int nAttackOne{0};
   int nAttackTwo{0};

   //Initialize Fighters
   fighter ftrOne;
   fighter ftrTwo;   

   //Funmi 
   fighter ftrFunmi;
   ftrFunmi.id = 1;
   ftrFunmi.str = 12;
   ftrFunmi.dex = 15;
   ftrFunmi.wis = 17;
   ftrFunmi.con = 12;
   ftrFunmi.chr = 14;
   ftrFunmi.itl = 17;
   ftrFunmi.name = "Funmi";
   vFighters.push_back(ftrFunmi);

   //Owen
   fighter ftrOwen;
   ftrOwen.id = 2;
   ftrOwen.str = 10;
   ftrOwen.dex = 13;
   ftrOwen.wis = 17;
   ftrOwen.con = 11;
   ftrOwen.chr = 15;
   ftrOwen.itl = 11;
   ftrOwen.name = "Owen";
   vFighters.push_back(ftrOwen);

   //Alex
   fighter ftrAlex;
   ftrAlex.id = 3;
   ftrAlex.str = 14;
   ftrAlex.dex = 12;
   ftrAlex.wis = 16;
   ftrAlex.con = 19;
   ftrAlex.chr = 12;
   ftrAlex.itl = 15;
   ftrAlex.name = "Alex";
   vFighters.push_back(ftrAlex);

   //Sophie
   fighter ftrSophie;
   ftrSophie.id = 4;
   ftrSophie.str = 18;
   ftrSophie.dex = 19;
   ftrSophie.wis = 17;
   ftrSophie.con = 14;
   ftrSophie.chr = 15;
   ftrSophie.itl = 19;
   ftrSophie.name = "Sophie";
   vFighters.push_back(ftrSophie);

   //Lambert
   fighter ftrLambert;
   ftrLambert.id = 5;
   ftrLambert.str = 19;
   ftrLambert.dex = 12;
   ftrLambert.wis = 14;
   ftrLambert.con = 13;
   ftrLambert.chr = 12;
   ftrLambert.itl = 16;
   ftrLambert.name = "Lambert";
   vFighters.push_back(ftrLambert);

   //Melanie
   fighter ftrMelanie;
   ftrMelanie.id = 6;
   ftrMelanie.str = 10;
   ftrMelanie.dex = 16;
   ftrMelanie.wis = 17;
   ftrMelanie.con = 14;
   ftrMelanie.chr = 16;
   ftrMelanie.itl = 14;
   ftrMelanie.name = "Melanie";
   vFighters.push_back(ftrMelanie);

   //Display List of Fighters 
   std::cout << "List of Tonight's Fighters\n";

   for(fighter fghtr: vFighters)
   {
      std::cout << fghtr.id << " = " << fghtr.name << "\n";
   }

   std::cout << "\n";
   std::cout << "Enter the number of first fighter choice: ";
   std::cin >> nFighterOne;

   std::cout << "\n";
   std::cout << "Enter the number of second fighter choice: ";
   std::cin >> nFighterTwo;

   std::cout << "\n\n";

   for(fighter fghtr: vFighters)
   {
      if(nFighterOne == fghtr.id)
      {
         ftrOne = fghtr;
      }

      if(nFighterTwo == fghtr.id)
      {
         ftrTwo = fghtr;
      }
   }


   std::cout << "You choose to have " << ftrOne.name << " fight " << ftrTwo.name << "\n\n";

   nAttackOne = RoleDie(20);
   nAttackTwo = RoleDie(20);

   if(nAttackOne >= nAttackTwo)
   {
      std::cout << ftrOne.name << " defeated " << ftrTwo.name << " by a score of " << nAttackOne << " to " << nAttackTwo  << "\n";
   }
   else
   {
      std::cout << ftrTwo.name << " defeated " << ftrOne.name << " by a score of " << nAttackTwo << " to " << nAttackOne << "\n";
   }


   std::cout << "\n\n";

   return 0;
}
