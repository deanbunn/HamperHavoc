#include <iostream>
#include <string>


int main()
{

    //Declare Hamper Number
    int nHampers{0};

    //Declare Hamper Report Message
    std::string sHamperMsg{""};

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
          std::cout << "Brah! ";
       }

    }

    //Display Hamper Report
    std::cout << "\nWe washed " << nHampers << " hampers.\n\n";
    std::cout << sHamperMsg;

    //Clean view at the end
    std::cout << "\n\n";

    return 0;
}

