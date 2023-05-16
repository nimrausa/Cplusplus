#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int value, result;
    cout << "Enter value to take factorial of: ";
    cin >> value;

    result = factorial(value);
    cout << value << "! = " << result << endl;
    return 0;
}

int factorial(int number) {
    cout << "Factorial called with " << number << endl;
    int result;
    if (number == 1 || number == 0) {
        result = 1;
    }
    else {
        cout << "Calling factorial with " << number - 1 << endl;
        result = number * factorial(number - 1);
    }
    cout << "Returning " << result << " from factorial " << endl;
    return result;
}
