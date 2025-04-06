#include <iostream>
using namespace std;

int main() {
    int number, fac = 1;

    cout << "Enter a factorial number: ";
    cin >> number;

    for (int i = 1; i <= number; i++) {
        fac *= i;
    }

    cout << "Factorial of " << number << " is " << fac << endl;
    return 0;
}
