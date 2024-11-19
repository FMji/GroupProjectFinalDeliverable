// GroupProjectFinalDeliverable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <sstream>
#include <fstream>
#include <tuple>
#include <iomanip>
#include <cstdint>

using namespace std;

//Challenge 1 Functions

//Challenge 2 Functions

//Challenge 3 Functions

//Challenge 4 Functions

//Challenge 5 Functions

//Challenge 6 Functions

//Challenge 7 Functions

//Challenge 8 Functions

//Main
int main() 
{
    cout << "Welcome to the CryptoPals Set 1 Challenges";

    int choice = 9;

    //while loop for the menu
    while(choice != 0){
        cout << "Choose your challenge. Enter 1 for challenge 1, 2 for challenge 2,..., 8 for challenge 8";
        cout << "To exit out of the menu, enter 0";
        cout << "Challenge 1: Convert hex to base64";
        cout << "Challenge 2: Fixed XOR";
        cout << "Challenge 3: Single-byte XOR cipher";
        cout << "Challenge 4: Detect single-character XOR";
        cout << "Challenge 5: Implement repeating-key XOR";
        cout << "Challenge 6: Break repeating-key XOR";
        cout << "Challenge 7: AES in ECB mode";
        cout << "Challenge 8: Detect AES in ECB mode";
        cin >> choice; 
        
        //switch statements to choose each challenge
        /*
        //While loop for letting the user have multiple attempts with an if statement before the challenge to ask for a hint    
        */
        switch (choice){
            case 0:
                cout << "Now exiting. Goodbye!";
                break;
            case 1:
                cout <<  "Challenge 1: Convert hex to base64";
                break;
            case 2:
                cout << "Challenge 2: Fixed XOR";
                break;
            case 3:
                cout << "Challenge 3: Single-byte XOR cipher";
                break;
            case 4:
                cout << "Challenge 4: Detect single-character XOR";
                break;
            case 5:
                cout << "Challenge 5: Implement repeating-key XOR";
                break;
            case 6:
                cout << "Challenge 6: Break repeating-key XOR";
                break;
            case 7:
                cout << "Challenge 7: AES in ECB mode";
                break;
            case 8:
                cout << "Challenge 8: Detect AES in ECB mode";
                break;
            default:
                cout << "Invalid Input. Please choose a challenge or enter 0 to exit!";
                break;    
        }
    }
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file