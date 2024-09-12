/**
 * Name: Pranav Pramod
 * Program Name: Calculator
 * Date: 9/12/2024
 * Extra:
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num1, num2;
    bool isContinue = true;

    while (isContinue)
    {
        cout << "Enter your first number: " << endl;
        cin >> num1;

        cout << "Enter your second number: " << endl;
        cin >> num2;

        if (num2 == 0)
        {
            cout << "\nCannot divide by 0!" << endl;
        }
        else {
            isContinue = false;
        }
    }

    cout << "\nSum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Quotient: " << round((num1 / num2) * 100) / 100 << endl;
    cout << "Modulus: " << (int)num1 % (int)num2 << endl;
    cout << "Incremented: " << ++num1 << endl;
    cout << "Decremented: " << --num2 << endl;

    return 0;
}