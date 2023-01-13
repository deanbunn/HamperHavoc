#include <iostream>

int main()
{

    //Say it loud
    std::cout << "\nHamper Havoc!\n\n";
    
    //Declare Test Number
    int nDtest {0};

    //Ask How Many Hampers
    std::cout << "Enter how many hampers to wash: ";
    std::cin >> nDtest;

    //Display Hamper Report
    std::cout << "\nWe washed " << nDtest << " hampers";

    //Clean view at the end
    std::cout << "\n\n";

    return 0;
}

