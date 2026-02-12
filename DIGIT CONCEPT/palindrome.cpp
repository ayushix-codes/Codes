#include <iostream>
using namespace std;

int main() {
    int n, temp, digit, rev = 0;
    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (rev == n)
        cout <<n<< " is palindrome number";
    else
        cout <<n<< " is not palindrome number";

    return 0;
}
