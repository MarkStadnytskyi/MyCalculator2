#include <iostream>
#include <cmath>
using namespace std;

float calculate(char operation, float first, float second)
{
    if (operation == '+')
    {
        return first + second;
    }

    if (operation == '-')
    {
        return first - second;
    }

    if (operation == '*')
    {
        return first * second;
    }

    if (operation == '/')
    {
        return first / second;
    }
}

int main()
{
    int choice = 1;
    while(choice == 1) {
        cout << "Enter your two numbers: \n\n";
        float first, second;
        cin >> first >> second;

        cout << "\n Enter your operation (+, -, *, /): ";
        char operation;
        cin >> operation;

        if (operation == '/' && second == 0)
        {
            cout << "Cannot divide by 0";
        }

        float result;


        result = calculate(operation, first, second);

        cout << "\n Result = " << result;

        cout << "\n\n\n Continue (1), or exit(2): ";
        cin >> choice;
    }
}