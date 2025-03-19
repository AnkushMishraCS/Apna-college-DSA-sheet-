#include <iostream>
using namespace std;

void findMaxMin(int arr[], int size, int &maximum, int &minimum) {
    maximum = arr[0];
    minimum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
}

int main() {
    int numbers[] = {12, 5, 7, 19, 3, 21, 10};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int maximum, minimum;

    findMaxMin(numbers, length, maximum, minimum);

    cout << "Maximum Element: " << maximum << endl;
    cout << "Minimum Element: " << minimum << endl;

    return 0;
}
