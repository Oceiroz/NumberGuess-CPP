// Guess The Number Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int GetInput(string inputMessage);
int main()
{
    srand((unsigned) time(NULL));
    int random = rand() % 1000;
    
    cout << random << endl;
    for (int x = 0; x < 10; x++)
    {
        cout << "try: " << x + 1 << " out of 10" << endl;
        int guess = GetInput("please input any number between 0 and 1000");
        if (guess > random)
        {
            cout << "too high" << endl;
        }
        else if (guess < random)
        {
            cout << "too low" << endl;
        }
        else
        {
            cout << "well done, you win" << endl;
            break;
        }
    }


}
int GetInput(string inputMessage)
{
    int userInput = 0;
    while (true)
    {
        cout << inputMessage << endl;
        string rawInput;
        getline(cin, rawInput);
        try
        {
            userInput = stoi(rawInput);
            if (userInput < 0 || userInput > 1000)
            {
                throw new exception;
            }
            break;
        }
        catch (...)
        {
            cout << "invalid input" << endl;
        }
    }
    cout << userInput << endl;
    return userInput;
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
