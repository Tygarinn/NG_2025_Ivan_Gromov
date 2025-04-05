#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double number1 = 0, number2 = 0, result = 0;
    char operation = 0;

    cout << "What operation do you want to perform? (+, -, *, /, ^, s for sqrt)" << endl;
    cin >> operation;

    if (operation == 's') {
        cout << "Enter number to find square root of: ";
        cin >> number1;

        if (number1 >= 0) {
            result = sqrt(number1);
            cout << "Result: " << result << endl;
        } else {
            cout << "Error! Cannot take square root of a negative number." << endl;
        }
    } else {

        cout << "Enter first number" << endl;
        cin >> number1;

        cout << "Enter second number" << endl;
        cin >> number2;

        switch (operation)
        {
        case '+':
            result = number1 + number2;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = number1 - number2;
            cout << "Result: " << result << endl;
            break;

        case '*':
            result = number1 * number2;
            cout << "Result: " << result << endl;
            break;

        case '/':
            if (number2 != 0)
            {
                result = number1 / number2;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Error! Can't divide by 0" << endl;
            }
            break;

        case '^':
            result = pow(number1, number2);
            cout << "Result: " << result << endl;
            break;
        }
    }
    return 0;
}

