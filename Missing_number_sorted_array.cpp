#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6;   // actual range is 1 to n
    int size = 5;

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++)
        actualSum += arr[i];

    cout << "Missing element: " << expectedSum - actualSum;
    return 0;
}
