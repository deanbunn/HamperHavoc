#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main()
{
    std::cout << "Hamper Havoc!\n\n";
    //cout << "|X|X|X|X|\n";
    //cout << "|X|X|X|X|\n";
    //cout << "_________\n";

    cout << (char)(218); //left upper corner
    cout << " ";
    cout << (char)(217);
    cout << " ";
    cout << (char)(191); //right upper corner
    cout << " ";
    cout << (char)(196); //horizontal line
    cout << " ";
    cout << (char)(180);
    cout << " ";
    cout << (char)(179); //vertical line
    cout << " ";
    cout << (char)(192); //left lower corner

    cout << "\n\n";

    return 0;
}

