#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>


//Towel Definition
struct Towel
{
   std::string color{""};
   std::string size{""};
   std::string material{""};
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

    //Declare Hamper Number
    int nHampers{0};

    //Declare Hamper Report Message
    std::string sHamperMsg{""};
     
    //Declare High Hamper Amount Message
    std::string sHighHamperMsg{"Bra"};

    //Declare Towel Vector
    std::vector<Towel> vTowels;

    //Say it loud
    std::cout << "\nHamper Havoc!\n\n";
    
    //Ask How Many Hampers
    std::cout << "Enter how many hampers to wash: ";
    std::cin >> nHampers;

    //Determine Hamper Wash Message
    if(nHampers <= 5)
    {
       sHamperMsg = "That's an easy and nice wash day!"; 
    }
    else if(nHampers <= 10)
    {
       sHamperMsg = "Wow! That's a full load.";
    }
    else 
    {
       
       sHamperMsg = "Did you only do laundry once a year???";

       //Alert on Major Washing
       for(int i{0}; i < nHampers; i++)
       {
          sHighHamperMsg += "a";
       }

       //Display Major Washing Message
       std::cout << sHighHamperMsg + "\n\n";

    }

    //Display Hamper Report
    std::cout << "\nWe washed " << nHampers << " hampers.\n\n";
    std::cout << sHamperMsg << "\n\n";

    //Use Towel Stuct and Set Properties
    Towel bigTowel;
    bigTowel.color = "Green";
    bigTowel.size = "Large";
    bigTowel.material = "Cotton";

    //Second Towel 
    Towel bchTowel; 
    bchTowel.color = "Blue";
    bchTowel.size = "X-Large";
    bchTowel.material = "Polyester";

    //Test for Copy Towel
    Towel cpyTowel; 

    //Add Towels to Towel Vector
    vTowels.push_back(bigTowel);
    vTowels.push_back(bchTowel);

    //Display Towels
    for(Towel twl: vTowels)
    {
       //Report Out Towel Information
       std::cout << "Towel is a " << twl.size << " " << twl.color << " " << twl.material << " towel.\n\n";
      
       //Check If Needs to be Copied
       if(twl.color == "Blue")
       {
          cpyTowel = twl;
       }

    }//End of vTowels Foreach

    //Report Out Copy Towel Color
    std::cout << "Copy Towel is " << cpyTowel.color << "\n\n";

    //Play with Dice Based Upon Number of Hampers
    for(int y = 1; y <= nHampers; y++)
    {
       std::cout << "Hamper " << y << " had " << RoleDie(20) << " socks in it." << "\n\n";
    }

    //Clean view at the end
    std::cout << "\n\n";

    return 0;
}

